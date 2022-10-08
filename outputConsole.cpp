#include <iostream>
#include "consoleManager.h"

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

	// code starts here

	// startup
	consoleManager.printf(Green, " *************** PIP-OS(R) V7.1.0.8 ***************");
	consoleManager.Get();
}