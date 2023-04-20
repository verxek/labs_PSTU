#include "Time.h"

#include <iostream>
using namespace std;

Time::Time(void) :Triad() {
	hours = 0;
	mins = 0;
	sec = 0;
}

Time::~Time(void) {}
Time::Time(int h, int m, int s) :Triad(first, second, third)
{
	hours = h;
	mins = m;
	sec = s;
}

Time::Time(const Time& t)
{
	first = t.first;
	second = t.second;
	third = t.third;
	hours = t.hours;
	mins = t.mins;
	sec = t.sec;
}

// селекторы
int Time::get_hours() { return hours; }
int Time::get_mins() { return mins; }
int Time::get_sec() { return sec; }

// модификаторы
void Time::set_hours(int h) { hours = h; }
void Time::set_mins(int m) { mins = m; }
void Time::set_sec(int s) { sec = s; }



// перегрузка оператора присваивани€
Time& Time::operator=(const Time& t)
{
	if (&t == this) return *this;
	first = t.first;
	second = t.second;
	third = t.third;
	Time::hours = t.hours;
	Time::mins = t.mins;
	Time::sec = t.sec;
	return *this;

}
istream& operator>>(istream& in, Time& t)
{

	cout << "„асы: "; in >> t.hours;
	cout << "ћинуты: "; in >> t.mins;
	cout << "—екунды: "; in >> t.sec;
	cout << "\n\n";
	return in;
}
ostream& operator<<(ostream& out, const Time& t)
{

	out << "\n" << t.hours << " ч " << t.mins << " мин " << t.sec << " сек ";

	out << "\n";
	return out;
}

void Time::Show()
{
	cout << hours << " ч " << mins << " мин " << sec << " сек " << endl;
}
void Time::operator||(const Time& t) // операци€ сравнени€ 
{
	int a = 0;
	if (hours > t.hours) {
		a = 1;
	}
	else if (hours < t.hours) { a = 2; }
	else {
		if (mins > t.mins) { a = 1; }
		else if (mins < t.mins) { a = 2; }
		else {
			if (sec > t.sec) { a = 1; }
			else if (sec < t.sec) { a = 2; }
			else { a = 3; }
		}
	}
	if (a == 1) { cout << hours << " ч " << mins << " мин " << sec << " сек  > " << t.hours << " ч " << t.mins << " мин " << t.sec << " сек " << endl; }
	else if (a == 2) { cout << hours << " ч " << mins << " мин " << sec << " сек  < " << t.hours << " ч " << t.mins << " мин " << t.sec << " сек " << endl; }
	else { cout << hours << " ч " << mins << " мин " << sec << " сек  = " << t.hours << " ч " << t.mins << " мин " << t.sec << " сек " << endl; }
}
