/*
 Задача 3. В порядке возрастания
Ввести три числа и определить, верно ли, что они вводились в порядке
возрастания.
Данные на входе: Три целых числа
Данные на выходе: Одно слово YES или NO
Пример
Данные на входе: 4 5 6
Данные на выходе: YES
 */

 #include <stdio.h>
int main(void)
{
int x1, x2, x3;

	printf("Enter three numbers");
	scanf("%d%d%d", &x1, &x2, &x3);
	if (x1 > x2)
		{printf("NO") ;  // если не ставить {} не компилируется
		return 0;}		 		
	if(x2 > x3)
		{printf("NO") ;
		return 0;}
		 		
	printf("YES\n");
return 0;		
}