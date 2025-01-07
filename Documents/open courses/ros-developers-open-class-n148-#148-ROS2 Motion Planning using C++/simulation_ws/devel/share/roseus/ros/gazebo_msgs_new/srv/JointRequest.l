;; Auto-generated. Do not edit!


(when (boundp 'gazebo_msgs_new::JointRequest)
  (if (not (find-package "GAZEBO_MSGS_NEW"))
    (make-package "GAZEBO_MSGS_NEW"))
  (shadow 'JointRequest (find-package "GAZEBO_MSGS_NEW")))
(unless (find-package "GAZEBO_MSGS_NEW::JOINTREQUEST")
  (make-package "GAZEBO_MSGS_NEW::JOINTREQUEST"))
(unless (find-package "GAZEBO_MSGS_NEW::JOINTREQUESTREQUEST")
  (make-package "GAZEBO_MSGS_NEW::JOINTREQUESTREQUEST"))
(unless (find-package "GAZEBO_MSGS_NEW::JOINTREQUESTRESPONSE")
  (make-package "GAZEBO_MSGS_NEW::JOINTREQUESTRESPONSE"))

(in-package "ROS")





(defclass gazebo_msgs_new::JointRequestRequest
  :super ros::object
  :slots (_joint_name ))

(defmethod gazebo_msgs_new::JointRequestRequest
  (:init
   (&key
    ((:joint_name __joint_name) "")
    )
   (send-super :init)
   (setq _joint_name (string __joint_name))
   self)
  (:joint_name
   (&optional __joint_name)
   (if __joint_name (setq _joint_name __joint_name)) _joint_name)
  (:serialization-length
   ()
   (+
    ;; string _joint_name
    4 (length _joint_name)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _joint_name
       (write-long (length _joint_name) s) (princ _joint_name s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _joint_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _joint_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass gazebo_msgs_new::JointRequestResponse
  :super ros::object
  :slots ())

(defmethod gazebo_msgs_new::JointRequestResponse
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(defclass gazebo_msgs_new::JointRequest
  :super ros::object
  :slots ())

(setf (get gazebo_msgs_new::JointRequest :md5sum-) "0be1351618e1dc030eb7959d9a4902de")
(setf (get gazebo_msgs_new::JointRequest :datatype-) "gazebo_msgs_new/JointRequest")
(setf (get gazebo_msgs_new::JointRequest :request) gazebo_msgs_new::JointRequestRequest)
(setf (get gazebo_msgs_new::JointRequest :response) gazebo_msgs_new::JointRequestResponse)

(defmethod gazebo_msgs_new::JointRequestRequest
  (:response () (instance gazebo_msgs_new::JointRequestResponse :init)))

(setf (get gazebo_msgs_new::JointRequestRequest :md5sum-) "0be1351618e1dc030eb7959d9a4902de")
(setf (get gazebo_msgs_new::JointRequestRequest :datatype-) "gazebo_msgs_new/JointRequestRequest")
(setf (get gazebo_msgs_new::JointRequestRequest :definition-)
      "string joint_name   # name of the joint requested
---


")

(setf (get gazebo_msgs_new::JointRequestResponse :md5sum-) "0be1351618e1dc030eb7959d9a4902de")
(setf (get gazebo_msgs_new::JointRequestResponse :datatype-) "gazebo_msgs_new/JointRequestResponse")
(setf (get gazebo_msgs_new::JointRequestResponse :definition-)
      "string joint_name   # name of the joint requested
---


")



(provide :gazebo_msgs_new/JointRequest "0be1351618e1dc030eb7959d9a4902de")


