#include<iostream>//��¥ Ŭ����
#include<iomanip>
using namespace std;
class Date
{
private:
	int year;//�⵵
	int month;//��
	int day;//��
public:
	Date(int = 2019, int = 06, int = 20);//default
	Date(double yyyymmdd);//�����ε�
	void display();
	~Date();
};
