#include "Income.h"


Income::Income(string why, double much, int many, double totalC):Money(why, much, many, totalC)
{
}
Income::Income(double it)

{
	reason = setreason();
	cost = setcost();
	quantity = setquantity();
	caculate_T();
	cout << "two" << endl;
}

double Income::setcost() {
	cout << "Enter the today's cost of consumption: ";
	cin >> cost;
	cout << "setcost done1" << endl;
	return cost;
}
int Income::setquantity() {
	cout << "Enter the quantity of consumption: ";
	cin >> quantity;
	cout << "setquantity done1" << endl;
	return quantity;
}
string Income::setreason() {
	cout << "Enter the today's reason of consumption: ";
	cin >> reason;
	cout << "setreason done1" << endl;
	return reason;
}
double Income::getcost()
{
	cout << "getcost done1" << endl;
	return cost;
}
double Income::getquantity()
{
	cout << "getquantity done1" << endl;
	return quantity;
}
double Income::gettotalcost()
{
	cout << "gettotalcost done1" << endl;
	return totalcost;
}
void Income::caculate_T()
{
	totalcost = cost * quantity;
	cout << "Today's Income: " << totalcost << endl;
	if (totalcost > 20000) {
		cout << "Do well" << endl;
	}
	else
		cout << "You have to save money" << endl;
	
}


Income::~Income()
{
}
