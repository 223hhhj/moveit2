;; Auto-generated. Do not edit!


(when (boundp 'gazebo_msgs_new::BodyRequest)
  (if (not (find-package "GAZEBO_MSGS_NEW"))
    (make-package "GAZEBO_MSGS_NEW"))
  (shadow 'BodyRequest (find-package "GAZEBO_MSGS_NEW")))
(unless (find-package "GAZEBO_MSGS_NEW::BODYREQUEST")
  (make-package "GAZEBO_MSGS_NEW::BODYREQUEST"))
(unless (find-package "GAZEBO_MSGS_NEW::BODYREQUESTREQUEST")
  (make-package "GAZEBO_MSGS_NEW::BODYREQUESTREQUEST"))
(unless (find-package "GAZEBO_MSGS_NEW::BODYREQUESTRESPONSE")
  (make-package "GAZEBO_MSGS_NEW::BODYREQUESTRESPONSE"))

(in-package "ROS")





(defclass gazebo_msgs_new::BodyRequestRequest
  :super ros::object
  :slots (_body_name ))

(defmethod gazebo_msgs_new::BodyRequestRequest
  (:init
   (&key
    ((:body_name __body_name) "")
    )
   (send-super :init)
   (setq _body_name (string __body_name))
   self)
  (:body_name
   (&optional __body_name)
   (if __body_name (setq _body_name __body_name)) _body_name)
  (:serialization-length
   ()
   (+
    ;; string _body_name
    4 (length _body_name)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _body_name
       (write-long (length _body_name) s) (princ _body_name s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _body_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _body_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass gazebo_msgs_new::BodyRequestResponse
  :super ros::object
  :slots ())

(defmethod gazebo_msgs_new::BodyRequestResponse
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

(defclass gazebo_msgs_new::BodyRequest
  :super ros::object
  :slots ())

(setf (get gazebo_msgs_new::BodyRequest :md5sum-) "5eade9afe7f232d78005bd0cafeab755")
(setf (get gazebo_msgs_new::BodyRequest :datatype-) "gazebo_msgs_new/BodyRequest")
(setf (get gazebo_msgs_new::BodyRequest :request) gazebo_msgs_new::BodyRequestRequest)
(setf (get gazebo_msgs_new::BodyRequest :response) gazebo_msgs_new::BodyRequestResponse)

(defmethod gazebo_msgs_new::BodyRequestRequest
  (:response () (instance gazebo_msgs_new::BodyRequestResponse :init)))

(setf (get gazebo_msgs_new::BodyRequestRequest :md5sum-) "5eade9afe7f232d78005bd0cafeab755")
(setf (get gazebo_msgs_new::BodyRequestRequest :datatype-) "gazebo_msgs_new/BodyRequestRequest")
(setf (get gazebo_msgs_new::BodyRequestRequest :definition-)
      "string body_name   # name of the body requested. body names are prefixed by model name, e.g. pr2::base_link
---

")

(setf (get gazebo_msgs_new::BodyRequestResponse :md5sum-) "5eade9afe7f232d78005bd0cafeab755")
(setf (get gazebo_msgs_new::BodyRequestResponse :datatype-) "gazebo_msgs_new/BodyRequestResponse")
(setf (get gazebo_msgs_new::BodyRequestResponse :definition-)
      "string body_name   # name of the body requested. body names are prefixed by model name, e.g. pr2::base_link
---

")



(provide :gazebo_msgs_new/BodyRequest "5eade9afe7f232d78005bd0cafeab755")


