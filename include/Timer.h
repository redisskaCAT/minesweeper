#ifndef TIMER
#define TIMER

#include <iostream>
#include <thread>
#include <cstdlib>
#include <chrono>

using namespace std;


#include "../include/ConsoleDisplay.h"

class Timer
{
private:
	int playTime;
	bool work;
	ConsoleDisplay* display;
public:
	Timer();
	Timer(ConsoleDisplay* _display);
	void start();
	int getTime();
};

#endif
