#pragma once
#include "Money.h"
class Consumption : public Money
{
public:
	Consumption(string why, double much, int many, double totalC);
	Consumption(double it);
	void caculate_T();
	double setcost();
	int setquantity();
	double getcost();
	double getquantity();
	string setreason();
	double gettotalcost();
	~Consumption();
};

