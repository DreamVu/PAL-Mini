# PAL Mini
The most compact 360° 3D Vision System. [PAL-Mini](https://dreamvu.com/pal-mini/) is the world's smallest 360° depth camera. It is extremel low-power and easy to add to any sensor stack to eliminate near-field blind spots.  

Please follow the instructions given below on any of the Nvidia Jetson embedded boards with Jetpack 4.4 to install the software.

## Step 1. Clone the repository 
-     sudo apt-get install git-lfs
      git clone https://github.com/DreamVu/PAL-Mini.git
      cd PAL-Mini
      git lfs pull

## Step 2. Installing Dependencies 
Confirm the following dependencies. These are must have to proceed further

- ### Jetpack 4.4. This version of the software is only compatible with Jetson Xavier NX. 

- ### CUDA enabled OpenCV 4.4.0 and OpenCV Contrib 4.4.0 libraries. 
  Follow these steps to install the required OpenCV dependencies. 
-      cd installations
       chmod +x ./*.sh
       sudo ./opencv.sh

- ### Python 3.6 libraries (pytorch, torchvision, numpy, PIL, etc.)

## Step 3. Installing PAL-Mini SDK
      cd installations
      chmod +x ./*.sh
      sudo ./install.sh 

Once complete please reboot the system.

## Step 4. Installing libPAL_Camera.so
The libPAL_Camera.so file is delivered along with the purchase of the PAL-Mini camera. In case you have not received them, please request for the file by filling out a [form](https://support.dreamvu.com/portal/en/newticket). Place the libPAL_Camera.so file in the ./lib/ folder. 


## Documentation 
For rest of the evaluation of the PAL-Mini SDK, please read the [Evaluation Manual](https://github.com/DreamVu/PAL-Mini/blob/JetPack-4.4/docs/PAL%20Mini%20NX%20SDK%20Documentation.pdf)

## Support 
If you need help or more informations check our [Help Center](https://support.dreamvu.com/portal/en/home) or join our [Community](https://support.dreamvu.com/portal/en/community/dreamvu-inc) or you can email us directly at support@dreamvu.com 

## Contributing
Feel free to open an issue if you find a bug, or a pull request for bug fixes, features or other improvements.
