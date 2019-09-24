# Arduino libraries

An Arduino library is a software code stored in the external files that can be connected to your project. Libraries contain various methods and data structures that are needed to simplify interaction with sensors, indicators, modules, and other components. The use of these ready-made programs greatly simplifies your work on the projects: it allows you to focus on the logic and not to waste time on lots of little things.

## Types of Arduino libraries

There are three general types of Arduino libraries:

1. Standard Libraries
1. Library Manager Libraries
1. User Installed Libraries

### Standard Libraries

The Arduino IDE comes with a set of standard libraries for commonly used functionality. These libraries support all examples included in the IDE. Standard library functionality includes basic communication functions and support of some of the most common types of hardware like servo motors and LCD-displays.

Standard Libraries are pre-installed in the //Libraries// folder of the Arduino IDE directory. In most cases, it is not a good idea to make changes in the Standard Libraries or to install other libraries in the same folder.

### Library Manager Libraries

The newer Arduino IDE (version 1.6.2 and higher) has a Library Manager which facilitates installing third-party libraries submitted to Arduino. [Amperka](http://amperka.com) has most of its libraries and drivers in the Library Manager for easy use.

For installation, follow these steps:

1. Open Arduino IDE.
1. Go to «Sketch» → «Include Library» → «Manage libraries».
1. Enter the name of the library in the search bar and click «Install».

### User Installed Libraries

Not all libraries are available in the Arduino Manager library. There are many other useful libraries and device drivers for all sorts of hardware. These drivers are available in places like Arduino Playground, Github and Google Code.

To install one of those, follow these steps:

1. Download Library in //.zip// format.
1. Open Arduino IDE.
1. Go to «Sketch» → «Include Library» → «Add .ZIP Library».
1. You will be asked to select the library you would like to add. Navigate to the .zip file's location and open it.

## Amperka Arduino Libraries

We in Amperka make are own libraries for our modules and when we feel that there is a library that is needed. Here you will find libraries of two types: Library Manager Libraries and User Installed Libraries.