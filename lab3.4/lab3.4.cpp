// Lab_03_4.cpp
// < ������ ������� ��������� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 0.1
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� 
	double R; // �������

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "r = "; cin >> R;

	// ������������ � ����� ����
	if (((x * x) + (y * y) <= R * R && y >= 0) ||
		(y <= 0 && y <= x && y >= -R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}

