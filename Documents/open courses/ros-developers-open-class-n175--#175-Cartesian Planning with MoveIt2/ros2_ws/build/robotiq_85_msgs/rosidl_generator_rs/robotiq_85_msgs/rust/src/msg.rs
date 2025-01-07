pub mod rmw {
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[link(name = "robotiq_85_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robotiq_85_msgs__msg__GripperCmd() -> *const std::os::raw::c_void;
}

#[link(name = "robotiq_85_msgs__rosidl_generator_c")]
extern "C" {
    fn robotiq_85_msgs__msg__GripperCmd__init(msg: *mut GripperCmd) -> bool;
    fn robotiq_85_msgs__msg__GripperCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripperCmd>, size: usize) -> bool;
    fn robotiq_85_msgs__msg__GripperCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripperCmd>);
    fn robotiq_85_msgs__msg__GripperCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripperCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<GripperCmd>) -> bool;
}

// Corresponds to robotiq_85_msgs__msg__GripperCmd
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperCmd {
    pub emergency_release: bool,
    pub emergency_release_dir: u32,
    pub stop: bool,
    pub position: f32,
    pub speed: f32,
    pub force: f32,
}



impl Default for GripperCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robotiq_85_msgs__msg__GripperCmd__init(&mut msg as *mut _) {
        panic!("Call to robotiq_85_msgs__msg__GripperCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripperCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robotiq_85_msgs__msg__GripperCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robotiq_85_msgs__msg__GripperCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robotiq_85_msgs__msg__GripperCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripperCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripperCmd where Self: Sized {
  const TYPE_NAME: &'static str = "robotiq_85_msgs/msg/GripperCmd";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robotiq_85_msgs__msg__GripperCmd() }
  }
}


#[link(name = "robotiq_85_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robotiq_85_msgs__msg__GripperStat() -> *const std::os::raw::c_void;
}

#[link(name = "robotiq_85_msgs__rosidl_generator_c")]
extern "C" {
    fn robotiq_85_msgs__msg__GripperStat__init(msg: *mut GripperStat) -> bool;
    fn robotiq_85_msgs__msg__GripperStat__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripperStat>, size: usize) -> bool;
    fn robotiq_85_msgs__msg__GripperStat__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripperStat>);
    fn robotiq_85_msgs__msg__GripperStat__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripperStat>, out_seq: *mut rosidl_runtime_rs::Sequence<GripperStat>) -> bool;
}

// Corresponds to robotiq_85_msgs__msg__GripperStat
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperStat {
    pub header: std_msgs::msg::rmw::Header,
    pub is_ready: bool,
    pub is_reset: bool,
    pub is_moving: bool,
    pub obj_detected: bool,
    pub fault_status: u8,
    pub position: f32,
    pub requested_position: f32,
    pub current: f32,
}



impl Default for GripperStat {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robotiq_85_msgs__msg__GripperStat__init(&mut msg as *mut _) {
        panic!("Call to robotiq_85_msgs__msg__GripperStat__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripperStat {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robotiq_85_msgs__msg__GripperStat__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robotiq_85_msgs__msg__GripperStat__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robotiq_85_msgs__msg__GripperStat__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripperStat {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripperStat where Self: Sized {
  const TYPE_NAME: &'static str = "robotiq_85_msgs/msg/GripperStat";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robotiq_85_msgs__msg__GripperStat() }
  }
}


}  // mod rmw


#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperCmd {
    pub emergency_release: bool,
    pub emergency_release_dir: u32,
    pub stop: bool,
    pub position: f32,
    pub speed: f32,
    pub force: f32,
}



impl Default for GripperCmd {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::GripperCmd::default())
  }
}

impl rosidl_runtime_rs::Message for GripperCmd {
  type RmwMsg = crate::msg::rmw::GripperCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        emergency_release: msg.emergency_release,
        emergency_release_dir: msg.emergency_release_dir,
        stop: msg.stop,
        position: msg.position,
        speed: msg.speed,
        force: msg.force,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      emergency_release: msg.emergency_release,
      emergency_release_dir: msg.emergency_release_dir,
      stop: msg.stop,
      position: msg.position,
      speed: msg.speed,
      force: msg.force,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      emergency_release: msg.emergency_release,
      emergency_release_dir: msg.emergency_release_dir,
      stop: msg.stop,
      position: msg.position,
      speed: msg.speed,
      force: msg.force,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripperStat {
    pub header: std_msgs::msg::Header,
    pub is_ready: bool,
    pub is_reset: bool,
    pub is_moving: bool,
    pub obj_detected: bool,
    pub fault_status: u8,
    pub position: f32,
    pub requested_position: f32,
    pub current: f32,
}



impl Default for GripperStat {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::GripperStat::default())
  }
}

impl rosidl_runtime_rs::Message for GripperStat {
  type RmwMsg = crate::msg::rmw::GripperStat;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        is_ready: msg.is_ready,
        is_reset: msg.is_reset,
        is_moving: msg.is_moving,
        obj_detected: msg.obj_detected,
        fault_status: msg.fault_status,
        position: msg.position,
        requested_position: msg.requested_position,
        current: msg.current,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      is_ready: msg.is_ready,
      is_reset: msg.is_reset,
      is_moving: msg.is_moving,
      obj_detected: msg.obj_detected,
      fault_status: msg.fault_status,
      position: msg.position,
      requested_position: msg.requested_position,
      current: msg.current,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      is_ready: msg.is_ready,
      is_reset: msg.is_reset,
      is_moving: msg.is_moving,
      obj_detected: msg.obj_detected,
      fault_status: msg.fault_status,
      position: msg.position,
      requested_position: msg.requested_position,
      current: msg.current,
    }
  }
}


