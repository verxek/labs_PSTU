#include "Money.h"
#include "Container.h"
#include <iostream>
using namespace std;

void main()
{
	setlocale(0, "Rus");
	int n;
	cout << "n? "; cin >> n;
	Container <Money> s(n);
	s.Print();

	cout << "��� �������? " << endl;
	Money to_erase; cin >> to_erase;
	s.del_el(to_erase);
	s.Print();


	Money sred = s.sred();
	cout << "����� ����� = " << sred << endl;
	cout << "��������� ��� �� ���� ���������: " << endl;
	s.add_to_all(sred);
	s.Print();

}