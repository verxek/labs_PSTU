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

// ���������
int Time::get_hours() { return hours; }
int Time::get_mins() { return mins; }
int Time::get_sec() { return sec; }

// ������������
void Time::set_hours(int h) { hours = h; }
void Time::set_mins(int m) { mins = m; }
void Time::set_sec(int s) { sec = s; }



// ���������� ��������� ������������
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

	cout << "����: "; in >> t.hours;
	cout << "������: "; in >> t.mins;
	cout << "�������: "; in >> t.sec;
	cout << "\n\n";
	return in;
}
ostream& operator<<(ostream& out, const Time& t)
{

	out << "\n" << t.hours << " � " << t.mins << " ��� " << t.sec << " ��� ";

	out << "\n";
	return out;
}

void Time::Show()
{
	cout << hours << " � " << mins << " ��� " << sec << " ��� " << endl;
}
void Time::operator||(const Time& t) // �������� ��������� 
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
	if (a == 1) { cout << hours << " � " << mins << " ��� " << sec << " ���  > " << t.hours << " � " << t.mins << " ��� " << t.sec << " ��� " << endl; }
	else if (a == 2) { cout << hours << " � " << mins << " ��� " << sec << " ���  < " << t.hours << " � " << t.mins << " ��� " << t.sec << " ��� " << endl; }
	else { cout << hours << " � " << mins << " ��� " << sec << " ���  = " << t.hours << " � " << t.mins << " ��� " << t.sec << " ��� " << endl; }
}
