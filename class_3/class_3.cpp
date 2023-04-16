#include <iostream>
#include "money.h"
using namespace std;

int main()
{
	setlocale(0, "Rus");
	
	money m1(100, 10);
	money m2(20,12);
	cout << m1 - m2 << endl;

	money m3(90, 80);
	money m4(30, 40);
	money m5(70, 60);
	money m6(70, 60);

	m1 != m2; 
	m3 == m4;

	return 0;

}