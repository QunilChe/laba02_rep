// Lab_02.cpp
// < �������, ��� ������ >
// ����������� ������ No 2.
// ˳��� ��������.
// ������ 0.2
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������
	cout << "x = "; cin >> x;
	z1 = cos(x) + cos(x*2) + cos(x*6) + cos(x*7);
	z2 = 4*cos(x/2)*cos((5/2)*x)*cos(4*x);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}