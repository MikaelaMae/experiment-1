#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main() 
{
	double box, side, prm, gen;

	cout << "Ticket Price       " << endl;
	cout << "Box: $250" << endl;
	cout << "Sideline: $100" << endl;
	cout << "Premium: $50" << endl;
	cout << "General Admission: $25" << endl << endl;
	cout << "Enter number of tickets sold for Box: ";
	cin >> box;
	cout << "Enter number of tickets sold for Sideline: ";
	cin >> side;
	cout << "Enter number of tickets sold for Premium: ";
	cin >> prm;
	cout << "Enter number of tickets sold for General Admission: ";
	cin >> gen;

	cout << endl << "Total Ticket Price: " << endl;
	cout << "For Box: " << setprecision(2) << fixed << 250*box << endl;
	cout << "For Sideline: " << setprecision(2) << 100*side << endl;
	cout << "For Premium: " << 50*prm << endl;
	cout << "For General Admission: " << gen*25 << endl;
	
	getch();
	return 0;
}
