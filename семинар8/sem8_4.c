/*
Пропущенное число
В последовательности записаны целые числа от M до N ( M меньше N, M больше или равно 1)в
произвольном порядке, но одно из чисел пропущено (остальные встречаются ровно по одному
разу). N не превосходит 1000. Последовательность заканчивается числом 0. Определить
пропущенное число.
Данные на входе: Последовательность целых чисел от M до N. M, N не превосходит 1000.
Данные на выходе: Одно целое число
Пример №1
Данные на входе: 2 3 1 4 7 6 9 8 10 0
Данные на выходе: 5
Пример №2
Данные на входе: 41 40 39 38 37 36 34 33 32 31 50 49 48 47 46 45 44 43 42 30 0
Данные на выходе: 35 

 */

#include <stdio.h>
const int max_input = 1000;
int Input(int len,int arr[])
{
	int input;
	int count = 0;
	while (count<len)
	{
		scanf("%d", &input);
		if (input == 0)
			return count;
		arr[count++] = input;
	}
 return count;
}
void bubble_sort(int* arr, int size)
{
int buf;
	for (int i = 0; i < size - 1; i++)
	for (int j = i + 1; j < size; j++)
	if (arr[i] > arr[j])
 {
	buf = arr[i];
	arr[i] = arr[j];
	arr[j] = buf;
 }
}
void PrintMiss(int len,int* in)
{
	for (int i = 1; i < len; i++)
		if (in[i] != in[i - 1] + 1)
		{
			printf("%d", in[i - 1] + 1);
			return;
 }
}
int main()
{
	int arr[max_input];
	int count = Input(max_input,arr);
	bubble_sort(arr, count);
	PrintMiss(count,arr);
 return 0;
}
