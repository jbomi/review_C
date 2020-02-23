#pragma once
#include <iostream>
#include<cmath>
using namespace std;
class weather
{
private:
	double nowTemp;
	double nowWind;
	double windchillT;
public:
	weather(double = 0, double = 0);
	weather(char ch);
	void setWeather();
	double setnowtemp();
	double setnowwind();
	double getnowtemp();
	double getnowwind();
	double getwindchillt();
	double windchilltemper();
	~weather();
};

