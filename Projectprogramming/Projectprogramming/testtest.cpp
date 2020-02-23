
#include"Income.h"
#include"Consumption.h"

int main() {
	
	Income b(0.1);
	Money* pb = &b;
	double costt = b.getcost();
	int quan = b.getquantity();
	double total = b.gettotalcost();
	cout << "-------------" << endl;
	cout << "Now cost: " << costt << endl;
	cout << "Now quan: " << quan << endl;
	cout << "Now total: " << total << endl;

	cin.ignore();
	system("pause");
	return 0;

}