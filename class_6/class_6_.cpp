#include<iostream>
#include<ctime>
#include "Iterator.h"
#include "Plenty.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int size = 10, k;
	Plenty a(size);
	Iterator iter;
	
	cout << "Множество а: ";
	for (iter = a.first(); iter != a.last(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;
	cout << "Введите индекс элемента: "; cin >> k;
	cout << endl << "Число с выбранным индексом: " << a[k] << endl;

	
	cout << endl;

	int c;
	cout << "Введите число, которое хотите проверить на принадлежность множеству а: "; cin >> c;
	if (a < c) cout << "Число " << c << " принадлежит множеству а." << endl;
	else cout << "Число " << c << " не принадлежит множеству а." << endl;

	Plenty b(size);
	cout << "Множество b: ";
	for (iter = b.first(); iter != b.last(); ++iter)
	{
		cout << *iter << " ";
	}
	
	cout << "Операция проверки на неравенство:" << endl;
	if (a != b) cout << "a != b" << endl;
	else cout << "a = b" << endl;
	
	

	
	return 0;
}