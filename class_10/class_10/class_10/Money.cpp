#include "Money.h"

Money::Money() 
{
	rubles = 0; kop = 0;
}

Money::Money(long r, int k)
{
	rubles = r; kop = k;
}

Money::Money(const Money& m)
{
	rubles = m.rubles;
	kop = m.kop;
}

Money Money::operator=(const Money& m)
{
	if (&m == this) return *this;
	rubles = m.rubles; 
	kop = m.kop;
	return *this;
}

Money::~Money() {}

ostream& operator<<(ostream& out, const Money& m)
{
	out << m.rubles << "," << m.kop;
	return out;
}


istream& operator>>(istream& in, Money& m)
{
	cout << "rubles? "; in >> m.rubles;
	cout << "kop? "; in >> m.kop;
	return in;
}

fstream& operator>>(fstream& fin, Money& m)
{
	fin >> m.rubles;
	fin >> m.kop;
	return fin;
}

fstream& operator<<(fstream& fout, const Money& m)
{
	fout << m.rubles << "\n" << m.kop << "\n";
	return fout;
}

bool Money::operator==(const Money& m)
{
	if (rubles == m.rubles && kop == m.kop) return true;
	return false;
}
bool Money::operator!=(const Money& m)
{
	if (rubles != m.rubles || kop != m.kop) return true;
	return false;
}

Money& Money::operator+(const Money& m)
{
	rubles += m.rubles;
	rubles += (kop + m.kop) / 100;
	kop = (kop + m.kop) % 100;
	return *this;
}

Money& Money::operator--()
{
	kop = 0;
	return *this;
}

bool Money::operator<(const Money& m)
{
	if (rubles < m.rubles) return true;
	else if (kop < m.kop) return true;
	return false;
}
bool Money::operator>(const Money& m)
{
	if (rubles > m.rubles) return true;
	else if (kop > m.kop) return true;
	return false;
}

Money& Money::operator++()
{
	rubles -= 1;
	if (kop / 50 == 0)
	{
		rubles--;
		kop = kop + 50;
	}
	else kop = kop - 50;
	return *this;
}

long Money::get_rubles() { return rubles; }
int Money::get_kop() { return kop; }