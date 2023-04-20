#include<iostream>
#include<ctime>
#include "Iterator.h"
#include "Plenty.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int k = 1;
	int size = 5;
	Plenty a(size);
	Iterator iter;
	
	cout << "Множество а: ";
	for (iter = a.first(); iter != a.last(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl << "Число с выбранным индексом: " << a[k] << endl;

	--iter; // переход к предыдущему элементу

	cout << "Предыдущий элемент: " << *iter << endl;

	--iter;  // переход к предыдущему элементу

	cout << "Предыдущий элемент: " << *iter << endl;
	cout << "Длина вектора a: " << a() << endl;

	cout << endl;

	Plenty b(size);
	cout << "Множество b: ";
	for (iter = b.first(); iter != b.last(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl << "Длина вектора b: " << b() << endl;

	Plenty c = a - b;
	cout << "Разность множеств равна - ";
	for (iter = c.first(); iter != c.last(); ++iter)
	{
		cout << *iter << " ";
	}
	return 0;
}