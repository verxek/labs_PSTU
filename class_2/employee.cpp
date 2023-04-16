#include "employee.h"
#include <string>
#include <iostream>
using namespace std;


employee::employee()  // ����������� �� ���������
{
	cout << "����� ������������ �� ���������." << endl;
}
// ����������� � �����������
employee::employee(string valueN, string valueP, string valueS)
{
	cout << "����� ������������ � �����������." << endl;
	name = valueN;
	position = valueP;
	salary = valueS;
}
employee::employee(const employee& t) // ����������� �����������
{
	name = t.name;
	position = t.position;
	salary = t.salary;
}

employee::~employee() // ����������
{
	cout << "����� �����������." << endl;
}

void employee::get_name()
{
	cout << "���: " << name << endl;
}
void employee::set_name(string n)
{
	name = n;
}
void employee::get_position()
{
	cout << "���������: " << position << endl;
}
void employee::set_position(string p)
{
	position = p;
}
void employee::get_salary()
{
	cout << "��������: " << salary << endl;
}
void employee::set_salary(string s)
{
	salary = s;
}
void employee::show()
{
	cout << "���: " << name << endl;
	cout << "���������: " << position << endl;
	cout << "��������: " << salary << endl;
}