#include <iostream>
using namespace std;

/*
	�������� ������� ��� ���������� ����� ��������� ���������� �������,
	������� ����������� ���� ������� ���������. � �� ������� �����
	������������ �������� ����� ����� � n ��������.
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

	cout << "������� ����� ������: ";
	cin >> N;

	for (int k = 1; k <= N; k++) {		// ���� N ������
		cout << endl;
		cout << "������� ����� " << k << ":" << endl;
		s = 0;

		for (int i = 0; i < n; i++) {
			cout << "������� ������ " << i + 1 << " (" << n << " ���������) : " << endl;
			for (int j = 0; j < n; j++) {
				cin >> arr[i][j];
			}
		}

		cout << "��������� �������: " << endl;

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
	cout << "������������ �������� ����� ��������� ���� ������� ��������� � " << N << " ��������� �������� ����� " << maxim << " � ������� ����� " << maxn << "." << endl;
	
	return 0;
}