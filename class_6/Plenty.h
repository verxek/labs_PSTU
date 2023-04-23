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
	
	
	int& operator [](int index);
	Iterator first();
	Iterator last();
	bool operator!=(const Plenty& rhs);
	bool operator<(int num) const; 
	

};

