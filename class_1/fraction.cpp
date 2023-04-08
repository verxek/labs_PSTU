#include <fraction.h>
#include <iostream>
#include <math.h>

using namespace std;

// ���������� ������� ������ 

void points::Init()
{
	if (x1 == round(x1) || y1 == round(y1) || x2 == round(x2) or y2 == round(y2))
	{
		cout << "������� ����� �����! ������ ��������� ���������.";
		abort();
	}
}
void points::Read()
{
	cout << "������� x1: "; cin >> x1;
	cout << "������� y1: "; cin >> y1;
	cout << "������� �2: "; cin >> x2;
	cout << "������� �2: "; cin >> y2;
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
	cout << "���������� ����� ������� (" << x1 << ", " << y1 << ") � (" << x2 << ", " << y2 << ") ����� " << d << "." << endl;
}