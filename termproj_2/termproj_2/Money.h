#pragma once//��Ӻθ�Ŭ����
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class Money {
protected://�ڽ�Ŭ�������� �ѱ�
	string reason;//����
	double cost;//���
	int quantity;//Ƚ��
	double totalcost;//�Ѻ��
public:
	Money(string = "nothing", double = 0, int = 0, double = 0);
	virtual void caculate_T();//�Ѻ���� �����Լ�
	virtual double setcost() = 0;//���ޱ� �����Լ�
	virtual int setquantity() = 0;//Ƚ���ޱ� �����Լ�
	virtual double getcost() = 0;
	virtual double getquantity() = 0;
	virtual string setreason() = 0;//�����ޱ� �����Լ�
	virtual double gettotalcost() = 0;
	~Money();
};
