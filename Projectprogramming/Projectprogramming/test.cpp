#include"Consumption.h"
#include"Date.h"
#include"Income.h"

int main() {
	Date a(2019,6,23);
	a.display();
	Income b("New",0,0,0);
	Money* pm = &b;
	pm->setreason();
	pm->setcost();
	pm->setquantity();
	pm->caculate_T();

	Consumption c();

}