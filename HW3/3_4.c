/*
 Задача 4. Какое время года
Ввести номер месяца и вывести название времени года.
Данные на входе: Целое число от 1 до 12 - номер месяца.
Данные на выходе: Время года на английском: winter, spring, summer, autumn
Пример №1
Данные на входе: 4
Данные на выходе: spring
Пример №2
Данные на входе: 1
Данные на выходе: winter
 */

 #include <stdio.h>
int main(void)
{
int month;
	printf("Enter  the number of the year ");
	scanf("%d", &month);
	if (month == 1 || month == 2 || month == 12)
		{printf("winter") ;                     // если не ставить {} не компилируется
		return 0;}		 		
	if (month == 3  || month == 4 || month == 5)
		{printf("spring") ;  
		return 0;}
	if (month == 6 || month == 7 || month == 8)
		{printf("summer") ;  
		return 0;}
	if (month == 9 || month == 10 || month == 11)
		{printf("autumn") ;  
		return 0;}		
return 0;		
}
