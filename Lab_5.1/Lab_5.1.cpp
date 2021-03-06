﻿// Lab_5.1.cpp
// Дорожовець Володимир 
// Лабораторна робота № 5.1
// Функції, що містять арифметичний вираз.
// Варіант 0.6 
#include <iostream>

using namespace std;

double h(const double x, const double y)
{
	return (x*y) / (1+x*x*y*y);
}

int main()
{
	double s, t;

	cout << "s = "; cin >> s;
	cout << endl;
	cout << "t = "; cin >> t;
	cout << endl;

	double l = (h(s * s, t * t) + h(s + t, 1) * h(s + t, 1))
		/ (1 + h(s * t, 2) * h(s * t, 2));

	cout << "l = " << l << endl;

	return 0;
}