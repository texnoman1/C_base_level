/*
 Задача 2. НОД
Составить функцию, которая определяет наибольший общий делитель двух
натуральных и привести пример ее использования
https://younglinux.info/algorithm/euclidean
int nod(int a, int b)
Данные на входе: Два целых положительных числа
Данные на выходе: Одно целое число - наибольший общий делитель.
Пример №1
Данные на входе: 14 21
Данные на выходе: 7
 */

#include <stdio.h>
int nod(int n, int p)
{
	int res;
	int min;
	if (n < p)
		min = n;
	else
		min = p;
	for (int i = 1; i <= min; i++)
	{
		if (p % i == 0 && n % i == 0)
			res = i;
	}
	return res;
}
int main()
{
	int x, y;
	printf("Enter two digits > 0: ");
	scanf("%d %d", &x, &y);
	printf("%d", nod(x, y));
	return 0;
}
