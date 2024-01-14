
/*
Сумма цифр равна 10
Ввести натуральное число и определить, верно ли, что сумма его цифр равна 10.
Данные на входе: Натуральное число
Данные на выходе: YES или NO
Пример №1
Данные на входе: 1234
Данные на выходе: YES
Пример №2
Данные на входе: 1233
Данные на выходе: NO  
 */

#include <stdio.h>
int main(void)
{
int x;
int temp = 0;
int count = 0;

	printf("Enter  number");
	scanf("%d", &x);
	while (x > 0)
	{
		temp = x % 10;		
		count = count + temp;	
		x = x / 10;	
	}
	printf("%d \n", count);
	if (count == 10)
		printf("Yes");
	else
		printf("No");		
	return 0;
}		
