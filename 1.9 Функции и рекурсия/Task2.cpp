/* Даны четыре действительных числа: x1, y1, x2, y2. Напишите функцию distance(x1, y1, x2, y2),
вычисляющую расстояние между точкой (x1. y1) и (x2, y2). Считайте четыре действительных числа и выведите результат работы этой функции.

Формат входных данных
Вводятся четыре действительных числа.
Формат выходных данных
Выведите ответ на задачу. */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
double distance(double x1, double y1, double x2, double y2) {
    double a = abs(x1 - x2);
    double b = abs(y1 - y2);
    return sqrt(a*a + b*b);
}

int main() {
    double  x1, y1,  x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << fixed << setprecision(5);
    cout << distance(x1, y1, x2, y2);
    return 0;
}
