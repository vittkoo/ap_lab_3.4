// Lab_03_4.cpp 
// < ��������� ³���� > 
// ����������� ������ � 3.4 
// ������������, ������ ������� �������.
// ������ 7

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

	if ((x * x + (y - R) * (y - R) <= R * R)) //�������� ��� �����
		cout << "yes" << endl;
	else
		if ((x >= 0 && x <= 2 * R && y >= -R && y <= 0)) //�������� ��� ������������
			cout << "yes" << endl;
		else
			cout << "no" << endl;

cin.get();
return 0;
}