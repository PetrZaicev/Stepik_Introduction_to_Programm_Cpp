/*Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада в конце года. Вклад составляет X рублей Y копеек.
Определите размер вклада через год.

При решении этой задачи нельзя пользоваться условными инструкциями и циклами.

Формат входных данных
Программа получает на вход целые числа P, X, Y.
Формат выходных данных
Программа должна вывести два числа: величину вклада через год в рублях и копейках. Дробная часть копеек отбрасывается.*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int p, x, y;

    cin >> p >> x >> y;

    // Option 1
    double rate = p / 100.0;

    double coins = x * 100 + y;

    int k_dep = coins + coins * rate;

    cout << k_dep / 100 << ' ' << k_dep % 100;

    return 0;
}
