#include <iostream>
#include <math.h>
using namespace std;

double func(int n, double x) {
	double a;
	if (n == 0) {
		return x; // первый член ряда
	}
	a = (pow(x, 4 * n + 1) / (4 * n + 1)); // n-ый член ряда
	return (a + func(n - 1, x)); // рекурсивный вызов значения предыдущего члена ряда
}

int main() {
	setlocale(0, "Rus");
	double x;
	int n;
	cout << "Введите n и х: " << endl;
	cin >> n >> x;
	
	

	cout << "Для заданного n = " << n << " и х = " << x <<" сумма ряда равна: ";
	cout << func(n, x); 
	
	cout << endl;
	cout << "Точное значение функции для сравнения: ";   
	cout << ((1.0 / 4) * log((1 + x) / (1 - x)) + (1.0 / 2) * atan(x)) << endl;
	 
	return 0;
}