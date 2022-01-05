sudo cp jetson_utils_python.so jetson_inference_python.so ../dreamvu_ws/lib/python3.6/site-packages
sudo cp -r data/ /usr/local/bin/
sudo cp libjetson-inference.so libjetson-utils.so /usr/local/lib
sudo cp dualenet.bin /usr/local/bin
sudo cp depth.bin /usr/local/bin
sudo ldconfig
