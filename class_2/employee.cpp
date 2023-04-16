#include "employee.h"
#include <string>
#include <iostream>
using namespace std;


employee::employee()  // конструктор по умолчанию
{
	cout << "Вызов конструктора по умолчанию." << endl;
}
// конструктор с параметрами
employee::employee(string valueN, string valueP, string valueS)
{
	cout << "Вызов конструктора с параметрами." << endl;
	name = valueN;
	position = valueP;
	salary = valueS;
}
employee::employee(const employee& t) // конструктор копирования
{
	name = t.name;
	position = t.position;
	salary = t.salary;
}

employee::~employee() // деструктор
{
	cout << "Вызов деструктора." << endl;
}

void employee::get_name()
{
	cout << "Имя: " << name << endl;
}
void employee::set_name(string n)
{
	name = n;
}
void employee::get_position()
{
	cout << "Должность: " << position << endl;
}
void employee::set_position(string p)
{
	position = p;
}
void employee::get_salary()
{
	cout << "Зарплата: " << salary << endl;
}
void employee::set_salary(string s)
{
	salary = s;
}
void employee::show()
{
	cout << "ФИО: " << name << endl;
	cout << "Должность: " << position << endl;
	cout << "Зарплата: " << salary << endl;
}