#pragma once
#include "Money.h"//��� �θ� Ŭ����
class Consumption : public Money//���� Ŭ���� 
{
public:
	Consumption(string why, double much, int many, double totalC);
	Consumption(double it);//�����ε�
	void caculate_T();//���� �� ��� ��� �Լ�
	double setcost();//��� �ް�
	int setquantity();//Ƚ�� �ް�
	double getcost();
	double getquantity();
	string setreason();//�����ް�
	double gettotalcost();
	~Consumption();
};
