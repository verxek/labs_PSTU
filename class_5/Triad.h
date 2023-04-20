#pragma once

#include "Object.h"


class Triad:
	public Object
{


public:
	Triad();
	virtual ~Triad(void);
	Triad(int, int, int);
	Triad(const Triad&);

	void Show();

	// селекторы
	int get_first();
	int get_second();
	int get_third();

	// модификаторы
	void set_first(int);
	void set_second(int);
	void set_third(int);

	Triad& operator=(const Triad&);

	friend istream& operator>>(istream& in, Triad& t);
	friend ostream& operator<<(ostream& out, Triad& t);

protected:
	int first;
	int second;
	int third;
};
