#!/bin/bash

sudo apt-get -y install python3.6-dev python3-venv python3-tk

python3 -m venv dreamvu_ws 
source ./dreamvu_ws/bin/activate

pip install --upgrade setuptools pip

pip install --upgrade google-api-python-client google-auth-httplib2 google-auth-oauthlib

pip install numpy
