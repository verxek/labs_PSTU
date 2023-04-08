#include <iostream>
using namespace std;

/*
	Написать перегруженные функции и основную программу, которая их вызывает.
		а) для сложения десятичных дробей;
		б) для сложения обыкновенных дробей.
*/

double Sum(double a, double b)   // для десятичных дробей
{
	return a + b;
}

double Sum(int a_chis, int a_znam, int b_chis, int b_znam)  // для обыкновенных дробей
{
	return float(a_chis) / a_znam + float(b_chis) / b_znam;
}

int main2()
{
	cout << Sum(0.007, 0.13) << endl; // вызов 1-ой функции

	cout << Sum(10, 3, 12, 4) << endl;  // вызов 2-ой функции

	return 0;
}