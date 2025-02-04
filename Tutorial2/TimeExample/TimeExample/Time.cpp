#include "pch.h"
#include "Time.h"

Time::Time()
{
	hour = minute = second = 0;
}


Time::~Time()
{
}

void Time::setTime(int h, int m, int s)
{
	hour = (h >= 0 && h < 24) ? h : 0;
	minute = (m >= 0 && m < 60) ? m : 0;
	second = (s >= 0 && s < 60) ? s : 0;
	//call the print time method.
	printTime();
}

//print time in 24 hour format (HH:MM:SS)
void Time::printTime()
{
	std::cout << std::setfill('0') << std::setw(2) << hour << ":" << std::setw(2) << minute << ":" << std::setw(2) << second;
}

void Time::tckTime() 
{
	second += 1;
	if (second >= 60) {
		second = 0;
		minute += 1;
	}
	if (minute >= 60) {
		minute = 0;
		hour += 1;
	}
	if (hour >= 24) {
		hour = 0;
	}
}
