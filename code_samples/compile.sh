ARCH=$(uname -p)
NO_OF_GPU=$(lspci | grep -ci vga)
GPU_LIBS=""

if [ "$ARCH" = "x86_64" ]; 
then
    if [ $NO_OF_GPU -eq 2 ]; 
    then
    	GPU_LIBS="-L/usr/local/cuda/lib64 -lnvinfer -lcudart /usr/src/tensorrt/bin/common/logger.o"	     
    else
    	GPU_LIBS=""
    fi
    
	g++ 001_stereo_panorama.cpp ../lib/x86_64/libPAL.so `pkg-config --libs --cflags opencv python3 libusb-1.0`   -O3  -o 001_stereo_panorama.out -I../include/ -lv4l2 -lpthread  -ludev -std=c++11 $GPU_LIBS
	g++ 002_depth_panorama.cpp ../lib/x86_64/libPAL.so `pkg-config --libs --cflags opencv python3 libusb-1.0`   -O3  -o 002_depth_panorama.out -I../include/ -lv4l2 -lpthread  -ludev -std=c++11 $GPU_LIBS
	g++ 003_range_scan_panorama.cpp ../lib/x86_64/libPAL.so `pkg-config --libs --cflags opencv python3 libusb-1.0`   -O3  -o 003_range_scan_panorama.out -I../include/ -lv4l2 -lpthread  -ludev -std=c++11 $GPU_LIBS   
    g++ 004_video_capture.cpp ../lib/x86_64/libPAL.so `pkg-config --libs --cflags opencv python3 libusb-1.0`   -O3  -o 004_video_capture.out -I../include/ -lv4l2 -lpthread  -ludev -std=c++11 $GPU_LIBS
    g++ 005_camera_properties.cpp ../lib/x86_64/libPAL.so `pkg-config --libs --cflags opencv python3 libusb-1.0`   -O3  -o 005_camera_properties.out -I../include/ -lv4l2 -lpthread  -ludev -std=c++11 $GPU_LIBS
    
else
	g++ 001_stereo_panorama.cpp ../lib/arm64/libPAL.so /usr/src/tensorrt/bin/common/logger.o `pkg-config --libs --cflags opencv python3 libusb-1.0`   -O3  -o 001_stereo_panorama.out -I../include/ -lv4l2 -lpthread  -lcudart -L/usr/local/cuda/lib64 -lnvinfer -ludev -std=c++11
	g++ 002_depth_panorama.cpp ../lib/arm64/libPAL.so /usr/src/tensorrt/bin/common/logger.o `pkg-config --libs --cflags opencv python3 libusb-1.0`   -O3  -o 002_depth_panorama.out -I../include/ -lv4l2 -lpthread  -lcudart -L/usr/local/cuda/lib64 -lnvinfer -ludev -std=c++11
	g++ 003_range_scan_panorama.cpp ../lib/arm64/libPAL.so /usr/src/tensorrt/bin/common/logger.o `pkg-config --libs --cflags opencv python3 libusb-1.0`   -O3  -o 003_range_scan_panorama.out -I../include/ -lv4l2 -lpthread  -lcudart -L/usr/local/cuda/lib64 -lnvinfer -ludev -std=c++11
	g++ 004_video_capture.cpp ../lib/arm64/libPAL.so /usr/src/tensorrt/bin/common/logger.o `pkg-config --libs --cflags opencv python3 libusb-1.0`   -O3  -o 004_video_capture.out -I../include/ -lv4l2 -lpthread  -lcudart -L/usr/local/cuda/lib64 -lnvinfer -ludev -std=c++11
	g++ 005_camera_properties.cpp ../lib/arm64/libPAL.so /usr/src/tensorrt/bin/common/logger.o `pkg-config --libs --cflags opencv python3 libusb-1.0`   -O3  -o 005_camera_properties.out -I../include/ -lv4l2 -lpthread  -lcudart -L/usr/local/cuda/lib64 -lnvinfer -ludev -std=c++11
fi
