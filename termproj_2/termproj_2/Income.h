#pragma once
#include "Money.h"//상속 부모 클래스
class Income : public Money {
public:
	Income(string why, double much, int many, double totalC);
	Income(double it);
	void caculate_T();//수입 총 비용 계산 함수
	double setcost();//비용 받음
	int setquantity();//횟수 받음
	double getcost();
	double getquantity();
	string setreason();//수입 이유 받음
	double gettotalcost();
	~Income();
};

