#include <iostream>
#include <fraction.h>
using namespace std;

// функция для создания структуры points
points make_points(double x1,double y1,double x2, double y2)
{
	points t;
	t.Init();
	return t;
}

int main()
{
	setlocale(0, "Rus");
	points p1;
	points p2;



	// инициализация полей структуры p1
	p1.Read();   
	// вывод полей структуры p1
	
	p1.Show();    
	// вывод расстояния между точками 
	p1.Distance();

	
	
	double x1, y1, x2, y2;

	cout << "Введите координаты: " << endl;
	cout << "x1 = ";  cin >> x1;
	cout << "y1 = "; cin >> y1;
	cout << "x2 = "; cin >> x2;
	cout << "y2 = "; cin >> y2;
	// инициализация структуры 
	p2 = make_points(x1, y1, x2, y2);
	p2.Show();

	return 0;
}

