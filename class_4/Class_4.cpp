#include <iostream>
#include "Triad.h"
#include "Time.h"
using namespace std;


int main() {
	setlocale(0, "Rus");

	Time t1;
	// ввод данных обхекта t1
	cin>> t1;
	// вывод данных объекта t1
	cout << "Объект t1: " << t1 << endl;

	// создание объекта t2 с параметрами 12, 30, 10
	Time t2(12, 30, 10);
	cout << "Объект t2: " << t2 << endl;
	// присваивание данных объекта t2 объекту t1
	t1 = t2;
	cout << "Обновленный объект t1: " << t1;
	cout << "\n";
	

	cout << "Сравнение t1 и t2" << endl;
	t1 || t2;

	cout << "\n";

	Time t3(7, 32, 10);
	cout << "Объект t3: " << t3 << endl;

	cout << "Сравнение t1 и t3" << endl;
	t1 || t3;
	cout << "\n";

	return 0;
}