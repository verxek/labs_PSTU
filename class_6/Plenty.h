#pragma once
#include "Iterator.h"
class Plenty
{
private:
	int size;
	int* array;
	Iterator beg;
	Iterator end;
public:
	Plenty(int size);
	~Plenty();
	
	int& operator () ();
	Plenty operator - (const Plenty& other);
	int& operator [](int index);
	Iterator first();
	Iterator last();

};

