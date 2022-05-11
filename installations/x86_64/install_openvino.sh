wget https://apt.repos.intel.com/openvino/2021/GPG-PUB-KEY-INTEL-OPENVINO-2021
sudo apt-key add GPG-PUB-KEY-INTEL-OPENVINO-2021 
echo "deb https://apt.repos.intel.com/openvino/2021 all main" | sudo tee /etc/apt/sources.list.d/intel-openvino-2021.list
sudo apt-get -y update
sudo apt-get -y install intel-openvino-runtime-ubuntu18-2021.4.752
sudo apt-get -y install intel-openvino-dev-ubuntu18-2021.4.752

echo "source /opt/intel/openvino_2021/bin/setupvars.sh" >> ~/.bashrc


