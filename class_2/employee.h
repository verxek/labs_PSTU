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

	employee(); // ����������� �� ���������
	
	// ����������� � �����������
	employee(string valueN, string valueP, string valueS);
	
	employee(const employee& t); // ����������� �����������
	
	~employee(); // ����������
	
	// ���������
	void get_name();  
	void get_position();
	void get_salary();

	// ������������
	void set_name(string n);   
	void set_position(string p);  
	void set_salary(string s);

	// ������� ��� ������ ������
	void show();

};
