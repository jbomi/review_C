#include "weather.h"
weather::weather(double nowT, double nowW)//�����ޱ�
{
	nowTemp = nowT;
	nowWind = nowW;
	windchilltemper();
}
weather::weather(char ch)//������ ĳ�������̸� �� �����ε� �������Լ� ����
{
	nowTemp = setnowtemp();//��¹ް�
	nowWind = setnowwind();//ǳ�ӹް�
	windchilltemper();//ü���µ�����ϰ�
	cout << "four" << endl;//�Լ�����Ǵ���Ȯ���ϰ�
}
double weather::windchilltemper() {//ü���µ�
	windchillT = 13.12 + 0.6215*nowTemp - 11.37*nowWind + 0.3965*nowTemp*nowTemp;
	cout << "Today's Windchilltemperature : " << windchillT<< endl;
	return windchillT;
}
double weather::setnowtemp() {//��¹ް�
	cout << "Enter the today's temperature: ";
	cin >> nowTemp;
	cout << "setnowtemp done0" << endl;
	return nowTemp;
}
double weather::setnowwind() {//ǳ�ӹް�
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
void weather::setWeather()//���� �����ϰ�
{
	int c;
	cout << "������ �������ּ���. <1> Sunny <2> Cloudy <3> Rain <4> Snow" << endl;
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
		cout << "�߸��� �����Դϴ�." << endl;
		break;
	}
}
weather::~weather()
{
}