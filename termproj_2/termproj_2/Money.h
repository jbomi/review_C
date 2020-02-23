#pragma once//상속부모클래스
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class Money {
protected://자식클래스에게 넘김
	string reason;//이유
	double cost;//비용
	int quantity;//횟수
	double totalcost;//총비용
public:
	Money(string = "nothing", double = 0, int = 0, double = 0);
	virtual void caculate_T();//총비용계산 가상함수
	virtual double setcost() = 0;//비용받기 가상함수
	virtual int setquantity() = 0;//횟수받기 가상함수
	virtual double getcost() = 0;
	virtual double getquantity() = 0;
	virtual string setreason() = 0;//이유받기 가상함수
	virtual double gettotalcost() = 0;
	~Money();
};
