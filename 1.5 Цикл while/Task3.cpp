/*По данному числу N распечатайте все целые степени двойки, не превосходящие N, в порядке возрастания.

Формат входных данных
Вводится натуральное число.

Формат выходных данных
Выведите ответ на задачу.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int t = 1;
    while (t <= n) {
        cout << t << ' ';
        t *= 2;
    }
    return 0;
}
*/
