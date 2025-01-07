#直接執行就可以
#目前depth會顯示灰階，需要調整(或許不用)
import pyzed.sl as sl
import cv2

selection_rect = sl.Rect()

def main():
    init_parameters = sl.InitParameters()
    init_parameters.depth_mode = sl.DEPTH_MODE.NEURAL
    init_parameters.sdk_verbose = 10
    init_parameters.set_from_stream("192.168.1.2", 30000)
    cam = sl.Camera()
    status = cam.open(init_parameters)
    if status != sl.ERROR_CODE.SUCCESS:
        print("Camera Open : "+repr(status)+". Exit program.")
        exit()
    runtime = sl.RuntimeParameters()
    win_name = "Camera Remote Control"
    mat = sl.Mat()
    cv2.namedWindow(win_name)
    print_camera_information(cam)
    
    key = ''
    while key != 113:  # for 'q' key
        err = cam.grab(runtime) #Check that a new image is successfully acquired
        if err == sl.ERROR_CODE.SUCCESS:
            cam.retrieve_image(mat, sl.VIEW.RIGHT) #Retrieve left image
            
            cvImage = mat.get_data()
            if (not selection_rect.is_empty() and selection_rect.is_contained(sl.Rect(0,0,cvImage.shape[1],cvImage.shape[0]))):
                cv2.rectangle(cvImage,(selection_rect.x,selection_rect.y),(selection_rect.width+selection_rect.x,selection_rect.height+selection_rect.y),(220, 180, 20), 2)
            cv2.imshow(win_name, cvImage)
            
        else:
            print("Error during capture : ", err)
            break
        key = cv2.waitKey(5)
    cv2.destroyAllWindows()
    
    cam.close()


def print_camera_information(cam):
    cam_info = cam.get_camera_information()
    print("ZED Model                 : {0}".format(cam_info.camera_model))
    print("ZED Camera Resolution     : {0}x{1}".format(round(cam_info.camera_configuration.resolution.width, 2), cam.get_camera_information().camera_configuration.resolution.height))
    print("ZED Camera FPS            : {0}".format(int(cam_info.camera_configuration.fps)))

  
if __name__ == "__main__":
    main()