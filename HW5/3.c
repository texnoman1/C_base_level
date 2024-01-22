/*
 Задача 3. Сумма цифр равна произведению
Составить логическую функцию, которая определяет, верно ли, что в заданном
числе сумма цифр равна произведению.
int is_happy_number(int n)
Данные на входе: Целое не отрицательное число
Данные на выходе: YES или NO
Пример №1
Данные на входе: 123
Данные на выходе: YES
Пример №2
Данные на входе: 528
Данные на выходе: NO
 */

#include <stdio.h>
int is_happy_number(int n)
{
	int sum = 0;
	int prod = 1;
	while (n > 0)
	{
		sum += n % 10;
		prod *= n % 10;
		n /= 10;
	}

	if (sum == prod)
		return 1;
	else
		return 0;
}

int main()
{
	int x;
	printf("Enter the number");
	scanf("%d", &x);
	is_happy_number(x) ? printf("YES") : printf("NO");
	return 0;
}
