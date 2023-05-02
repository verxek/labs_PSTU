#pragma once

#include <iostream>
using namespace std;

class Money
{
public:
	Money(void);
	Money(long, int);
	Money(const Money&);
	Money& operator=(const Money&);

	friend ostream& operator<<(ostream& out, const Money&);
	friend istream& operator>>(istream& in, Money&);
	virtual ~Money(void) { rubles = 0; kop = 0; };

	void operator!=(const Money& t);
private:
	long rubles;
	int kop;
};


//template<class T, class T2>
//class Money
//{
//private:
//	T rubles;
//	T kop;
//public:
//	Money(long rubles, int copeyka)
//	{
//		this->rubles = rubles;
//		this->kop = copeyka;
//	}
//	~Money() {};
//	void show()
//	{
//		cout << "Ñóììà: " << rubles << "," << kop << endl;
//	}
//	Money operator - (const Money& other)
//	{
//		Money<T, T2> tmp(243421992, 167);
//		tmp.rubles = this->rubles - other.rubles;
//		tmp.kop = this->kop - other.kop;
//		return tmp;
//	}
//};

