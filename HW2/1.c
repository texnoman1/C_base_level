/*
Задача 1. Сумма трех чисел
Ввести три числа, найти их сумму
Нужно напечатать сумму трех чисел
Данные на входе: Три целых числа через пробел
Данные на выходе: Строка вида %d+%d+%d=%d
Пример №1:
Данные на входе: 4 5 7
Данные на выходе: 4+5+7=16
Пример №2:
Данные на входе: 10 20 30
Данные на выходе: 10+20+30=60
*/

#include <stdio.h>
int main(void)
{
int x, y, z, sum;
printf("enter three numbers separated by a space :");
scanf("%d%d%d", &x, &y, &z);
sum = x + y + z;
printf(" %d + %d + %d = %d", x, y, z, sum);
return 0;
}
