#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	double mass, density;
	cout << "Input Mass: ";
	cin >> mass;
	cout << "Mass = " << mass << "g" << endl << endl;
	cout << "Input Density: ";
	cin >> density;
	cout << "Density = " << density << "g/cm^3" << endl << endl;
	cout << "Volume of the Object = " << setprecision(2) << mass/(4*density) << "cm^3" << endl;

	getch();
	return 0;
}
