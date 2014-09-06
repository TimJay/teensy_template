Eclipse Template for Teensy 3.1
===============================
**teensy_template** provides an easy way to get up and running with developing software for the Teensy 3.1 microcontroller using Eclipse 4 IDE.

## Usage
### Required Eclipse Plug-In
Install GNU ARM Eclipse Plug-in from http://gnuarmeclipse.livius.net/blog/plugins-install/

### Create New Project
You need to set an environment variable `TEENSYDUINO_ROOT` which points to the installation directory of Teensyduino (the one containing the `hardware` directory). Remember to log out and in again to make sure the new variable is effective.

Clone this repository `https://github.com/TimJay/teensy_template.git` using either `git` or egit from within Eclipse and import it as a project. In order to rename the project, it should be sufficient to replace any occurence of "teensy_template" within any file (also hidden ones) before importing.

Also you need to copy the directory `hardware/teensy/cores/teensy3` into the project root as `teensy3`. On Windows this should be enought to get building, on Linux you will need to link `make` and `echo` into `$TEENSYDUINO_ROOT/hardware/tools/arm-none-eabi/bin` as the project is set up to only use that folder as `PATH`:  
```
$ cd $TEENSYDUINO_ROOT/hardware/tools/arm-none-eabi/bin
$ ln -s /usr/bin/make
$ ln -s /bin/echo
```

## Contributors
### Teensy 3.1 & Teensyduino
* Paul J Stoffregen: http://www.pjrc.com/teensy/

## License 
Copyright Tim Jagenberg tim@jagenberg.info  
Licensed under the Apache License, Version 2.0  
http://www.apache.org/licenses/LICENSE-2.0.html

## Version 
Version 1.0

## Contact
### Tim Jagenberg
Homepage: http://tim.jagenberg.info/  
Twitter: [@3xbifdvgpsay](https://twitter.com/3xbifdvgpsay)
