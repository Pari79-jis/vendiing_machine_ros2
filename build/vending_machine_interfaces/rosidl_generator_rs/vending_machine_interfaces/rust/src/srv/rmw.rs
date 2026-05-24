#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "vending_machine_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vending_machine_interfaces__srv__VendingMachine_Request() -> *const std::ffi::c_void;
}

#[link(name = "vending_machine_interfaces__rosidl_generator_c")]
extern "C" {
    fn vending_machine_interfaces__srv__VendingMachine_Request__init(msg: *mut VendingMachine_Request) -> bool;
    fn vending_machine_interfaces__srv__VendingMachine_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VendingMachine_Request>, size: usize) -> bool;
    fn vending_machine_interfaces__srv__VendingMachine_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VendingMachine_Request>);
    fn vending_machine_interfaces__srv__VendingMachine_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VendingMachine_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<VendingMachine_Request>) -> bool;
}

// Corresponds to vending_machine_interfaces__srv__VendingMachine_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VendingMachine_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub selected_item: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub amount_inserted: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub superhero_choice: rosidl_runtime_rs::String,

}



impl Default for VendingMachine_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vending_machine_interfaces__srv__VendingMachine_Request__init(&mut msg as *mut _) {
        panic!("Call to vending_machine_interfaces__srv__VendingMachine_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VendingMachine_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vending_machine_interfaces__srv__VendingMachine_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vending_machine_interfaces__srv__VendingMachine_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vending_machine_interfaces__srv__VendingMachine_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VendingMachine_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VendingMachine_Request where Self: Sized {
  const TYPE_NAME: &'static str = "vending_machine_interfaces/srv/VendingMachine_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vending_machine_interfaces__srv__VendingMachine_Request() }
  }
}


#[link(name = "vending_machine_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vending_machine_interfaces__srv__VendingMachine_Response() -> *const std::ffi::c_void;
}

#[link(name = "vending_machine_interfaces__rosidl_generator_c")]
extern "C" {
    fn vending_machine_interfaces__srv__VendingMachine_Response__init(msg: *mut VendingMachine_Response) -> bool;
    fn vending_machine_interfaces__srv__VendingMachine_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VendingMachine_Response>, size: usize) -> bool;
    fn vending_machine_interfaces__srv__VendingMachine_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VendingMachine_Response>);
    fn vending_machine_interfaces__srv__VendingMachine_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VendingMachine_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<VendingMachine_Response>) -> bool;
}

// Corresponds to vending_machine_interfaces__srv__VendingMachine_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VendingMachine_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub change: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub remaining_amount: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reward_message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sunday_special: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bible_verse: rosidl_runtime_rs::String,

}



impl Default for VendingMachine_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vending_machine_interfaces__srv__VendingMachine_Response__init(&mut msg as *mut _) {
        panic!("Call to vending_machine_interfaces__srv__VendingMachine_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VendingMachine_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vending_machine_interfaces__srv__VendingMachine_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vending_machine_interfaces__srv__VendingMachine_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vending_machine_interfaces__srv__VendingMachine_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VendingMachine_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VendingMachine_Response where Self: Sized {
  const TYPE_NAME: &'static str = "vending_machine_interfaces/srv/VendingMachine_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vending_machine_interfaces__srv__VendingMachine_Response() }
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


