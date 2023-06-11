#include "Stack.h"
#include <iostream>
using namespace std;

int main() {
	srand(time(NULL));
	Stack a(10);
	cout << a;
	int num;
	cout << "Enter int number: ";
	cin >> num;
	a.popback();
	a.pushback(num);
	cout << a;
	return 0;
}