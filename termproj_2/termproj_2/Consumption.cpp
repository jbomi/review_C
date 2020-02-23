#include "Consumption.h"
Consumption::Consumption(string why, double much, int many, double totalC) :Money(why, much, many, totalC)
{}
Consumption::Consumption(double it)
{
	reason = setreason();//이유새로받고
	cost = setcost();//비용새로받고
	quantity = setquantity();//횟수 새로받고
	caculate_T();//총비용계산하고
	cout << "three" << endl;//함수 실행 확인용 문장
}
double Consumption::setcost() {//비용 받기
	cout << "Enter the today's cost of consumption: ";
	cin >> cost;
	cout << "setcost done0" << endl;
	return cost;
}
int Consumption::setquantity() {//횟수 받기
	cout << "Enter the quantity of consumption: ";
	cin >> quantity;
	cout << "setquantity done0" << endl;
	return quantity;
}
string Consumption::setreason() {//이유 받기
	cout << "Enter the today's reason of consumption: ";
	cin >> reason;
	cout << "setreason done0" << endl;
	return reason;
}
double Consumption::getcost()
{
	cout << "getcost done0" << endl;
	return cost;
}
double Consumption::getquantity()
{
	cout << "getquantity done0" << endl;
	return quantity;
}
double Consumption::gettotalcost()
{
	cout << "gettotalcost done0" << endl;
	return totalcost;
}
void Consumption::caculate_T()
{//비용계산
	totalcost = cost * quantity;
	cout << "Today's Consumption : " << totalcost << endl;
	if (totalcost > 20000) {//20000보다 지출이 크면 돈 절약필요
		cout << "You have to save money" << endl;
	}
	else
		cout << "Do well" << endl;// 2만원보다 지출 적으면 잘했음!

}
Consumption::~Consumption()
{
}
