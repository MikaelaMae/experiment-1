#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main() 
{
	double a, b, c, d;

	cout << "Ticket Price       " << endl;
	cout << "Box: $250" << endl;
	cout << "Sideline: $100" << endl;
	cout << "Premium: $50" << endl;
	cout << "General Admission: $25" << endl;
	cout << "Enter number of tickets sold for Box: " << endl;
	cin >> a;
	cout << "Enter number of tickets sold for Sideline: " << endl;
	cin >> b;
	cout << "Enter number of tickets sold for Premium: " << endl;
	cin >> c;
	cout << "Enter number of tickets sold for General Admission: " << endl;
	cin >> d;

	cout << "Total Ticket Price: " << endl;
	cout << "For Box: " << setprecision(2) << fixed << 250*a << endl;
	cout << "For Sideline: " << setprecision(2) << 100*b << endl;
	cout << "For Premium: " << 50 * c << endl;
	cout << "For General Admission: " << d * 25 << endl;
	_getch();
	return 0;
}
