/* Дан прямоугольный массив размером n×m. Поверните его на 90 градусов по часовой стрелке, записав результат в новый массив размером m×n.

Формат входных данных
Вводятся два числа n и m, не превосходящие 100, затем массив размером n×m.
Формат выходных данных
Выведите получившийся массив. Числа при выводе разделяйте одним пробелом. */

#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int a[n][m], b[m][n];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
		{
			cin >> a[i][j];
			b[j][n-1-i] = a[i][j];
		}
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
			cout << b[i][j] << ' ';
		cout << endl;
	}
	return 0;
}
