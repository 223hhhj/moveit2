;; Auto-generated. Do not edit!


(when (boundp 'gazebo_msgs_new::DeleteModel)
  (if (not (find-package "GAZEBO_MSGS_NEW"))
    (make-package "GAZEBO_MSGS_NEW"))
  (shadow 'DeleteModel (find-package "GAZEBO_MSGS_NEW")))
(unless (find-package "GAZEBO_MSGS_NEW::DELETEMODEL")
  (make-package "GAZEBO_MSGS_NEW::DELETEMODEL"))
(unless (find-package "GAZEBO_MSGS_NEW::DELETEMODELREQUEST")
  (make-package "GAZEBO_MSGS_NEW::DELETEMODELREQUEST"))
(unless (find-package "GAZEBO_MSGS_NEW::DELETEMODELRESPONSE")
  (make-package "GAZEBO_MSGS_NEW::DELETEMODELRESPONSE"))

(in-package "ROS")





(defclass gazebo_msgs_new::DeleteModelRequest
  :super ros::object
  :slots (_model_name ))

(defmethod gazebo_msgs_new::DeleteModelRequest
  (:init
   (&key
    ((:model_name __model_name) "")
    )
   (send-super :init)
   (setq _model_name (string __model_name))
   self)
  (:model_name
   (&optional __model_name)
   (if __model_name (setq _model_name __model_name)) _model_name)
  (:serialization-length
   ()
   (+
    ;; string _model_name
    4 (length _model_name)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _model_name
       (write-long (length _model_name) s) (princ _model_name s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _model_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _model_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass gazebo_msgs_new::DeleteModelResponse
  :super ros::object
  :slots (_success _status_message ))

(defmethod gazebo_msgs_new::DeleteModelResponse
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

(defclass gazebo_msgs_new::DeleteModel
  :super ros::object
  :slots ())

(setf (get gazebo_msgs_new::DeleteModel :md5sum-) "9ce56b4e9e54616de25d796dc972a262")
(setf (get gazebo_msgs_new::DeleteModel :datatype-) "gazebo_msgs_new/DeleteModel")
(setf (get gazebo_msgs_new::DeleteModel :request) gazebo_msgs_new::DeleteModelRequest)
(setf (get gazebo_msgs_new::DeleteModel :response) gazebo_msgs_new::DeleteModelResponse)

(defmethod gazebo_msgs_new::DeleteModelRequest
  (:response () (instance gazebo_msgs_new::DeleteModelResponse :init)))

(setf (get gazebo_msgs_new::DeleteModelRequest :md5sum-) "9ce56b4e9e54616de25d796dc972a262")
(setf (get gazebo_msgs_new::DeleteModelRequest :datatype-) "gazebo_msgs_new/DeleteModelRequest")
(setf (get gazebo_msgs_new::DeleteModelRequest :definition-)
      "string model_name                 # name of the Gazebo Model to be deleted
---
bool success                      # return true if deletion is successful
string status_message             # comments if available

")

(setf (get gazebo_msgs_new::DeleteModelResponse :md5sum-) "9ce56b4e9e54616de25d796dc972a262")
(setf (get gazebo_msgs_new::DeleteModelResponse :datatype-) "gazebo_msgs_new/DeleteModelResponse")
(setf (get gazebo_msgs_new::DeleteModelResponse :definition-)
      "string model_name                 # name of the Gazebo Model to be deleted
---
bool success                      # return true if deletion is successful
string status_message             # comments if available

")



(provide :gazebo_msgs_new/DeleteModel "9ce56b4e9e54616de25d796dc972a262")


