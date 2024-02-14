/*
 Цифры в строке
Написать только одну функцию. Всю программу отправлять не надо. Вывести в
порядке возрастания цифры, входящие в строку. Цифра - количество. Функция
должно строго соответствовать прототипу:
void print_digit(char s[])
Данные на входе: Строка из английских букв, пробелов, знаков препинания и
цифр
Данные на выходе: Функция должна принмать на вход строку и выводить на печать
по формату: Цифра пробел количество.
Пример
Данные на входе: Hello123 world77.
Данные на выходе: 1 1 2 1 3 1 7 2
 */

#include <stdio.h>
void PrintDigist(int arr[], int len)
{
 for (int i = 0; i < len; i++)
 if (arr[i] > 0)
 printf("%d %d\n", i, arr[i]);
}
void count_digits(char n[], int* res)
{
 for (int i=0;n[i]!=0;i++)
 if(n[i]>='0' && n[i]<='9')
 res[n[i] - '0']++;
}
int Input(char arr[])
{
	int i=0;
	char inputSymbol=0;

	while(inputSymbol != '.')
	{
		scanf("%c", &inputSymbol);
		arr[i++] = inputSymbol;
	}
	arr[i++] = 0;
 return i;
}
int main()
{
enum {BUFFER_SIZE = 100};
char buffer[BUFFER_SIZE];
int r[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
// scanf("%s", buffer);
 Input(buffer);
 count_digits(buffer, r);
 PrintDigist(r,10);
 return 0;
}
