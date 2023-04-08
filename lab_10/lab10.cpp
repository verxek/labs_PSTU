#include <iostream>
#include <time.h>

using namespace std;

/*
	������������ ��������� ������. �������� � ���� ������� � �������� �������;
*/

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int m,n;

	std::cout << "������� ���������� ����� �������: "; cin >> m;
	std::cout << "������� ���������� �������� �������: "; cin >> n;

	int** arr;
	arr = new int* [m];
	int num;

	for (int i = 0; i < m; i++)
	{
		arr[i] = new int[n];
	}

	for (int i = 0; i < m; i++)  // ���������� ������� ���������� �������
	{
		for (int j = 0; j < n; j++) {
			num = rand() % 100;
			arr[i][j] = num;
		}
	}

	std::cout << "��� ������:" << endl;
	for (int i = 0; i < m; i++)   // ����� �������
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << endl;
	}

	std::cout << endl;

	int ns, a;
	std::cout << "������� ����� �������, ������� ����� ��������: "; cin >> ns;
	std::cout << "������� �������� ������� (" << m << "): " << endl;
	
	int** arr2;        // ���������� ������� �������
	arr2 = new int*[m];
	for (int i = 0; i < m; i++)
	{
		arr2[i] = new int[n + 1];
	}
	
	for (int i = 0; i < m; i++) {     // ������������ ������ �������
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
	

	std::cout << "����� ������: " << endl;
	for (int i = 0; i < m; i++)   // ����� �������
	{
		for (int j = 0; j <(n+1); j++)
		{
			std::cout << arr2[i][j] << "\t";
		}
		std::cout << endl;
	}

	delete[] arr;   // �������� ������
	delete[] arr2;

	return 0;
}
