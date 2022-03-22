# PAL Mini
The most compact 360° 3D Vision System. [PAL-Mini](https://dreamvu.com/pal-mini/) is the world's smallest 360° depth camera. It is extremel low-power and easy to add to any sensor stack to eliminate near-field blind spots.  

Please follow the instructions given below on any of the Intel x86 CPU to install the software.

## Step 1. Clone the repository 
-     sudo apt-get install git-lfs
      git clone -b Ubuntu-18.04 --single-branch https://github.com/DreamVu/PAL-Mini.git
      cd PAL-Mini
      git lfs pull
      
## Step 2. Installing Dependencies 
Confirm the following dependencies. These are must have to proceed further

- ### Ubuntu 18.04 64 bit

- ### OpenCV 3.4.4 and OpenCV Contrib 3.4.4 libraries. 
  Follow these steps to install the required OpenCV dependencies. 
-      cd installations
       chmod +x ./*.sh
       ./opencv.sh

- ### Python 3.6 libraries (pytorch, torchvision, numpy, PIL, etc.)

## Step 3. Installing PAL-Mini SDK
      cd installations
      chmod +x ./*.sh
      ./install.sh 

Once complete please reboot the system.

## Step 4. Installing Camera Data File
The data files are delivered along with the purchase of the PAL Mini camera. In case you have not received them, please request for the files by filling out a [form](https://support.dreamvu.com/portal/en/newticket)

      chmod +x setup.sh
      ./setup.sh
      
## Documentation 
For rest of the evaluation of the ODOA software, please read the [Evaluation Manual](https://github.com/DreamVu/PAL-Mini/blob/Ubuntu-18.04/docs/PAL%20Mini%20Documentation.pdf)

## Support 
If you need help or more informations check our [Help Center](https://support.dreamvu.com/portal/en/home) or join our [Community](https://support.dreamvu.com/portal/en/community/dreamvu-inc) or you can email us directly at support@dreamvu.com 

## Contributing
Feel free to open an issue if you find a bug, or a pull request for bug fixes, features or other improvements.
