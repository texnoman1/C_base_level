/*
 Задача 2. От A до B
Составить рекурсивную функцию. Выведите все числа от A до B
включительно, в порядке возрастания, если A < B, или в порядке убывания в
противном случае.
Данные на входе: Два целых числа через пробел.
Данные на выходе: Последовательность целых чисел.
Пример №1
Данные на входе: 5 2
Данные на выходе: 5 4 3 2
Пример №2
Данные на входе: 2 7
Данные на выходе: 2 3 4 5 6 7
 */

#include <stdio.h>
void Rec(int a, int b) 
{
	
	if(a > b)
	{
		printf("%d ", a);
		if (a > b)
			Rec (a - 1, b);	
	}
	else
		{
		if (b > a)
			Rec (a , b -1);
		printf("%d ", b);
	}

}
int main(void)
{
	int a1, b1;
	printf("Enter two numbers: ");
	scanf("%d%d", &a1, &b1);
	Rec(a1, b1);
return 0;
}