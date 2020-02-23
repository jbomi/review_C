#include "weather.h"

weather::weather(double nowT, double nowW)
{
	nowTemp = nowT;
	nowWind = nowW;
	windchilltemper();
}
weather::weather(char ch)
{
	nowTemp = setnowtemp();
	nowWind = setnowwind();
	windchilltemper();
	cout << "four" << endl;
}
double weather::windchilltemper() {
	windchillT = (13.12 + (0.6215*nowTemp) - (11.37*nowWind) + (0.3965*nowTemp*nowTemp));
	return windchillT;
}
double weather::setnowtemp() {
	cout << "Enter the today's temperature: ";
	cin >> nowTemp;
	cout << "setnowtemp done0" << endl;
	return nowTemp;
}
double weather::setnowwind() {
	cout << "Enter the today's wind: ";
	cin >> nowWind;
	cout << "setnowtemp done0" << endl;
	return nowWind;
}
double weather::getnowtemp()
{
	cout << "getnowt done0" << endl;
	return nowTemp;
}
double weather::getnowwind()
{
	cout << "getnowW done0" << endl;
	return nowWind;
}
double weather::getwindchillt()
{
	cout << "getwindchillt done0" << endl;
	return windchillT;
}
void weather::setWeather()
{
	int c;
	cout << "날씨를 선택해주세요. <1> Sunny <2> Cloudy <3> Rain <4> Snow" << endl;
	cin >> c;
	switch (c)
	{
	case 1:
		cout << "Sunny" << endl;
		break;
	case 2:
		cout << "Cloudy" << endl;
		break;
	case 3:
		cout << "Rain" << endl;
		break;
	case 4:
		cout << "Snow" << endl;
		break;
	default:
		cout << "잘못된 선택입니다." << endl;
		break;
	}
}
weather::~weather()
{
}
