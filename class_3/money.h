#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

class money
{
private:

	long ruble;
	int kop;

public:

	money(); // ����������� �� ���������
	
	money(long valueR, int valueK);// ����������� � �����������
	
	money(const money& t);  // ����������� �����������

	~money();	// ����������
		
	long get_ruble() { return ruble; }
	int get_kop() { return kop; }
	void set_ruble(long r) { ruble = r; }
	void set_kop(int k) { kop = k; }

	// ������������� ��������
	void operator==(const money& m);
	
	void operator!=(const money& m);
	
	money& operator-(const money& m);
	

	money& operator=(const money& t);
	// ���������� ������� �����-������
	friend istream& operator>>(istream& in, money& t);
	friend ostream& operator<<(ostream& out, const money& t);
};
