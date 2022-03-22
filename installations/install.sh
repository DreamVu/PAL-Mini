#!/bin/bash

chmod +x ./*.sh

./uninstall.sh

./dependencies.sh

chmod +x ../Explorer/Explorer

./install_onnxrt.sh

./install_openvino.sh

./ros_cmake.sh

./setup_camera_data.sh 

cd python_data

chmod +x setup_python_lib.sh
./setup_python_lib.sh

cd ..

./setup_connection.sh

./setup_timeout_patch.sh

sudo ./PAL_udev.sh

