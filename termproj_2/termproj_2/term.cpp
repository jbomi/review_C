#include"Date.h"
#include"weather.h"
#include"Income.h"
#include"Consumption.h"//클래스 헤더 정의

int main() {
	cout << "21811957 정보미" << endl;
	cout << "21811907 안덕현" << endl;
	Date a(2019, 6, 24);
	a.display();

	char today='W';
	weather mood(today);
	weather* pw = &mood;
	pw->getnowtemp();
	pw->getnowwind();
	pw->getwindchillt();
	pw->setWeather();//포인터 활용해서 함수사용
	cout << "--------------weather--------------" << endl;//날짜 클래스

	Income plus(0.1);
	Money* pb = &plus;
	pb->getcost();
	pb->getquantity();
	pb->gettotalcost();
	double p_money = plus.gettotalcost();//포인터 활용 함수사용
	cout << "--------------Income--------------" << endl;//수입 클래스
	
	Consumption minus(0.1);
	pb = &minus;
	pb->getcost();
	pb->getquantity();
	pb->gettotalcost();
	double m_money = minus.gettotalcost();//포인터 활용 함수사용
	cout << "--------------Consumption--------------" << endl;//지출 클래스
	
	double today_money = p_money - m_money;//하루 총 비용
	cout << "This is today total cost of money: " << today_money << endl;
	if (today_money > 0) {//총비용에서 수입이 더 클때
		
		cout << "Good job, keep going" << endl;

	}
	else//총 비용에서 지출이 더 클때
		cout << "Don't live like that, you'll live in street" << endl;
	

	cin.ignore();
	system("pause");
	return 0;
}
