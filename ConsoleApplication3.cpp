#include <iostream>
#include <math.h>

using namespace std;

bool inArea(double x, double y) { // функция проверяет попадает ли точка в область по заданным координатам 
    bool inside = (x * x + y * y <= 1) && (y >= 0);
    bool outside = ((x - 0.3) * (x - 0.3) + y * y >= 0.3 * 0.3);

    return inside && outside; // возвращает true если inside и outside выполняются оба
}

double calcU(double x, double y) { // функция U, считающая итоговый результат по условию задачи 
    if (inArea(x, y)) { // если функция inArea вернула true, то считаем Х с квадратом разности Х и 1
        return x * x - 1;  // U = x^2 - 1 если точка внутри области
    }
    else { // иначе если функция inArea вернула false, то считаем с корнем и модулем разности Х и 1
        return sqrt(fabs(x - 1)); // U = sqrt(|x - 1|) если точка вне области
    }
}

int main() {
    setlocale(LC_ALL, "Russian"); // локализация
    double x, y;
    cout << "Введите координаты точек x и y: ";
    cin >> x >> y;

    cout << "Результат функции U: " << calcU(x, y) << endl; // вызывается функция calcU, производящая все вычисления

    return 0;
}