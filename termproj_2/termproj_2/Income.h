#pragma once
#include "Money.h"//��� �θ� Ŭ����
class Income : public Money {
public:
	Income(string why, double much, int many, double totalC);
	Income(double it);
	void caculate_T();//���� �� ��� ��� �Լ�
	double setcost();//��� ����
	int setquantity();//Ƚ�� ����
	double getcost();
	double getquantity();
	string setreason();//���� ���� ����
	double gettotalcost();
	~Income();
};

