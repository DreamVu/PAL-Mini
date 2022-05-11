ARCH=$(uname -p)

if [ "$ARCH" = "x86_64" ]; then
	g++ 004_range_scan.cpp ../lib/x86_64/libPAL.so `pkg-config --libs --cflags opencv libusb-1.0`   -O3  -o 004_range_scan.out -I../include/ -lv4l2 -lpthread  -ludev -std=c++11
else
	g++ 004_range_scan.cpp ../lib/arm64/libPAL.so /usr/src/tensorrt/bin/common/logger.o `pkg-config --libs --cflags opencv libusb-1.0`   -O3  -o 004_range_scan.out -I../include/ -lv4l2 -lpthread  -lcudart -L/usr/local/cuda/lib64 -lnvinfer -ludev -std=c++11
fi
