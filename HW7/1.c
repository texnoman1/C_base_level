/*
 Задача 1. Среднее арифметическое чисел
Ввести с клавиатуры массив из 5 элементов, найти среднее арифметическое
всех элементов массива.
Данные на входе: 5 целых ненулевых чисел через пробел
Данные на выходе: Одно число в формате "%.3f"
Пример №1
Данные на входе: 4 15 3 10 14
Данные на выходе: 9.200
Пример №2
Данные на входе: 1 2 3 4 5
Данные на выходе: 3.000 
 */

#include <stdio.h>
int main()
{
	int i, sum = 0;
	int arr[5]; 
 
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];	
	}

 printf("%f\n", sum / 5.0 );
 return 0;
}
