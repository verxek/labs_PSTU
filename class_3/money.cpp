#include <iostream>
#include "money.h"
using namespace std;

money::money() // ����������� �� ���������
{
	cout << "������ ����������� ��� ���������� ��� ������� " << this << "." << endl;
}

money::money(long valueR, int valueK) // ����������� � �����������
{
	cout << "������ ����������� � ����������� " << valueR << " � " << valueK << endl;
	ruble = valueR;
	kop = valueK;
}
money::money(const money& t)  // ����������� �����������
{
	ruble = t.ruble;
	kop = t.kop;
}
money::~money() {		// ����������
	cout << "������ ���������� ��� ������� " << this << endl;
}

// ���������� �������� ������������
money& money::operator=(const money& t)
{
	// �������� �� ����������������
	if (&t == this) return *this;
	ruble = t.ruble;
	kop = t.kop;
	return *this;
}
// ���������� ������� - ��������� ==
void money::operator==(const money& m)
{
	if ((ruble == m.ruble) && (kop == m.kop))
	{
		cout << ruble << "," << kop << " � " << m.ruble << "," << m.kop << " �����." << endl;
	}
	else
	{
		cout << ruble << "," << kop << " � " << m.ruble << "," << m.kop << " �� �����." << endl;
	}
}
// ���������� ������� - ��������� !=
void money::operator!=(const money& m)
{
	if ((ruble != m.ruble) || (kop != m.ruble))
	{
		cout << ruble << "," << kop << " � " << m.ruble << "," << m.kop << " �� �����." << endl;
	}
	else
	{
		cout << ruble << "," << kop << " � " << m.ruble << "," << m.kop << " �����." << endl;
	}
}
// ���������� �������� �������� ���������
money& money::operator-(const money& m)
{
	int t1 = ruble + m.ruble;
	int t2 = kop + m.kop;
	ruble = t1 + (t2 / 100);
	kop = 0;
	return *this;
}



// ���������� ���������� ������� - �������� �����
istream& operator>>(istream& in, money& t)
{
	cout << "������� �����: "; in >> t.ruble;
	cout << "������� �������: "; in >> t.kop;
	return in;
}

// ���������� ���������� ������� - �������� ������
ostream& operator<<(ostream& out, const money& t)
{
	return (out << t.ruble << "," << t.kop);
}

