/*
Найти произведение цифр
На вход подается произвольное трехзначное число.
Нужно напечатать произведение цифр.
Данные на входе: Трехзначное целое положительное число
Данные на выходе: Одно целое число
Пример №1:
Данные на входе: 435
Данные на выходе: 60
Пример №2:
Данные на входе: 102
Данные на выходе: 0
*/

#include <stdio.h>
int main(void)
{
int x;
scanf("%d", &x);
printf("%d", (x / 100) * ((x % 100) / 10) * (x % 10));
return 0;
}
