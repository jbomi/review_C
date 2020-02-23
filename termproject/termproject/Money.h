#pragma once
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class Money {
protected:
	string reason;
	double cost;
	int quantity;
	double totalcost;
public:
	Money(string = "nothing", double = 0, int = 0, double = 0);
	virtual void caculate_T() = 0;
	virtual double setcost() = 0;
	virtual int setquantity() = 0;
	virtual double getcost() = 0;
	virtual double getquantity() = 0;
	virtual string setreason() = 0;
	virtual double gettotalcost() = 0;
	~Money();
};
