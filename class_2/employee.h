#include <iostream>
#include <string>
using namespace std;

class employee
{
private:
	string name;
	string position;
	string salary;
public:

	employee(); // конструктор по умолчанию
	
	// конструктор с параметрами
	employee(string valueN, string valueP, string valueS);
	
	employee(const employee& t); // конструктор копирования
	
	~employee(); // деструктор
	
	// селекторы
	void get_name();  
	void get_position();
	void get_salary();

	// модификаторы
	void set_name(string n);   
	void set_position(string p);  
	void set_salary(string s);

	// функция для вывода данных
	void show();

};
