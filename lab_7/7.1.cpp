#include <iostream>
using namespace std;

/*
	�������� ������������� ������� � �������� ���������, ������� �� ��������.
		�) ��� �������� ���������� ������;
		�) ��� �������� ������������ ������.
*/

double Sum(double a, double b)   // ��� ���������� ������
{
	return a + b;
}

double Sum(int a_chis, int a_znam, int b_chis, int b_znam)  // ��� ������������ ������
{
	return float(a_chis) / a_znam + float(b_chis) / b_znam;
}

int main2()
{
	cout << Sum(0.007, 0.13) << endl; // ����� 1-�� �������

	cout << Sum(10, 3, 12, 4) << endl;  // ����� 2-�� �������

	return 0;
}