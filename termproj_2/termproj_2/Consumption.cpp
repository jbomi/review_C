#include "Consumption.h"
Consumption::Consumption(string why, double much, int many, double totalC) :Money(why, much, many, totalC)
{}
Consumption::Consumption(double it)
{
	reason = setreason();//�������ιް�
	cost = setcost();//�����ιް�
	quantity = setquantity();//Ƚ�� ���ιް�
	caculate_T();//�Ѻ�����ϰ�
	cout << "three" << endl;//�Լ� ���� Ȯ�ο� ����
}
double Consumption::setcost() {//��� �ޱ�
	cout << "Enter the today's cost of consumption: ";
	cin >> cost;
	cout << "setcost done0" << endl;
	return cost;
}
int Consumption::setquantity() {//Ƚ�� �ޱ�
	cout << "Enter the quantity of consumption: ";
	cin >> quantity;
	cout << "setquantity done0" << endl;
	return quantity;
}
string Consumption::setreason() {//���� �ޱ�
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
{//�����
	totalcost = cost * quantity;
	cout << "Today's Consumption : " << totalcost << endl;
	if (totalcost > 20000) {//20000���� ������ ũ�� �� �����ʿ�
		cout << "You have to save money" << endl;
	}
	else
		cout << "Do well" << endl;// 2�������� ���� ������ ������!

}
Consumption::~Consumption()
{
}
