// Lab_02.cpp
// < прізвище, ім’я автора >
// Лабораторна робота No 2.
// Лінійні програми.
// Варіант 0.2
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "x = "; cin >> x;
	z1 = cos(x) + cos(x*2) + cos(x*6) + cos(x*7);
	z2 = 4*cos(x/2)*cos((5/2)*x)*cos(4*x);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}