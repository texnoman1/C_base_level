
/*
 Ввести целое число и определить, верно ли, что в его записи есть две
одинаковые цифры, стоящие рядом.
Данные на входе: Одно целое число
Данные на выходе: Единственное слов: YES или NO
Пример №1
Данные на входе: 1232
Данные на выходе: NO
Пример №2
Данные на входе: 1224
Данные на выходе: YES
 
 */

#include <stdio.h>
int main(void)
{
int x;
int temp;
int temp1;

	printf("Enter two numbers");
	scanf("%d", &x);
	while (x > 0)
	{
		temp = x % 10;
		temp1 = x / 10;
			if(temp1 == temp)
			{
				printf("Yes");
				return 0;
			}	
		x = x / 10;	
	}
	printf("No");		   
	return 0;
}		
