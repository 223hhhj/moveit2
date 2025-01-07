;; Auto-generated. Do not edit!


(when (boundp 'gazebo_msgs_new::DeleteLight)
  (if (not (find-package "GAZEBO_MSGS_NEW"))
    (make-package "GAZEBO_MSGS_NEW"))
  (shadow 'DeleteLight (find-package "GAZEBO_MSGS_NEW")))
(unless (find-package "GAZEBO_MSGS_NEW::DELETELIGHT")
  (make-package "GAZEBO_MSGS_NEW::DELETELIGHT"))
(unless (find-package "GAZEBO_MSGS_NEW::DELETELIGHTREQUEST")
  (make-package "GAZEBO_MSGS_NEW::DELETELIGHTREQUEST"))
(unless (find-package "GAZEBO_MSGS_NEW::DELETELIGHTRESPONSE")
  (make-package "GAZEBO_MSGS_NEW::DELETELIGHTRESPONSE"))

(in-package "ROS")





(defclass gazebo_msgs_new::DeleteLightRequest
  :super ros::object
  :slots (_light_name ))

(defmethod gazebo_msgs_new::DeleteLightRequest
  (:init
   (&key
    ((:light_name __light_name) "")
    )
   (send-super :init)
   (setq _light_name (string __light_name))
   self)
  (:light_name
   (&optional __light_name)
   (if __light_name (setq _light_name __light_name)) _light_name)
  (:serialization-length
   ()
   (+
    ;; string _light_name
    4 (length _light_name)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _light_name
       (write-long (length _light_name) s) (princ _light_name s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _light_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _light_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass gazebo_msgs_new::DeleteLightResponse
  :super ros::object
  :slots (_success _status_message ))

(defmethod gazebo_msgs_new::DeleteLightResponse
  (:init
   (&key
    ((:success __success) nil)
    ((:status_message __status_message) "")
    )
   (send-super :init)
   (setq _success __success)
   (setq _status_message (string __status_message))
   self)
  (:success
   (&optional (__success :null))
   (if (not (eq __success :null)) (setq _success __success)) _success)
  (:status_message
   (&optional __status_message)
   (if __status_message (setq _status_message __status_message)) _status_message)
  (:serialization-length
   ()
   (+
    ;; bool _success
    1
    ;; string _status_message
    4 (length _status_message)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _success
       (if _success (write-byte -1 s) (write-byte 0 s))
     ;; string _status_message
       (write-long (length _status_message) s) (princ _status_message s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _success
     (setq _success (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; string _status_message
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _status_message (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass gazebo_msgs_new::DeleteLight
  :super ros::object
  :slots ())

(setf (get gazebo_msgs_new::DeleteLight :md5sum-) "ae11ea8100d536d5b92c2b5917abf912")
(setf (get gazebo_msgs_new::DeleteLight :datatype-) "gazebo_msgs_new/DeleteLight")
(setf (get gazebo_msgs_new::DeleteLight :request) gazebo_msgs_new::DeleteLightRequest)
(setf (get gazebo_msgs_new::DeleteLight :response) gazebo_msgs_new::DeleteLightResponse)

(defmethod gazebo_msgs_new::DeleteLightRequest
  (:response () (instance gazebo_msgs_new::DeleteLightResponse :init)))

(setf (get gazebo_msgs_new::DeleteLightRequest :md5sum-) "ae11ea8100d536d5b92c2b5917abf912")
(setf (get gazebo_msgs_new::DeleteLightRequest :datatype-) "gazebo_msgs_new/DeleteLightRequest")
(setf (get gazebo_msgs_new::DeleteLightRequest :definition-)
      "string light_name                 # name of the light to be deleted
---
bool success                      # return true if deletion is successful
string status_message             # comments if available

")

(setf (get gazebo_msgs_new::DeleteLightResponse :md5sum-) "ae11ea8100d536d5b92c2b5917abf912")
(setf (get gazebo_msgs_new::DeleteLightResponse :datatype-) "gazebo_msgs_new/DeleteLightResponse")
(setf (get gazebo_msgs_new::DeleteLightResponse :definition-)
      "string light_name                 # name of the light to be deleted
---
bool success                      # return true if deletion is successful
string status_message             # comments if available

")



(provide :gazebo_msgs_new/DeleteLight "ae11ea8100d536d5b92c2b5917abf912")


