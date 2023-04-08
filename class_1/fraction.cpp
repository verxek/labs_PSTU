#include <fraction.h>
#include <iostream>
#include <math.h>

using namespace std;

// реализация методов класса 

void points::Init()
{
	if (x1 == round(x1) || y1 == round(y1) || x2 == round(x2) or y2 == round(y2))
	{
		cout << "Введено целое число! Работа программы завершена.";
		abort();
	}
}
void points::Read()
{
	cout << "Введите x1: "; cin >> x1;
	cout << "Введите y1: "; cin >> y1;
	cout << "Введите х2: "; cin >> x2;
	cout << "Введите у2: "; cin >> y2;
	Init();
}
void points::Show()
{
	cout << "x1 = " << x1 << endl;
	cout << "y1 = " << y1 << endl;
	cout << "x2 = " << x2 << endl;
	cout << "y2 = " << y2 << endl;
}
void points::Distance()
{
	double d;
	d = sqrt(((pow((x2 - x1), 2.0)) + (pow((y2 - y1), 2.0))));
	cout << "Расстояние между точками (" << x1 << ", " << y1 << ") и (" << x2 << ", " << y2 << ") равно " << d << "." << endl;
}