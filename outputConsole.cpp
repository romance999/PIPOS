#include <iostream>
#include "consoleManager.h"
#include "sleepManager.h"

int main()
{
	// define colors
	string Black = "30";
	string Red = "31";
	string Green = "32";
	string Yellow = "33";
	string Blue = "34";
	string Magenta = "35";
	string Cyan = "36";
	string White = "37";

	// define handlers
	consoleManager consoleManager;
	sleepManager sleepManager;

	// code starts here

	// startup
	sleepManager.Sleep(50);
	consoleManager.centerprintf(Green, "*************************************************");
	consoleManager.centerprintf(Green, "*************** PIP-OS(R) V7.1.0.8 ***************");
	consoleManager.centerprintf(Green, "COPYRIGHT 2075 ROBCO(R)");
	consoleManager.centerprintf(Green, "LOAD ROM(1): DEITRIX 303");
	consoleManager.centerprintf(Green, "**************************************************");
	sleepManager.Sleep(100);

	// pip started up, show the overseer's thumbs up
	consoleManager.printf(Green, "                                               NN    N                                              ");
	consoleManager.printf(Green, "                                                ddddd                                               ");
	consoleManager.printf(Green, "                                        N      dddddd                                               ");
	consoleManager.printf(Green, "                                        NdN     dddddN                                              ");
	consoleManager.printf(Green, "                                        ddd NNN dddd  N                                             ");
	consoleManager.printf(Green, "                                        ddddhhhhhdhdhhhdN                                           ");
	consoleManager.printf(Green, "                                        NNN    hhhhhhhhhh                                           ");
	consoleManager.printf(Green, "                                              NhhhhhhhhhdN                                          ");
	consoleManager.printf(Green, "                                             Nhhhhhhhhd                                             ");
	consoleManager.printf(Green, "                                               hhhhhhh                                              ");
	consoleManager.printf(Green, "                                             Nhhhhhhhhd                                             ");
	consoleManager.printf(Green, "                                               hhhhhhh                                              ");
	consoleManager.printf(Green, "                                              dhhhdhhhN                                             ");
	consoleManager.printf(Green, "                                             Nhhh  hhhN                                             ");
	consoleManager.printf(Green, "                                             dhhd  hh                                               ");
	consoleManager.printf(Green, "                                             dd   N   N                                             ");
	consoleManager.printf(Green, "                                             N                                                      ");

	consoleManager.printf(Green, "");
	consoleManager.printf(Green, "                                           INITIATING                                                ");

	consoleManager.Get();
}