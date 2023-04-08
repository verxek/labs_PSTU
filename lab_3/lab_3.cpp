#include <iostream>
#include <math.h>
using namespace std;

double func(int n, double x) {
	double a;
	if (n == 0) {
		return x; // ������ ���� ����
	}
	a = (pow(x, 4 * n + 1) / (4 * n + 1)); // n-�� ���� ����
	return (a + func(n - 1, x)); // ����������� ����� �������� ����������� ����� ����
}

int main() {
	setlocale(0, "Rus");
	double x;
	int n;
	cout << "������� n � �: " << endl;
	cin >> n >> x;
	
	

	cout << "��� ��������� n = " << n << " � � = " << x <<" ����� ���� �����: ";
	cout << func(n, x); 
	
	cout << endl;
	cout << "������ �������� ������� ��� ���������: ";   
	cout << ((1.0 / 4) * log((1 + x) / (1 - x)) + (1.0 / 2) * atan(x)) << endl;
	 
	return 0;
}