/*
Задача 1. В прямом порядке
Дано натуральное число N. Выведите все его цифры по одной, в прямом
порядке, разделяя их пробелами или новыми строками. Необходимо
реализовать рекурсивную функцию.
void print_num(int num)
Данные на входе: Одно целое неотрицательное число
Данные на выходе: Все цифры числа через пробел в прямом порядке.
Пример №1
Данные на входе: 15
Данные на выходе: 1 5
Пример №2
Данные на входе: 54321
Данные на выходе: 5 4 3 2 1 
 */

#include <stdio.h>
void Rec(int n) 
{
	
	if(n >= 10)
	{
		Rec(n / 10);
	}
	printf("%d ",n % 10);
//printf("%d \n",n);
}
int main(void)
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	Rec(n);
return 0;
}
