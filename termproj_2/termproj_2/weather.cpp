#include "weather.h"
weather::weather(double nowT, double nowW)//날씨받기
{
	nowTemp = nowT;
	nowWind = nowW;
	windchilltemper();
}
weather::weather(char ch)//변수가 캐릭터형이면 이 오버로드 생성자함수 실행
{
	nowTemp = setnowtemp();//기온받고
	nowWind = setnowwind();//풍속받고
	windchilltemper();//체감온도계산하고
	cout << "four" << endl;//함수실행되는지확인하고
}
double weather::windchilltemper() {//체감온도
	windchillT = 13.12 + 0.6215*nowTemp - 11.37*nowWind + 0.3965*nowTemp*nowTemp;
	cout << "Today's Windchilltemperature : " << windchillT<< endl;
	return windchillT;
}
double weather::setnowtemp() {//기온받고
	cout << "Enter the today's temperature: ";
	cin >> nowTemp;
	cout << "setnowtemp done0" << endl;
	return nowTemp;
}
double weather::setnowwind() {//풍속받고
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
void weather::setWeather()//날씨 선택하고
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