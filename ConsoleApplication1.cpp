#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y, z;
	cout << "введите длины сторон треугольника (0,100]: " << endl;
	cin >> x >> y >> z;
	// проверка на существование треугольника с заданными сторонами
	if ((x > 0) && (y > 0) && (z > 0) && (x + y > z) && (y + z > x) && (x + z > y))
	{
		cout << "треугольник существует" << endl;
		// проверяем если квадрат одной стороны меньше суммы квадратов двух других, то такой треугольник остроугольный
		if (fabs(x * x < y * y + z * z) && fabs(y * y < x * x + z * z) && (fabs(z * z < x * x + y * y)))
		{
			cout << "треугольник остроугольный" << endl;
		}
		else
		{
			cout << "треугольник не остроугольный" << endl;
		}
	}
	else cout << "треугольник не существует" << endl;
	return 0;
}