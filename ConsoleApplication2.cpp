#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
	cout << "введите координаты точки" << endl;
	cin >> x >> y;
	if ((x > -1) && (x < 1) && (y > -1) && (y < 1))
	{
		cout << "точка принадлежит заштрихованной области (1;1)" << endl;
	}
	else cout << "точка не принадлежит заштрихованной области (1;1)" << endl;
	return 0;
}