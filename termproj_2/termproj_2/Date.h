#include<iostream>//날짜 클래스
#include<iomanip>
using namespace std;
class Date
{
private:
	int year;//년도
	int month;//월
	int day;//일
public:
	Date(int = 2019, int = 06, int = 20);//default
	Date(double yyyymmdd);//오버로드
	void display();
	~Date();
};
