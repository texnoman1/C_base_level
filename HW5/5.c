/*
 Задача 5*. Скобки
Проверить строку состоящую из скобок "(" и ")" на корректность.
Данные на входе: На вход подается строка состоящая из символов '(', ')'
и заканчивающаяся символом '.'. Размер строки не более 1000 символов.
Данные на выходе: Необходимо напечатать слово YES если скобки
расставлены верно и NO в противном случае.
Пример №1
Данные на входе: (()()).
Данные на выходе: YES
Пример №2
Данные на входе: ()(.
Данные на выходе: NO 
 */

#include <stdio.h> // упрощенная проверка, вариант )( не пройдет
int main()
{
	char c;
	int a = 0;
	int b = b;

	while( (c = getchar()) != '.')
	{
		if(c == ')')
			a += 1;
		else
			b +=1;	
//putchar(c);
	}
	if (a == b)
		printf("YES");
	else
		printf("NO");	
return 0;
}