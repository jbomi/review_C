#include "Income.h"
Income::Income(string why, double much, int many, double totalC) :Money(why, much, many, totalC)
{}
Income::Income(double it)//오버로드 사용
{
	reason = setreason();//이유받고
	cost = setcost();//비용받고
	quantity = setquantity();//횟수 받고
	caculate_T();//총 금액 계산하고
	cout << "two" << endl;
}
double Income::setcost() {//비용받기
	cout << "Enter the today's cost of Income: ";
	cin >> cost;
	cout << "setcost done1" << endl;//함수 실행 확인
	return cost;
}
int Income::setquantity() {//횟수받기
	cout << "Enter the quantity of Income: ";
	cin >> quantity;
	cout << "setquantity done1" << endl;//함수실행확인
	return quantity;
}
string Income::setreason() {//이유받기
	cout << "Enter the today's reason of Income: ";
	cin >> reason;
	cout << "setreason done1" << endl;//함수실행확인
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
void Income::caculate_T()//전체 총 수입비용 계산함수
{
	totalcost = cost * quantity;
	cout << "Today's Income: " << totalcost << endl;
	if (totalcost > 20000) {//수입이 20000원 넘을경우
		cout << "Do well" << endl;
	}
	else//수입이 20000원 보다 낮을 경우
		cout << "You have to save money" << endl;
}
Income::~Income()
{
}
