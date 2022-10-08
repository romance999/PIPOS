#include "consoleManager.h"
#include <iostream>
#include <iomanip> //this library is needed for setw

using namespace std;

void consoleManager::printf(string color, string text)
{
	cout << "\033[" << color << "m" << text << endl;
}

void consoleManager::centerprintf(string color, string text)
{
	cout << setw(25); // modify the number to align it to the center
	cout << "\033[" << color << "m" << text << endl; // should be centered now
}

void consoleManager::Get()
{
	// pause console
	cin.get();
}