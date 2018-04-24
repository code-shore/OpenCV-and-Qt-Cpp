# OpenCV-with-Qt-Cpp


Setup: you can choose either 

Methos 1:
Follow the steps described in the link. Method 2 is based on this link
	https://wiki.qt.io/How_to_setup_Qt_and_openCV_on_Windows

Method 2:

Qt :
	1. Download th installer: https://www1.qt.io/offline-							    installers/

	2. Seletect Qt 5.6.3 for Windows 32-bit (MinGW 4.9.2)

OpenCV :

	1. Download the pre-built library 

https://drive.google.com/file/d/1I6EHK65hBHWwjHFuc2bO6Hvh5u-M5GPb/view?usp=sharing

	2. Unzip the file to C:\
	   You'll notice a 'opencvbuild' directory will be created
	4. Add to the 'PATH' in the 'Environment Variables' 
		C:\Qt\Qt5.6.3\Tools\mingw492_32\bin;
		C:\opencvbuild\install\x86\mingw\bin;
		C:\opencvbuild\bin;

Run the project using QtCreator.