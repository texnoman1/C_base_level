/*
Задача 1. Сумма квадратов маленьких чисел
Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех чисел от a
до b.
Данные на входе: Два целых числа по модулю не больше 100
Данные на выходе: Сумма квадратов от первого введенного числа до
второго
Пример №1
Данные на входе: 4 10
Данные на выходе: 371
Пример №2
Данные на входе: 1 5
Данные на выходе: 55 
 */

#include <stdio.h>
int main(void)
{
	int a, b, i, sum;
	printf("Enter two numbers a and b (a <= b)");
	scanf("%d%d", &a, &b);
	if (a > b || a < -100 || b < -100 || a > 100 || b > 100)
	{
		printf("Wrong number");
		return 0;
	}
	if (a == b)
	{
		printf("No digits between a and b");
		return 0;
	}
	for (i = a; i <= b; i++)
	{
		sum += i * i;
	}
	printf("%d ", sum);
	return 0;
}
