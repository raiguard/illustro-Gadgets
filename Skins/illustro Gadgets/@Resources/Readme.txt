ILLUSTRO GADGETS
Version 0.7.0-d.4
By iamanai

-----------------------
ABOUT

illustro Gadgets is a replacement for the AddGadgets.com All CPU Meter, Network Meter, GPU Meter, and Network Meter. In the beautiful theme of Illustro,
you can have quick access to a variety of information about your system.

-----------------------
CONTACT

Email: iamanaiofficial@gmail.com
Twitter: @iamanai_

-----------------------
LICENSE AND CREDITS

This software has been released to you under a Creative Commons Attribution-Noncommercial-Share Alike 3.0 License (http://creativecommons.org/licenses/by-nc-sa/3.0/).

Author		iamanai

Concepts	SilverAzide
		Kaelri

Base Code	SilverAzide

-----------------------
CHANGELOG
0.7.0 ??-??-2015:
User Interface:
 - Lowered bars by 1 pixel without increasing height of rows (bar is more "centered" between the rows)
 - Removed hover effect for buttons (it causes too much lag when the gadgets refresh)
 - Changed checkboxes to use actual images, rather than Wingdings characters
 - Fixed slight overlap on some of the graphs
Code cleanup:
 - Changed versioning to follow the Semantic Versioning format
 - Standardized all positioning, layout, and visual elements across skins
 - Reduced number of meters for checkboxes
 - Cleaned up styles, specifically for color / HWiNFO configuration elements
 - Simplified overly complicated positioning equations
 - Moved almost all raw positioning data to variables for easy debugging and changes
 - Simplified background, making use of ScaleMargins to eliminate warping and combined into 1 meter (from the previous 3)
Settings:
 - Merged the about skin and all settings skins into new unified skin
 - Added an update checker and external links to the about screen
All CPU Meter:
 - Removed settings skin
 - Can change CPU clock and fan text to regular if so desired
 - CPU name can now be displayed at the bottom, or as a hover-over, or a tooltip
 - Fully removed support for CoreTemp and SpeedFan
Network Meter:
 - Removed settings skin
 - Double-clicking on the skin will take you to the Network Management window
 - Increased opacity of arrows to match those on Drives Meter
GPU Meter:
 - Removed settings skin
 - Double-clicking on the skin will open HWiNFO's sensors window
 - Added memory used / total memory fraction to the memory usage row
 - Added support for dual GPUs
    - Names of drives will be displayed to make differentiating easier
    - Added optional "compact mode" to save vertical space with two GPUs
Drives Meter:
 - Removed settings skin
 - Added option to enable drive capacity warnings (and at what thresholds they appear)
 - Fully fixed E drive, and squashed other flaws relating to copy/paste
 - Fixed graph, which will now scale for all drives, not per-drive

v0.6.2 10-10-2015:
Drives Meter:
 - Fixed more mistakes causing the E drive to function incorrectly. How could I be so dumb as to mess it up so badly, I have no idea.

v0.6.1 09-10-2015:
Drives Meter:
 - ... ... ... ... Actually renamed the E drive's meters... Let us never speak of this again. Those of you with an E drive will find that it works now!

v0.6 04-10-2015:
Drives Meter:
 - Shows Name, Disk Read Time Percentage, Read/Write Speeds, and storage used / capacity for each hard drive or removable disk connected to slots C-L
 - Will automatically adjust when you plug in/unplug a drive, changing the size of the skin to accomodate for the new information
 - Line graph shows read/write activity for each disk
 - Histogram shows read/write time (also displayed by the percentage across from the disk's name)
 - Settings let you show/hide the line graph or histogram, select if you want to hide certain drives, and customize colors
Code Cleanup:
 - Cleaned up All CPU Meter's main section code, placing meters by row rather than by type
 - Removed All CPU Meter's support for CoreTemp and SpeedFan in favor of HWiNFO
 - Added more settings to Network Meter and GPU Meter
 - Fixed mistake in GPU Meter's settings skin that broke middle-click-to-default functionality for the checkboxes
 - Preparation for mass code cleanup to take place in v0.7 and v0.8

v0.5.1 13-9-2015:
All CPU Meter:
 - Added support for HWiNFO core temps and fan speed
 - Implemented HWiNFO configuration into settings skin
 - Made all color options always visible (HWiNFO settings made it extremely difficult to adapt per-CPU)
Code Cleanup:
 - Merged core temp meters, cutting 16 extraneous meters from the All CPU Meter skin
 - Began optimizing code, in preparation for final release and to make drives meter easier to implement
Notes:
 - Auto-detection of system monitoring software is currently broken. Implemented a temporary workaround in All CPU Meter's settings skin

v0.5 12-9-2015:
GPU Meter:
 - Monitors your graphics card usage, clock speed, temperature
 - Gives information about memory clock speed, memory usage, fan speed and usage, memory controller usage, and core voltage
 - Requires HWiNFO
 - Settings skin has tools for configuring the skin to work with HWiNFO as well as color customization

v0.4.1 20-8-2015:
Changed how Network Meter reads the internal I.P. address (It is now REQUIRED to have Rainmeter 3.3 Beta installed to make this work properly)
Fixed a flaw with All CPU Meter that messed up snapping other skins below it.

v0.4 19-8-2015:
Code cleanup:
 - Created a global variables .inc file to share variables between skins
 - Moved more positioning numbers to variables for easy debugging
 - Got rid of unneccesary variables
 - Simplified background positioning
General UI Cleanup:
 - Changed button code to be more clickable and include a fancy visual change when hovering over a button and clicking on it
 - Increased resolution of images and used Rainmeter to downscale them, increasing quality and preparing for future features
 - Changed color of graph background and color customization number input backgrounds to be more visible
 - Added degree symbols to the core temperatures (I was using the wrong file format for the skin files, so these weren't possible before)
All CPU Meter:
 - Changed behavior of opening task manager to a double-click anywhere on the gadget
All CPU Meter Settings:
 - Added the ability to show/hide the graph, as well as show/hide the clock and fan speed info
New "About" skin:
 - Gives information about the skin pack
 - Provides a link to the Readme file
ActiveNet Plugin:
 - Added the ActiveNet Plugin for use with Network Meter
 - Requires .NET Framework v4.5 or later to function properly
Network Meter:
 - Added Network Meter (uses the ActiveNet Plugin)
 - NOTE: To configure the Network Meter, follow this link: http://comments.deviantart.com/1/522574269/3808722511

v0.3 05-8-2015:
Added support for core temperatures using CoreTemp or SpeedFan
Some code cleanup
Implemented settings skin (incomplete)
Settings:
 - Show/hide page file info
 - Show only average CPU usage on the graph
 - Show/hide core temperatures
 - Choose either Fahrenheit or Celsius for core temps
 - Customize colors of each bar and its corresponding line on the graph

v0.2 02-8-2015:
Added All CPU Meter