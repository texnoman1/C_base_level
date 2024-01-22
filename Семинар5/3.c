/*
Цифры по возрастанию
Составить функцию логическую функцию, которая определяет, верно ли, что в
заданном числе все цифры стоят по возрастанию. Используя данную функцию решить
задачу.
int grow_up(int n)
Данные на входе: Одно целое неотрицательное число
Данные на выходе: YES или NO
Пример №1
Данные на входе: 258
Данные на выходе: YES
Пример №2
Данные на входе: 528
Данные на выходе: NO 

 */

#include <stdio.h>
int is_even_sum(int n)
{
	char res = 1;
int first = 0;
int second = 0;

 while( n > 0)
 {
 first = n % 10;
  second = (n / 10) % 10;
 if (first <= second)
 {
	 res = 0;
	 break;
 } 
 n /= 10;
}
 return res;
}
int main()
{
int n;
 scanf("%d", &n);
 is_even_sum(n) ? printf("YES") : printf("NO");
 return 0;
}
