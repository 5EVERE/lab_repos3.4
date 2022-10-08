// Lab_03_4.cpp
// < Гвоздь Северин Тарасович >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 0.1
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний 
	double R; // вхідний

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "r = "; cin >> R;

	// розгалуження в повній формі
	if (((x * x) + (y * y) <= R * R && y >= 0) ||
		(y <= 0 && y <= x && y >= -R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}

