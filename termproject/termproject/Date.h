#include<iostream>
#include<iomanip>
using namespace std;
class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date(int = 2019, int = 06, int = 20);
	Date(double yyyymmdd);
	void display();
	~Date();
};
