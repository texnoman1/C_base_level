/*
Демонстрация. Квадраты чисел
Ввести два целых числа a и b (a ≤ b) и вывести квадраты всех чисел от a до b.
Данные на входе: Два целых числа по модулю не больше 100
Данные на входе: Квадраты чисел от a до b
*/

 #include <stdio.h>
int main(void)
{
int x1, x2;

	printf("Enter two numbers");
	scanf("%d%d", &x1, &x2);
	for (int i = x1; i <= x2; i++)
		printf("%d", i*i);
	return 0;
}		
