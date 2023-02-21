#include <iostream>
using namespace std;

/*
	Написать функцию для вычисления суммы элементов квадратной матрицы,
	которые расположены ниже главной диагонали. С ее помощью найти
	максимальное значение такой суммы в n матрицах.
*/

int summ(int arr[5][5],int n)
{
	int s = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			s += arr[i][j];
		}
	}
	return s;
}
int main11()
{
	setlocale(0, "Rus");

	int N, n = 5, s = 0, maxim = -1000000000, maxn = 0;
	int arr[5][5];

	cout << "Введите число матриц: ";
	cin >> N;

	for (int k = 1; k <= N; k++) {		// ввод N матриц
		cout << endl;
		cout << "Матрица номер " << k << ":" << endl;
		s = 0;

		for (int i = 0; i < n; i++) {
			cout << "Введите строку " << i + 1 << " (" << n << " элементов) : " << endl;
			for (int j = 0; j < n; j++) {
				cin >> arr[i][j];
			}
		}

		cout << "Введенная матрица: " << endl;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << arr[i][j] << "\t";
			}
			cout << endl;
		}
		int S = summ(arr, 5);
		if (S > maxim) {
			maxim = S;
			maxn = k;
		}
	}
	cout << endl;
	cout << "Максимальное значение суммы элементов ниже главной диагонали в " << N << " введенных матрицах равно " << maxim << " в матрице номер " << maxn << "." << endl;
	
	return 0;
}