#pragma once//���� �Լ�
#include <iostream>
#include<cmath>
using namespace std;
class weather
{
private:
	double nowTemp;//������
	double nowWind;//���� ǳ��
	double windchillT;//ü���µ�
public:
	weather(double = 0, double = 0);
	weather(char ch);//�����ε�
	void setWeather();//���� �ޱ�
	double setnowtemp();//�����¹ޱ�
	double setnowwind();//����ǳ�ӹޱ�
	double getnowtemp();
	double getnowwind();
	double getwindchillt();
	double windchilltemper();//ü���µ� ����Լ�
	~weather();
};
