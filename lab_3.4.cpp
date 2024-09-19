// Lab_03_4.cpp 
// < Дмитрович Віктор > 
// Лабораторна робота № 3.4 
// Розгалуження, задане плоскою фігурою.
// Варіант 7

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double R;
	double x;
	double y;


	cout << "Enter R: "; cin >> R;
	cout << "Enter x: "; cin >> x;
	cout << "Enter y: "; cin >> y;

	if ((x * x + (y - R) * (y - R) <= R * R)) //перевірка для круга
		cout << "yes" << endl;
	else
		if ((x >= 0 && x <= 2 * R && y >= -R && y <= 0)) //перевірка для прямокутника
			cout << "yes" << endl;
		else
			cout << "no" << endl;

cin.get();
return 0;
}