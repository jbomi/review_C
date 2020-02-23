#include "Date.h"

Date::Date(int yyyy,int mm,int dd)
{
	year = yyyy;
	month = mm;
	day = dd;
}
Date::Date(double yyyymmdd)
{
	year = int(yyyymmdd / 10000.);
	month = int((yyyymmdd - year * 10000.) / 10000);
	day = int(yyyymmdd - year * 10000 - month * 100);
}

void Date::display() {
	cout << "Today is ";
	cout << setfill('0') << setw(4) << year << '/' << setw(2) << month << '/' << setw(2) << day << endl;

}
Date::~Date()
{
}
