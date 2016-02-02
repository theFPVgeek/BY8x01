# BY8x01
This is an Arduino library created for both the BY8001-16P and the BY8301-16P MP3 soundboard modules.

NOTE: this assumes using SoftwareSerial RX/TX ports 8/4. If you need to change the assignment change the BY8x01.cpp file.

This is a forked bersion of both [Critters Library](https://github.com/Critters/MP3FLASH16P) and [afreeland Library](https://github.com/afreeland/MP3FLASH16P) both being excellent libraries.  After some digging each version of the MP3FLASH16P was developed for 2 different modules, thus the reason for similar code but different passed commands.  BY8x01 library was created to reduce the confusion.

# Original Readme by afreeland below
MP3FLASH16P
This is forked version of [Critters Library](https://github.com/Critters/MP3FLASH16P) that was an excellent starting point but was missing some functionality for the v1.2 chip. The goal of this library is to make is easier for developers and hobbyists to use this inexpensive mp3 flash module and get to building cooler things quicker! 


You can find several of these modules on eBay by searching for "BY8301-16P", they should be around $4.49 (plus shipping). I purchased this one:
http://www.ebay.com/itm/271684522808?_trksid=p2057872.m2749.l2649&ssPageName=STRK%3AMEBIDX%3AIT

# Background
I am a software developer but primarily live in the world of C# and JS...so I am definitely not an expert of C++ nor Arduinos.  I have tried to apply some concepts to make it easier to communicate with this module and to be able to add additional functionality easier, hopefully =)

# Install
The lib folder houses the library as well as a demo sketch and if you wire things up correctly should work out of the box with the v1.2 chip
The library assumes RX/TX are on pins 10/11. To change this edit the .ccp file.

# Things to Come
* I would like to get some schematics of the basic wiring setup
* Include files for how to upload files (as there is now an uploader, in Chinese)

# In the "Assets" folder
* A copy of the original PDF (Chinese) that is available from listing
* A copy of a partially translated PDF (English) that I have been building as I go

# Examples
I've included two examples that show a super simple and more complex use cases, you should be able to find them under file/examples/MP3FLASH16P/ in your Arduino IDE
