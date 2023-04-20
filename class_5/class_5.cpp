#include <iostream>
#include "Time.h"
#include "Vector.h"


using namespace std;

int main()
{
	setlocale(0, "Rus");

	Vector v(5); // вектор из 5 элементов
	Triad a;  // объект класса Triad
	cin >> a;
	Time b;
	cin >> b;
	Object* p = &a; // ставим указатель на объект класса Triad
	v.Add(p); // добавляем объект в вектор
	p = &b; // ставим указатель на объект класса Time
	v.Add(p); // добавляем объект в вектор
	cout << "Вывод вектора:" << endl;
	cout << v; // вывод вектора

	return 0;
}