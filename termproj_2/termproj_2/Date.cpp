#include "Date.h"

Date::Date(int yyyy, int mm, int dd)//�������Լ�
{
	year = yyyy;
	month = mm;
	day = dd;
}
Date::Date(double yyyymmdd)//�����ε�
{
	year = int(yyyymmdd / 10000.);
	month = int((yyyymmdd - year * 10000.) / 10000);
	day = int(yyyymmdd - year * 10000 - month * 100);
}
void Date::display() {//��¥�����ֱ��Լ�
	cout << "Today is ";
	cout << setfill('0') << setw(4) << year << '/' << setw(2) << month << '/' << setw(2) << day << endl;
	cout << "--------------Date--------------" << endl;
}
Date::~Date()
{
}
