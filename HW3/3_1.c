/*
 Задача 1. Наибольшее из пяти чисел
Ввести пять чисел и вывести наибольшее из них
Нужно напечатать наибольшее число
Данные на входе: Пять целых чисел разделенных пробелом
Данные на выходе: Одно целое число
Данные на входе: 4 15 9 56 4
Данные на выходе: 56
 */
 
 #include <stdio.h>
int main(void)
{
	int x1, x2, x3, x4, x5, max;
	printf("Enter five nimbers");
	scanf("%d%d%d%d%d", &x1, &x2, &x3, &x4, &x5);
	if (x1 > x2)
		max = x1;
	else
		max = x2;
	if(max < x3)
		max = x3;
	if(max < x4)
		max = x4;
	if(max < x5)	
		max = x5;
	printf("The max number is - %d\n", max);
return 0;		
}
