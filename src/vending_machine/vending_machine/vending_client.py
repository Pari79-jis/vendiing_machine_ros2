#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from vending_machine_interfaces.srv import VendingMachine

MARVEL_HEROES = [
    "Iron Man", "Spider-Man", "Thor",
    "Captain America", "Black Widow", "Hulk",
]

LINE = "=" * 60


class VendingMachineClient(Node):

    def __init__(self):
        super().__init__("vending_machine_client")
        self.declare_parameter("test_mode", False)
        self.client = self.create_client(VendingMachine, "vending_machine")
        self.get_logger().info("Connecting to vending machine server...")
        while not self.client.wait_for_service(timeout_sec=3.0):
            self.get_logger().info("Server not available yet. Is vending_server running?")
        self.get_logger().info("Connected! Ready to accept purchases.\n")

    def purchase(self, item, amount, hero=""):
        req = VendingMachine.Request()
        req.selected_item    = item
        req.amount_inserted  = float(amount)
        req.superhero_choice = hero

        future = self.client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        res = future.result()

        return {
            "success":          res.success,
            "message":          res.message,
            "change":           res.change,
            "remaining_amount": res.remaining_amount,
            "reward_message":   res.reward_message,
            "sunday_special":   res.sunday_special,
            "bible_verse":      res.bible_verse,
        }

    @staticmethod
    def _print_result(label, result):
        print(f"\n{LINE}")
        print(f"  {label}")
        print(LINE)
        status = "SUCCESS" if result["success"] else "FAILED"
        print(f"  Status  : [{status}]")
        print(f"  Message : {result['message']}")
        if result["change"] > 0:
            print(f"  Change  : Rs.{result['change']:.2f} returned")
        if result[in()"remaining_amount"] > 0:
            print(f"  Need    : Rs.{result['remaining_amount']:.2f} more")
        if result["reward_message"]:
            print(f"\n  [REWARD]  {result['reward_message']}")
        if result["sunday_special"]:
            print(f"\n  [SUNDAY]  {result['sunday_special']}")
        if result["bible_verse"]:
            print(f"  [VERSE]   {result['bible_verse']}")
        print(LINE)

    def run_tests(self):
        print(f"\n{'*' * 60}")
        print("  VENDING MACHINE — AUTOMATED TEST SUITE")
        print(f"{'*' * 60}\n")

        test_cases = [
            ("TC-1: Invalid item",  "burger",             50.0,   "",                False),
            ("TC-2: Underpaid",     "paneer_sandwich",    100.0,  "",                False),
            ("TC-3: Exact payment", "maggi_cuppa",         50.0,  "Iron Man",        True),
            ("TC-4: Overpaid",      "kurkure_masala",      50.0,  "Thor",            True),
            ("TC-5: Out of stock",  "honey_butter_chips", 190.0,  "",                False),
            ("TC-6: Photo reward",  "amul_protein_lassi",  55.0,  "Spider-Man",      True),
            ("TC-7: Toy reward",    "paneer_sandwich",    200.0,  "Captain America", True),
        ]

        passed = 0
        total  = len(test_cases)

        for label, item, amount, hero, expected in test_cases:
            result = self.purchase(item, amount, hero)
            self._print_result(label, result)
            if result["success"] == expected:
                print(f"  Assertion : PASS (expected success={expected})")
                passed += 1
            else:
                print(f"  Assertion : FAIL (expected={expected}, got={result['success']})")

        print(f"\n{'─' * 60}")
        print(f"  TEST RESULTS: {passed}/{total} passed")
        print(f"{'─' * 60}\n")

    def run_interactive(self):
        print(f"\n{'*' * 60}")
        print("  VENDING MACHINE — INTERACTIVE MODE")
        print(f"{'*' * 60}")
        print("\n  Available items and prices:")
        print("  ─────────────────────────────────────────────────────────")
        print("  1.  sleepy_owl_coffee     ₹120  ")
        print("  2.  paper_boat_juice      ₹45   ")
        print("  3.  amul_protein_lassi    ₹50   ")
        print("  4.  kurkure_masala        ₹20   ")
        print("  5.  paneer_sandwich       ₹160  ")
        print("  6.  maggi_cuppa           ₹50   ")
        print("  7.  banana_milk           ₹200  ")
        print("  8.  buldak_ramen          ₹240  ")
        print("  9.  monster_energy_drink  ₹180  ")
        print("  10. pocky_sticks          ₹150  ")
        print("  11. celsius_energy        ₹180  ")
        print("  12. greek_yogurt_drink    ₹220  ")
        print("  13. kinder_bueno          ₹140  ")
        print("  14. stroopwafel           ₹120  ")
        print("  15. anker_usb_c_cable     ₹999  ")
        print("  16. baseus_power_bank     ₹1850 ")
        print("  17. biore_uv_sunscreen    ₹490  ")
        print("  18. dettol_wipes          ₹99   ")
        print("  19. honey_butter_chips    ₹190  [OUT OF STOCK]")
        print("  20. tiger_balm_mini       ₹150  [OUT OF STOCK]")
        print("  ─────────────────────────────────────────────────────────")
        print("  Type 'quit' at any time to exit.\n")

        while True:
            item = input("\n  Enter item name: ").strip()
            if item.lower() in ("quit", "exit", "q"):
                print("\n  Thank you! Goodbye!\n")
                break

            try:
                amount = float(input("  Enter amount (Rs.): ").strip())
            except ValueError:
                print("  [Error] Please enter a valid number.")
                continue

            hero = ""
            if amount >= 50.0:
                print("\n  Marvel Reward available! Choose your superhero:")
                for i, h in enumerate(MARVEL_HEROES, start=1):
                    print(f"    {i}. {h}")
                raw = input("  Enter number or name: ").strip()
                if raw.isdigit() and 1 <= int(raw) <= len(MARVEL_HEROES):
                    hero = MARVEL_HEROES[int(raw) - 1]
                elif raw in MARVEL_HEROES:
                    hero = raw
                else:
                    hero = raw

            result = self.purchase(item, amount, hero)
            self._print_result(f"{item.upper()} | Rs.{amount:.2f}", result)


def main(args=None):
    rclpy.init(args=args)
    client = VendingMachineClient()
    test_mode = client.get_parameter("test_mode").get_parameter_value().bool_value
    try:
        if test_mode:
            client.run_tests()
        else:
            client.run_interactive()
    except KeyboardInterrupt:
        print("\n  Interrupted.")
    finally:
        client.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()