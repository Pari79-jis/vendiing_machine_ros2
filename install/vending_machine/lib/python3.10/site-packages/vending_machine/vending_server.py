#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from vending_machine_interfaces.srv import VendingMachine
import random
from datetime import datetime

MENU = {
    "sleepy_owl_coffee":    {"price": 120.0,  "stock": 8},
    "paper_boat_juice":     {"price": 45.0,   "stock": 15},
    "amul_protein_lassi":   {"price": 50.0,   "stock": 12},
    "kurkure_masala":       {"price": 20.0,   "stock": 20},
    "paneer_sandwich":      {"price": 160.0,  "stock": 4},
    "maggi_cuppa":          {"price": 50.0,   "stock": 10},
    "banana_milk":          {"price": 200.0,  "stock": 6},
    "buldak_ramen":         {"price": 240.0,  "stock": 5},
    "monster_energy_drink": {"price": 180.0,  "stock": 7},
    "honey_butter_chips":   {"price": 190.0,  "stock": 0},
    "pocky_sticks":         {"price": 150.0,  "stock": 11},
    "celsius_energy":       {"price": 180.0,  "stock": 9},
    "greek_yogurt_drink":   {"price": 220.0,  "stock": 6},
    "kinder_bueno":         {"price": 140.0,  "stock": 14},
    "stroopwafel":          {"price": 120.0,  "stock": 8},
    "anker_usb_c_cable":    {"price": 999.0,  "stock": 3},
    "baseus_power_bank":    {"price": 1850.0, "stock": 2},
    "biore_uv_sunscreen":   {"price": 490.0,  "stock": 5},
    "dettol_wipes":         {"price": 99.0,   "stock": 18},
    "tiger_balm_mini":      {"price": 150.0,  "stock": 0},
}
VALID_HEROES = [
    "Iron Man", "Spider-Man", "Thor",
    "Captain America", "Black Widow", "Hulk",
]

BIBLE_VERSES = [
    ("John 3:16",        "For God so loved the world that he gave his one and only Son."),
    ("Psalm 23:1",       "The Lord is my shepherd, I lack nothing."),
    ("Philippians 4:13", "I can do all this through him who gives me strength."),
    ("Jeremiah 29:11",   "For I know the plans I have for you, declares the Lord."),
    ("Romans 8:28",      "And we know that in all things God works for the good."),
    ("Proverbs 3:5",     "Trust in the Lord with all your heart."),
    ("Isaiah 41:10",     "Do not fear, for I am with you."),
]


class VendingMachineServer(Node):

    def __init__(self):
        super().__init__("vending_machine_server")
        self.menu = MENU
        self.srv = self.create_service(
            VendingMachine,
            "vending_machine",
            self.handle_request,
        )
        self.get_logger().info("Vending Machine Server is ready!")

    def handle_request(self, request, response):
        item   = request.selected_item.strip().lower()
        amount = request.amount_inserted
        hero   = request.superhero_choice.strip()

        response.success          = False
        response.message          = ""
        response.change           = 0.0
        response.remaining_amount = 0.0
        response.reward_message   = ""
        response.sunday_special   = ""
        response.bible_verse      = ""

        if item not in self.menu:
            response.message = f"Sorry! '{item}' is not available in this machine."
            return response

        item_data = self.menu[item]
        price     = item_data["price"]
        stock     = item_data["stock"]

        if stock <= 0:
            response.message = f"Sorry! '{item}' is currently OUT OF STOCK."
            return response

        if amount < price:
            shortfall = round(price - amount, 2)
            response.remaining_amount = shortfall
            response.message = (
                f"Insufficient amount! '{item}' costs Rs.{price:.2f}. "
                f"You inserted Rs.{amount:.2f}. "
                f"Please insert Rs.{shortfall:.2f} more."
            )
            return response

        change = round(amount - price, 2)
        self.menu[item]["stock"] -= 1
        remaining_stock = self.menu[item]["stock"]

        response.success = True
        response.change  = change

        if change > 0:
            response.message = (
                f"Purchase successful! Enjoy your {item}. "
                f"Your change is Rs.{change:.2f}. "
                f"Stock remaining: {remaining_stock}."
            )
        else:
            response.message = (
                f"Purchase successful! Enjoy your {item}. "
                f"Exact amount received. "
                f"Stock remaining: {remaining_stock}."
            )

        if datetime.now().weekday() == 6:
            ref, verse = random.choice(BIBLE_VERSES)
            response.sunday_special = "Blessed Sunday! You get a FREE CANDY with your purchase!"
            response.bible_verse    = f"{ref}: {verse}"

        response.reward_message = self._compute_reward(price, hero)

        self.get_logger().info(
            f"Sold '{item}' for Rs.{price:.2f} | "
            f"Paid: Rs.{amount:.2f} | Change: Rs.{change:.2f} | "
            f"Stock left: {remaining_stock}"
        )

        return response

    def _compute_reward(self, price, hero):
        hero_display = hero if hero in VALID_HEROES else "your chosen hero"
        if price >= 100.0:
            return f"MARVEL TOY UNLOCKED! You won a {hero_display} action figure toy!"
        elif price >= 50.0:
            return f"MARVEL COLLECTIBLE UNLOCKED! You won a {hero_display} photo card!"
        return ""


def main(args=None):
    rclpy.init(args=args)
    server = VendingMachineServer()
    try:
        rclpy.spin(server)
    except KeyboardInterrupt:
        pass
    finally:
        server.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
