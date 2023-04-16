#include <iostream>
#include <string>
#include "employee.h"
#include <Windows.h>
using namespace std;



employee make_employee()
{
	string n, p, s;
	
	
	cout << "Введите ФИО: ";  getline(cin, n); 
	cout << "Введите должность: "; getline(cin, p); 
	cout << "Введите зарплату: "; cin >> s;
	employee emp(n,p,s);
	return emp;
}

int main()
{
	SetConsoleCP(1251);
	setlocale(0, "Rus");

	cout << "Первый сотрудник." << endl;
	employee emp1;

	emp1.set_name("Иванов Иван Иванович");
	emp1.set_position("Главный танцор диско");
	emp1.set_salary("60000");

	emp1.show();

	cout << "----------------------------" << endl;

	cout << "Второй сотрудник." << endl;
	employee emp2("Иванов Иван Иванович", "Заведующий отделом кадров", "100000");
	emp2.get_name();
	emp2.get_position();
	emp2.get_salary();

	cout << "----------------------------" << endl;

	employee emp3 = make_employee();
	emp3.show();

	return 0;
}