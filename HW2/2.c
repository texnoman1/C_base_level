/*
 Задача 2. Сумма и произведение трех чисел
Ввести три числа, найти их сумму и произведение
Нужно напечатать сумму и произведение трех чисел
Данные на входе: Три целых числа через пробел
Данные на выходе: %d+%d+%d=%d
%d*%d*%d=%d
Пример №1:
Данные на входе: 1 2 3
Данные на выходе: 1+2+3=6
1*2*3=6
Пример №2:
Данные на входе: 4 5 7
Данные на выходе: 4+5+7=16
4*5*7=140
 */

#include <stdio.h>
int main(void)
{
int x, y, z, sum, mult;
printf("enter three numbers separated by a space :");
scanf("%d%d%d", &x, &y, &z);
sum = x + y + z;
mult = x * y * z;
printf(" %d + %d + %d = %d", x, y, z, sum);
printf("\n %d * %d * %d = %d", x, y, z, mult);
return 0;
}
