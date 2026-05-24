#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to vending_machine_interfaces__srv__VendingMachine_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VendingMachine_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub selected_item: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub amount_inserted: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub superhero_choice: std::string::String,

}



impl Default for VendingMachine_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::VendingMachine_Request::default())
  }
}

impl rosidl_runtime_rs::Message for VendingMachine_Request {
  type RmwMsg = super::srv::rmw::VendingMachine_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        selected_item: msg.selected_item.as_str().into(),
        amount_inserted: msg.amount_inserted,
        superhero_choice: msg.superhero_choice.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        selected_item: msg.selected_item.as_str().into(),
      amount_inserted: msg.amount_inserted,
        superhero_choice: msg.superhero_choice.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      selected_item: msg.selected_item.to_string(),
      amount_inserted: msg.amount_inserted,
      superhero_choice: msg.superhero_choice.to_string(),
    }
  }
}


// Corresponds to vending_machine_interfaces__srv__VendingMachine_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VendingMachine_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub change: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub remaining_amount: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reward_message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sunday_special: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bible_verse: std::string::String,

}



impl Default for VendingMachine_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::VendingMachine_Response::default())
  }
}

impl rosidl_runtime_rs::Message for VendingMachine_Response {
  type RmwMsg = super::srv::rmw::VendingMachine_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        change: msg.change,
        remaining_amount: msg.remaining_amount,
        reward_message: msg.reward_message.as_str().into(),
        sunday_special: msg.sunday_special.as_str().into(),
        bible_verse: msg.bible_verse.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      change: msg.change,
      remaining_amount: msg.remaining_amount,
        reward_message: msg.reward_message.as_str().into(),
        sunday_special: msg.sunday_special.as_str().into(),
        bible_verse: msg.bible_verse.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      change: msg.change,
      remaining_amount: msg.remaining_amount,
      reward_message: msg.reward_message.to_string(),
      sunday_special: msg.sunday_special.to_string(),
      bible_verse: msg.bible_verse.to_string(),
    }
  }
}






#[link(name = "vending_machine_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__vending_machine_interfaces__srv__VendingMachine() -> *const std::ffi::c_void;
}

// Corresponds to vending_machine_interfaces__srv__VendingMachine
#[allow(missing_docs, non_camel_case_types)]
pub struct VendingMachine;

impl rosidl_runtime_rs::Service for VendingMachine {
    type Request = VendingMachine_Request;
    type Response = VendingMachine_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__vending_machine_interfaces__srv__VendingMachine() }
    }
}


