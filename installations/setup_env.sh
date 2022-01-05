#!/bin/bash

sudo apt-get -y install python3.5-dev python3.5-venv python3-tk

python3 -m venv dreamvu_ws 
source ./dreamvu_ws/bin/activate

pip install --upgrade setuptools pip

pip3 install -r python_requirements.txt


echo "export LD_LIBRARY_PATH=$"LD_LIBRARY_PATH":`pwd`/../lib" >> ~/.bashrc 
echo "source `pwd`/dreamvu_ws/bin/activate" >> ~/.bashrc

