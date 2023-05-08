#include "Plenty.h"
#include "Iterator.h"
#include "Error.h"
#include <ctime>
#include <iostream>
using namespace std;

// �����������
Plenty::Plenty(int size)
{
	if (size > MAX_SIZE) throw MaxSizeError();  // ���� ������ ������ �������������, �� ������������ ����������
	if (size <= 0) throw NegativeSizeError(); // ������ ������ ���� ������ 0
	this->size = size;
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 100 + 1;
	}
	beg.elem = &array[0];
	end.elem = &array[size];
}

// ����������� �����������
Plenty::Plenty(const Plenty& p)
{
	if (p.size > MAX_SIZE) throw MaxSizeError(); // ���� ������ ������ �������������, �� ������������ ����������
	size = p.size;
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = p.array[i];
	}
	beg.elem = &array[0];
	end.elem = &array[size];
}
// ����������
Plenty::~Plenty() { delete[] array; size = 0; }

// �������� ������������
const Plenty& Plenty::operator=(const Plenty& p)
{
	if (this == &p) return *this;
	delete[] array;
	size = p.size;
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = p.array[i];
	}
	return *this;
}
void Plenty::show()
{

	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}
// �������� �������� �� �����������
bool Plenty::operator!=(const Plenty& rhs) {
	bool f = false;
	int i = 0;
	while (!f) {
		if (array[i] != rhs.array[i]) f = true;
		i++;
	}
	return f;
}
// �������� ������� �� �������
int& Plenty::operator [](int index)
{
	if (index < 0) throw NegativeIndex(); // ���� ������ �������������, �� ������������ ����������
	if (index > size) throw TooBigIndexError(); // ���� ������� ������ ������� ���������, �� ������������ ����������

	if (index >= 0 && index < size)
	{
		return array[index];
	}
	else
	{
		cout << endl << "Error" << endl;
	}
}
bool Plenty::operator<(int num) const
{
	for (int i = 0; i < size; i++) {
		if (array[i] == num) {
			return true;
		}
	}
	return false;
}
Iterator Plenty::first() { return beg; }
Iterator Plenty::last() { return end; }
