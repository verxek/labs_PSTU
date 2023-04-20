#pragma once
#include "Object.h"


class Vector
{
public:
	Vector(void);
	Vector(int);
	~Vector(void);
	void Add(Object*); // добавление элемента в вектор
	friend ostream& operator<<(ostream& out, const Vector&);
private:
	Object** beg; // указатель на первый элемент вектора
	int size; // размер
	int cur; // текущая позиция
};

