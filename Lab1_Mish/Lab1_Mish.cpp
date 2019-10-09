#include <iostream>
#include <locale.h>

double Input(double& value);

using namespace std;
int main()
{
	setlocale(LC_ALL,"RUS");
	cout << "Вариант 9. ИКБО-02-18. Балахин Михаил\n";
	double x, y, squerSide, tringleSide;

	cout << "Введите координаты точки Х и Y\n";
	Input(x);
	Input(y);
	cout << "Координаты точки X: " << x << " Y: " << y << endl;

	cout << "Введите сторону квадрата и равнобедренного прямоугольного треугольника\n";
	Input(squerSide);
	Input(tringleSide);
	cout << "Сторона квадрата "<< squerSide << " Сторона треугольника: " << tringleSide <<endl;

	if (x < 0 && x > squerSide && y < squerSide || x > 0 && x + y < tringleSide * 2) 
		cout << "Точка попадает в область\n";
	else
		cout << "Точка не попадает в область\n";
}

double Input(double& value)
{
	char fail;
	cin >> value;
	while (cin.fail())
	{
		cout << "Данные некорректны\n";
		cin.clear();
		cin >> fail;
		cin >> value;
	}
	return value;
}
