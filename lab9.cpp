#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>

using namespace std;
	
/*
	������� ��������� ���� F1 �� �����, ��� �� 10 ����� � �������� � ���� ����������
	����������� �� ����� F1 � ���� F2 ��� ������, ������� �������� ������ ���� �����.
	����� ����� ������� ����� �  ����� F2.
*/

int space_cnt(string s)
{
	int cnt = 0;
	int n = s.size();
	for (int i = 0; i < n; i++)
	{
		if (s[i] == ' ')
		{
			cnt++;
		}
	}
	return cnt;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	string s;
	fstream f1;
	

	f1.open("f1.txt", fstream::out | fstream::in | fstream::trunc);
	

	string arr[100];
	int k = 0, max_len = 0;
	string max_word; 

	if (!f1.is_open())
	{
		std::cout << "������ �������� �����!";
	}
	else
	{
		
		std::cout << "������� ���������� �����: "; cin >> n;
		getline(cin, s);
		for (int i = 0; i < n; i++)
		{
			getline(cin,s);
			if (space_cnt(s) == 0)
			{	
				arr[k] = s;
				if (s.size() > max_len)
				{
					max_len = s.size();
					max_word = s;
				}
				k++;
			}
			f1 << s;
			f1 << endl;
		}
		
	}
	f1.close();

	fstream f2;
	f2.open("f2.txt", fstream::out | fstream::in | fstream::trunc);
	if (f2.is_open())
	{
		for (int i = 0; i < k; i++)
		{
			f2 << arr[i] << endl;
		}
	}
	else
	{
		std::cout << "������ �������� �����!";
	}
	
	std::cout << "����� ������� ����� - " << max_word << ".";
	
	f2.close();
	return 0;
}