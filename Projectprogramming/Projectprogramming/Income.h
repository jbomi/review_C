#pragma once
#include "Money.h"
class Income : public Money{
public:
	Income(string why, double much, int many, double totalC);
	Income(double it);
	void caculate_T();
	double setcost();
	int setquantity();
	double getcost();
	double getquantity();
	string setreason();
	double gettotalcost();
	~Income();
};

