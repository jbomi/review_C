#include "Income.h"
Income::Income(string why, double much, int many, double totalC) :Money(why, much, many, totalC)
{}
Income::Income(double it)//�����ε� ���
{
	reason = setreason();//�����ް�
	cost = setcost();//���ް�
	quantity = setquantity();//Ƚ�� �ް�
	caculate_T();//�� �ݾ� ����ϰ�
	cout << "two" << endl;
}
double Income::setcost() {//���ޱ�
	cout << "Enter the today's cost of Income: ";
	cin >> cost;
	cout << "setcost done1" << endl;//�Լ� ���� Ȯ��
	return cost;
}
int Income::setquantity() {//Ƚ���ޱ�
	cout << "Enter the quantity of Income: ";
	cin >> quantity;
	cout << "setquantity done1" << endl;//�Լ�����Ȯ��
	return quantity;
}
string Income::setreason() {//�����ޱ�
	cout << "Enter the today's reason of Income: ";
	cin >> reason;
	cout << "setreason done1" << endl;//�Լ�����Ȯ��
	return reason;
}
double Income::getcost()
{
	cout << "getcost done1" << endl;
	return cost;
}
double Income::getquantity()
{
	cout << "getquantity done1" << endl;
	return quantity;
}
double Income::gettotalcost()
{
	cout << "gettotalcost done1" << endl;
	return totalcost;
}
void Income::caculate_T()//��ü �� ���Ժ�� ����Լ�
{
	totalcost = cost * quantity;
	cout << "Today's Income: " << totalcost << endl;
	if (totalcost > 20000) {//������ 20000�� �������
		cout << "Do well" << endl;
	}
	else//������ 20000�� ���� ���� ���
		cout << "You have to save money" << endl;
}
Income::~Income()
{
}
