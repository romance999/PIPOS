#include "consoleManager.h"
#include <iostream>

using namespace std;

void consoleManager::printf(string color, string text)
{
	cout << "\033[" << color << "m" << text << endl;
}

void consoleManager::Get()
{
	// pause console
	cin.get();
}