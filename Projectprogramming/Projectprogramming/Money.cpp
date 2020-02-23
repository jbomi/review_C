#include "Money.h"

Money::Money(string why, double much, int many, double totalC)
{
	reason = why;
	cost = much;
	quantity = many;
	caculate_T();
} 
void Money::caculate_T() {
}

Money::~Money()
{
}
