/*Покупка пирожков


Пирожок в столовой стоит A рублей и B копеек. Определите, сколько рублей и копеек нужно заплатить за N пирожков.



Формат входных данных

Программа получает на вход три числа: A, B, N - целые, положительные, не превышают 10000.

Формат выходных данных

Программа должна вывести два числа через пробел: стоимость покупки в рублях и копейках.*/

#include <iostream>
using namespace std;

int main()
{
	int A, B, N,rub,cop,sum;
	cin >> A >> B >> N;
	cop = (B * N)%100;
	rub = (A*N)+ (B * N) / 100;
	cout <<rub<<" " << cop<< endl;
	return 0;
}
