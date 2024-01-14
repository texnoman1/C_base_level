/*
 Задача 2. Наименьшее из пяти чисел
Ввести пять чисел и вывести наименьшее из них
Нужно напечатать наименьшее число
Данные на входе: Пять целых чисел разделенных пробелом
Данные на выходе: Одно целое число
Данные на входе: 4 15 9 5 4
Данные на выходе: 4
 */

 #include <stdio.h>
int main(void)
{
int x1, x2, x3, x4, x5, min;
	printf("Enter five numbers");
	scanf("%d%d%d%d%d", &x1, &x2, &x3, &x4, &x5);
	if (x1 > x2)
		min = x2;
	else
		min = x1;
	if(min > x3)
		min = x3;
	if(min > x4)
		min = x4;
	if(min > x5)	
		min = x5;
	printf("The min number is - %d\n", min);
return 0;		
}
