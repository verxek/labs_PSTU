#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>

using namespace std;
	
/*
	Создать текстовый файл F1 не менее, чем из 10 строк и записать в него информацию
	Скопировать из файла F1 в файл F2 все строки, которые содержат только одно слово.
	Найти самое длинное слово в  файле F2.
*/

int space_cnt(string s)
{
	int cnt = 0;
	int n = s.size();
	for (int i = 0; i < n-1; i++)
	{
		if (s[i] == ' ' && s[i+1] != 32)
		{
			cnt++;
		}
	}
	return cnt;
}

int main6()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	string s;
	fstream f1;
	

	f1.open("f1.txt", fstream::out | fstream::in | fstream::trunc); // открытие файла f1 
	

	string arr[100];  // массив строк, в который мы будем записывать строки для записи в файл
	int k = 0, max_len = 0;
	string max_word; 

	if (!f1.is_open())
	{
		std::cout << "Ошибка открытия файла!";
	}
	else
	{
		
		std::cout << "Введите количество строк: "; cin >> n;
		getline(cin, s);
		for (int i = 0; i < n; i++) // ввод строк
		{
			getline(cin,s);
			if (space_cnt(s) == 0)  // если в строке содержится одно слово
			{	
				arr[k] = s;   // добавляем в массив
				if (s.size() > max_len)   // сравниваем с длиной самого длинного слова
				{
					max_len = s.size();
					max_word = s;
				}
				k++;
			}
			f1 << s;   // записываем строку в файл f1, в который записываются все строки
			f1 << endl;
		}
		
	}
	f1.close();

	fstream f2;
	f2.open("f2.txt", fstream::out | fstream::in | fstream::trunc);   // открытие файла f2
	if (f2.is_open())
	{
		for (int i = 0; i < k; i++)
		{
			f2 << arr[i] << endl;  // записываем в f2 все строки, в которых содержится одно слово
		}
	}
	else
	{
		std::cout << "Ошибка открытия файла!";
	}
	
	std::cout << "Самое длинное слово - " << max_word << ".";    // вывод самого длинного слова
	
	f2.close();
	return 0;
}