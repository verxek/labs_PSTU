#include <iostream>
#include "money.h"
using namespace std;

money::money() // конструктор по умолчанию
{
	cout << "Вызван конструктор без параметров для объекта " << this << "." << endl;
}

money::money(long valueR, int valueK) // конструктор с параметрами
{
	cout << "Вызван конструктор с параметрами " << valueR << " и " << valueK << endl;
	ruble = valueR;
	kop = valueK;
}
money::money(const money& t)  // конструктор копирования
{
	ruble = t.ruble;
	kop = t.kop;
}
money::~money() {		// деструктор
	cout << "Вызван деструктор для объекта " << this << endl;
}

// перегрузка операции присваивания
money& money::operator=(const money& t)
{
	// проверка на самоприсваивание
	if (&t == this) return *this;
	ruble = t.ruble;
	kop = t.kop;
	return *this;
}
// перегрузка функции - оператора ==
void money::operator==(const money& m)
{
	if ((ruble == m.ruble) && (kop == m.kop))
	{
		cout << ruble << "," << kop << " и " << m.ruble << "," << m.kop << " равны." << endl;
	}
	else
	{
		cout << ruble << "," << kop << " и " << m.ruble << "," << m.kop << " не равны." << endl;
	}
}
// перегрузка функции - оператора !=
void money::operator!=(const money& m)
{
	if ((ruble != m.ruble) || (kop != m.ruble))
	{
		cout << ruble << "," << kop << " и " << m.ruble << "," << m.kop << " не равны." << endl;
	}
	else
	{
		cout << ruble << "," << kop << " и " << m.ruble << "," << m.kop << " равны." << endl;
	}
}
// перегрузка бинарной операции вычитания
money& money::operator-(const money& m)
{
	int t1 = ruble + m.ruble;
	int t2 = kop + m.kop;
	ruble = t1 + (t2 / 100);
	kop = 0;
	return *this;
}



// перегрузка глобальной функции - операции ввода
istream& operator>>(istream& in, money& t)
{
	cout << "Введите рубли: "; in >> t.ruble;
	cout << "Введите копейки: "; in >> t.kop;
	return in;
}

// перегрузка глобальной функции - операции вывода
ostream& operator<<(ostream& out, const money& t)
{
	return (out << t.ruble << "," << t.kop);
}

