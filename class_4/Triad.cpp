#include "Triad.h"
#include <iostream>
using namespace std;

Triad::Triad()
{
	first = 0;
	second = 0;
	third = 0;
	cout << "Вызван конструктор без параметров для объекта " << this << endl;
}
Triad::~Triad()
{
	
	cout << "Вызван деструктор для объекта " << this << endl;
}
Triad::Triad(int valueF, int valueS, int valueT)
{
	first = valueF;
	second = valueS;
	third = valueT;
}
Triad::Triad(const Triad& triad)
{
	first = triad.first;
	second = triad.second;
	third = triad.third;
}

void Triad::set_first(int f) { first = f; }
void Triad::set_second(int s) { second = s; }
void Triad::set_third(int t) { third = t; }
int Triad::get_first() { return first; }
int Triad::get_second() { return second; }
int Triad::get_third() { return third; }

Triad& Triad::operator=(const Triad& t)
{
	if (&t == this) return *this;
	first = t.first;
	second = t.second;
	third = t.third;
	return *this;
}
istream& operator>>(istream& in, Triad& t)
{
	cout << "Первое число: ";  in >> t.first;
	cout << "Второе число: "; in >> t.second;
	cout << "Третье число: "; in >> t.third;
	cout << "\n";
	return in;
}
ostream& operator<<(ostream& out, Triad& t)
{
	out << "\nПервое число: " << t.get_first();
	out << "\nВторое число: " << t.get_second();
	out << "\nТретье число: " << t.get_third();
	return out;
}
