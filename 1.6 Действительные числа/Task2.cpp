/*Дано положительное действительное число X. Выведите его первую цифру после десятичной точки.
Формат входных данных
Вводится положительное действительное число.
Формат выходных данных
Выведите ответ на задачу.*/

#include <iostream>
using namespace std;

int main()
{
    double d;
    cin >> d;
    cout << (int)(((d - ((int)d)) * 10)) << endl;
    return 0;
}
