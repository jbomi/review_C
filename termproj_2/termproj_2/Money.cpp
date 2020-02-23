#include "Money.h"
Money::Money(string why, double much, int many, double totalC)
{//생성자함수
	reason = why;
	cost = much;
	quantity = many;
	caculate_T();
}
void Money::caculate_T() {}
Money::~Money()
{}
