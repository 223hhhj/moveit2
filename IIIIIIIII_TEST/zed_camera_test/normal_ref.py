#直接執行就可以
import math
import pyzed.sl as sl


def main():
    # Create a Camera object
    zed = sl.Camera()

    # Create a InitParameters object and set configuration parameters
    init_params = sl.InitParameters()
    init_params.set_from_stream("192.168.1.2", 30000)
    init_params.sdk_verbose = 10
    init_params.camera_resolution = sl.RESOLUTION.HD1200
    init_params.camera_fps = 60
    init_params.depth_mode=sl.DEPTH_MODE.NEURAL
    init_params.coordinate_units = sl.UNIT.METER
    init_params.depth_minimum_distance = 0.1
    init_params.depth_maximum_distance = 2
    init_params.depth_stabilization = 100

    runtime_parameters =sl.RuntimeParameters()
    runtime_parameters.enable_fill_mode = False
    runtime_parameters.confidence_threshold = 95


    # Open the camera
    err = zed.open(init_params)
    if err != sl.ERROR_CODE.SUCCESS:
        exit(1)

    ####################################################
    # Get camera information (ZED serial number)
    zed_serial = zed.get_camera_information().serial_number
    print("Hello! This is my serial number: {0}".format(zed_serial))

    #IMAGE CAPTURE(not including save image)
    image = sl.Mat()
    if zed.grab() == sl.ERROR_CODE.SUCCESS:
    # A new image is available if grab() returns SUCCESS
        zed.retrieve_image(image, sl.VIEW.LEFT) # Retrieve the left image
        zed.retrieve_image(image, sl.VIEW.DEPTH) #Displaying Depth Image
        zed.retrieve_measure(image, sl.MEASURE.DEPTH) # Retrieve depth
        timestamp = zed.get_timestamp(sl.TIME_REFERENCE.IMAGE)  # Get the image timestamp
    
    #ACCESSING DEPTH VALUES
    depth_map = sl.Mat()
    a= round(image.get_width() / 2); b= round(image.get_height() / 2)
    depth_value = depth_map.get_value(a, b)

    #Getting Point Cloud Data
    point_cloud = sl.Mat()
    zed.retrieve_measure(point_cloud, sl.MEASURE.XYZRGBA)
    #To access a specific pixel value, use getValue()
    point3D = point_cloud.get_value(a, b)
    x = point3D[1][0]
    y = point3D[1][1]
    z = point3D[1][2]
    color = point3D[1][3]
    
    #MEASURING DISTANCE IN POINT CLOUD(object between left eye)
    distance = math.sqrt(x*x + y*y + z*z)
    
    ####################################################
    # Close the camera
    zed.close()

if __name__ == "__main__":
    main()
