/* Циклически сдвиньте элементы списка вправо (A[0] переходит на место A[1], A[1] на место A[2], ..., последний элемент переходит на место A[0]).
Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу. */

#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    temp = a[n - 1];
    for (int i = n - 1; i > 0; i--){
        a[i] = a[i - 1];
    }
    a[0] = temp;
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    return 0;
}
