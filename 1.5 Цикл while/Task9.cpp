/*Последовательность состоит из натуральных чисел и завершается числом 0. Определите значение второго по величине элемента в этой последовательности, то есть элемента, который будет наибольшим, если из последовательности удалить наибольший элемент.

Формат входных данных
Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
Формат выходных данных
Выведите ответ на задачу.*/

#include <iostream>

using namespace std;

int main() {
    int n;
    int max = -1;
    int s_max = -1;

    while (cin >> n && n != 0) {
        if (max <= n) {
            s_max = max;
            max = n;
        }
        else if (s_max < n) {
            s_max = n;
        }
    }

    cout << s_max;

    return 0;
}
