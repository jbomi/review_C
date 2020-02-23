#pragma once//날씨 함수
#include <iostream>
#include<cmath>
using namespace std;
class weather
{
private:
	double nowTemp;//현재기온
	double nowWind;//현재 풍속
	double windchillT;//체감온도
public:
	weather(double = 0, double = 0);
	weather(char ch);//오버로드
	void setWeather();//날씨 받기
	double setnowtemp();//현재기온받기
	double setnowwind();//현재풍속받기
	double getnowtemp();
	double getnowwind();
	double getwindchillt();
	double windchilltemper();//체감온도 계산함수
	~weather();
};
