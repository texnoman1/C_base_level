/*
 
Факториал
Составить функцию вычисления N!. Использовать ее при вычислении
факториала.
int factorial(int n)
Данные на входе: Целое положительное число не больше 20
Данные на выходе: Целое положительное число
Пример №1
Данные на входе: 5
Данные на выходе: 120 
 */

#include <stdio.h>
int power(int n)
{
int res = 1 ;

 for (int i =1; i <= n; i++)
 
 res = res * i
 
 return res;
}
int main()
{
int x;
 scanf("%d", &x);
 printf("%d", power(x));
 return 0;
}
