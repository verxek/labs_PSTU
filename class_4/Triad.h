#pragma once
#include <iostream>
using namespace std;

class Triad
{
	

public:
	Triad();
	~Triad();
	Triad(int, int, int);
	Triad(const Triad&);

	// ���������
	int get_first();
	int get_second();
	int get_third();

	// ������������
	void set_first(int);
	void set_second(int);
	void set_third(int);

	Triad& operator=(const Triad&);

	friend istream& operator>>(istream& in, Triad& t);
	friend ostream& operator<<(ostream& out,  Triad& t);

protected:
	int first;
	int second;
	int third;
};
