#include <iostream>
#include <time.h>

using namespace std;

/*
	Сформировать двумерный массив. Добавить в него столбец с заданным номером;
*/

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int m,n;

	std::cout << "Введите количество строк массива: "; cin >> m;
	std::cout << "Введите количество столбцов массива: "; cin >> n;

	int** arr;
	arr = new int* [m];
	int num;

	for (int i = 0; i < m; i++)
	{
		arr[i] = new int[n];
	}

	for (int i = 0; i < m; i++)  // заполнение массива случайными числами
	{
		for (int j = 0; j < n; j++) {
			num = rand() % 100;
			arr[i][j] = num;
		}
	}

	std::cout << "Ваш массив:" << endl;
	for (int i = 0; i < m; i++)   // вывод массива
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << endl;
	}

	std::cout << endl;

	int ns, a;
	std::cout << "Введите номер столбца, который нужно добавить: "; cin >> ns;
	std::cout << "Введите элементы столбца (" << m << "): " << endl;
	
	int** arr2;        // объявление второго массива
	arr2 = new int*[m];
	for (int i = 0; i < m; i++)
	{
		arr2[i] = new int[n + 1];
	}
	
	for (int i = 0; i < m; i++) {     // формирование нового массива
		for (int j = 0; j < (ns-1); j++) {
			arr2[i][j] = arr[i][j];
		}
		cin >> a;
		arr2[i][ns-1] = a;
		for (int j = ns; j < (n + 1); j++)
		{
			arr2[i][j] = arr[i][j-1];
		}
	}
	

	std::cout << "Новый массив: " << endl;
	for (int i = 0; i < m; i++)   // вывод массива
	{
		for (int j = 0; j <(n+1); j++)
		{
			std::cout << arr2[i][j] << "\t";
		}
		std::cout << endl;
	}

	delete[] arr;   // очищение памяти
	delete[] arr2;

	return 0;
}
