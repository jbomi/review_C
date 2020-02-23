#pragma once
#include "Money.h"//상속 부모 클래스
class Consumption : public Money//지출 클래스 
{
public:
	Consumption(string why, double much, int many, double totalC);
	Consumption(double it);//오버로드
	void caculate_T();//지출 총 비용 계산 함수
	double setcost();//비용 받고
	int setquantity();//횟수 받고
	double getcost();
	double getquantity();
	string setreason();//이유받고
	double gettotalcost();
	~Consumption();
};
