sudo apt-get install -y  git

git clone https://github.com/Kitware/CMake.git
sudo apt-get install -y  libssl-dev
cd CMake
./bootstrap && make -j4 && sudo make install
cd ..

git clone --recursive -b rel-1.8.1 https://github.com/microsoft/onnxruntime
cd onnxruntime
./build.sh --config RelWithDebInfo --build_shared_lib --parallel --use_openvino CPU_FP32 --skip_tests

echo "export LD_LIBRARY_PATH=$"LD_LIBRARY_PATH":`pwd`/build/Linux/RelWithDebInfo" >> ~/.bashrc

cd ..


