#include"Date.h"
#include"weather.h"
#include"Income.h"
#include"Consumption.h"//Ŭ���� ��� ����

int main() {
	cout << "21811957 ������" << endl;
	cout << "21811907 �ȴ���" << endl;
	Date a(2019, 6, 24);
	a.display();

	char today='W';
	weather mood(today);
	weather* pw = &mood;
	pw->getnowtemp();
	pw->getnowwind();
	pw->getwindchillt();
	pw->setWeather();//������ Ȱ���ؼ� �Լ����
	cout << "--------------weather--------------" << endl;//��¥ Ŭ����

	Income plus(0.1);
	Money* pb = &plus;
	pb->getcost();
	pb->getquantity();
	pb->gettotalcost();
	double p_money = plus.gettotalcost();//������ Ȱ�� �Լ����
	cout << "--------------Income--------------" << endl;//���� Ŭ����
	
	Consumption minus(0.1);
	pb = &minus;
	pb->getcost();
	pb->getquantity();
	pb->gettotalcost();
	double m_money = minus.gettotalcost();//������ Ȱ�� �Լ����
	cout << "--------------Consumption--------------" << endl;//���� Ŭ����
	
	double today_money = p_money - m_money;//�Ϸ� �� ���
	cout << "This is today total cost of money: " << today_money << endl;
	if (today_money > 0) {//�Ѻ�뿡�� ������ �� Ŭ��
		
		cout << "Good job, keep going" << endl;

	}
	else//�� ��뿡�� ������ �� Ŭ��
		cout << "Don't live like that, you'll live in street" << endl;
	

	cin.ignore();
	system("pause");
	return 0;
}
