#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	int d1, d2;
	double netBalance, payment, aveDB, interest;
	
	cout << "Calculate your credit card's unpaid balance interest" << endl << endl;
	cout << "Input your net balance: ";
	cin >> netBalance;
	cout << "Input the value of payment made: ";
	cin >> payment;
	cout << "Input the number of days in the billing cycle: ";
	cin >> d1;
	cout << "Input the number of days payment is made before billing cycle: ";
	cin >> d2;
	cout << endl;
	
	aveDB = (netBalance*d1)-(payment*d2)/d1;
	interest = (aveDB * 0.0097);
	
	cout << "Your credit card's unpaid balance interest is: " << setprecision(3) << fixed << interest << endl;
	
	
	
	getch();
	return 0;
}
