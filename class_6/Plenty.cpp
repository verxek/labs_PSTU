#include "Plenty.h"
#include "Iterator.h"
#include <ctime>
#include <iostream>
using namespace std;

// конструктор
Plenty::Plenty(int size)
{
	this->size = size;
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 100 + 1;
	}
	beg.elem = &array[0];
	end.elem = &array[size];
}
// деструктор
Plenty::~Plenty() {}

// определение размера вектора
int& Plenty::operator () () { return size; }

// разность множеств
Plenty Plenty::operator-(const Plenty& other)
{
	Plenty tmp(size);  // вспомогательное множество
	int* temp = new int[size];
	for (int i = 0; i < size; i++)
	{
		temp[i] = array[i] - other.array[i];
	}
	for (int i = 0; i < size; i++)
	{
		tmp.array[i] = temp[i];
	}
	tmp.beg.elem = &(tmp.array[0]);
	tmp.end.elem = &(tmp.array[size]);
	delete[] temp;
	delete[] array;
	return tmp;
}
// операция доступа по индексу
int& Plenty::operator [](int index)
{
	if (index >= 0 && index < size)
	{
		return array[index];
	}
	else
	{
		cout << endl << "Error" << endl;
	}
}
Iterator Plenty::first() { return beg; }
Iterator Plenty::last() { return end; }


