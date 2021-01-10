# PowershellTrojan
This is the final group project for Cyber Security created by Kimberly Kraemer and Alex Sheriff. It is a simple trojan horse that, once installed, runs powershell commands on the target's system at startup to display a number of annoying pop-ups on screen.

The goal was to create a Trojan Horse that used Windows Powershell in some way. The executable downloads a .cmd file into the target's startup directory, which runs a powershell program at startup, displaying an annoying pop-up 6 times every time the machine is rebooted. It also opens a web browser and navigates to a betty crocker cookie recipe to distract from the background installation of the trojan. 

The .exe was created using C++ to first open a web browser and navigate to the cookie recipe, then get the target's name on the system, and use that name to write a .cmd file to that specific user's startup directory. The .cmd file writes and runs temporary powershell program that displays the pop-ups. 
