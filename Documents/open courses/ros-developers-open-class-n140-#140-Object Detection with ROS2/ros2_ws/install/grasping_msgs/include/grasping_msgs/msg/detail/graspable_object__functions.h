// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from grasping_msgs:msg/GraspableObject.idl
// generated code does not contain a copyright notice

#ifndef GRASPING_MSGS__MSG__DETAIL__GRASPABLE_OBJECT__FUNCTIONS_H_
#define GRASPING_MSGS__MSG__DETAIL__GRASPABLE_OBJECT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "grasping_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "grasping_msgs/msg/detail/graspable_object__struct.h"

/// Initialize msg/GraspableObject message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * grasping_msgs__msg__GraspableObject
 * )) before or use
 * grasping_msgs__msg__GraspableObject__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_grasping_msgs
bool
grasping_msgs__msg__GraspableObject__init(grasping_msgs__msg__GraspableObject * msg);

/// Finalize msg/GraspableObject message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_grasping_msgs
void
grasping_msgs__msg__GraspableObject__fini(grasping_msgs__msg__GraspableObject * msg);

/// Create msg/GraspableObject message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * grasping_msgs__msg__GraspableObject__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_grasping_msgs
grasping_msgs__msg__GraspableObject *
grasping_msgs__msg__GraspableObject__create();

/// Destroy msg/GraspableObject message.
/**
 * It calls
 * grasping_msgs__msg__GraspableObject__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_grasping_msgs
void
grasping_msgs__msg__GraspableObject__destroy(grasping_msgs__msg__GraspableObject * msg);


/// Initialize array of msg/GraspableObject messages.
/**
 * It allocates the memory for the number of elements and calls
 * grasping_msgs__msg__GraspableObject__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_grasping_msgs
bool
grasping_msgs__msg__GraspableObject__Sequence__init(grasping_msgs__msg__GraspableObject__Sequence * array, size_t size);

/// Finalize array of msg/GraspableObject messages.
/**
 * It calls
 * grasping_msgs__msg__GraspableObject__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_grasping_msgs
void
grasping_msgs__msg__GraspableObject__Sequence__fini(grasping_msgs__msg__GraspableObject__Sequence * array);

/// Create array of msg/GraspableObject messages.
/**
 * It allocates the memory for the array and calls
 * grasping_msgs__msg__GraspableObject__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_grasping_msgs
grasping_msgs__msg__GraspableObject__Sequence *
grasping_msgs__msg__GraspableObject__Sequence__create(size_t size);

/// Destroy array of msg/GraspableObject messages.
/**
 * It calls
 * grasping_msgs__msg__GraspableObject__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_grasping_msgs
void
grasping_msgs__msg__GraspableObject__Sequence__destroy(grasping_msgs__msg__GraspableObject__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // GRASPING_MSGS__MSG__DETAIL__GRASPABLE_OBJECT__FUNCTIONS_H_
