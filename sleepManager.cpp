#include "sleepManager.h"
#include <chrono>
#include <thread>

void sleepManager::Sleep(int ms)
{
	std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}