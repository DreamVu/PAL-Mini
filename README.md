# PAL Mini
The most compact 360° 3D Vision System. [PAL-Mini](https://dreamvu.com/pal-mini/) is the world's smallest 360° depth camera. It is extremel low-power and easy to add to any sensor stack to eliminate near-field blind spots.  


## Installation

The Package can be installed in two ways:

### Method 1. Using Debian packages

The Package can be downloaded directly from [here](https://github.com/DreamVu/ppa/blob/main/pal-mini/pal-mini?raw=true) and installed by running the below command from the location where it is downloaded,

    chmod +x pal-mini && ./pal-mini

### Method 2. Using PPA Repository

The Package can be installed by adding the PPA Repository. Steps are as follows:

#### Step 1. Adding DreamVu PPAs

If you have installed other DreamVu's software, you may skip this step.

    sudo wget -qO - https://dreamvu.github.io/ppa/KEY.gpg | sudo apt-key add -
    sudo wget -qO /etc/apt/sources.list.d/dreamvu.list https://dreamvu.github.io/ppa/dreamvu.list
    
#### Step 2. Installing PAL Mini
    sudo apt update
    sudo apt install ppa-pal-mini
    sudo apt install pal-mini

Once complete please reboot the system. The packages will be installed in \~/DreamVu folder. 

To preview the PAL Mini camera for x86_64 architecture run the below command 
 
    ~/DreamVu/PAL-Mini/Explorer/x86_64/Explorer
    
 To preview the PAL Mini camera for ARM64 architecture run the below command
 	
    ~/DreamVu/PAL-Mini/Explorer/arm64/Explorer	 
    
## ROS Installations

Ubuntu 18.04 supports ROS Melodic. The Package can be installed by running the below command after installing PAL Mini,

    sudo apt install dreamvu-ros-melodic-navigation
    
Ubuntu 20.04 supports ROS Foxy and Noetic. These Packages can be installed by running the below command after installing PAL Mini,

    sudo apt install dreamvu-ros-noetic-navigation
    sudo apt install dreamvu-ros-foxy-navigation
    
## Turtlebot-Nav
  
Turtlebot-Nav support is also provided for both the version and can be installed using following command,

    sudo apt install ros-melodic-turtlebot-nav    
      
## Documentation 
For rest of the evaluation of the software, please read the 
- [Evaluation Manual](https://docs.google.com/document/d/e/2PACX-1vT-w_gQ5NrPqKz7-7aXqzSt-zG2-8rs4GcoPA6FJNgrZ9VAXBJMCgo0dBRcJE57ygRLDr3dyet1HRHR/pub)
- [Design Guide](https://docs.google.com/document/d/e/2PACX-1vThW3yq0joYAVzLkc7e1H13Rxbl0aLCf9AG6gyKXX0WukTBrQczJn1sazhj-Ze2lxzEud7E1dMEhmwY/pub)
- [ROS Application Note](https://docs.google.com/document/d/e/2PACX-1vS8XpaUZAu6q5TRsJzVaWwDdjwRKgArtJ4zVdHj6nsrHrvVfGSlu3hm9ecHhCMaBqLlIYdlguVTJJH-/pub) 

## Support 
If you need help or more informations check our [Help Center](https://support.dreamvu.com/portal/en/home) or join our [Community](https://support.dreamvu.com/portal/en/community/dreamvu-inc) or you can email us directly at support@dreamvu.com 

## Contributing
Feel free to open an issue if you find a bug, or a pull request for bug fixes, features or other improvements.
