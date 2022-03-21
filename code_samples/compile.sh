g++ 004_range_scan.cpp ../lib/libPAL.so `pkg-config --libs --cflags opencv libusb-1.0`   -O3  -o 004_range_scan.out -I../include/ -lv4l2 -lpthread  -ludev -std=c++11




