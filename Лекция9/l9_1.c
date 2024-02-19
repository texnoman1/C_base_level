
/*
 1. Дан текстовый файл in.txt, содержащий целые числа. Посчитать сумму чисел
 */

#include <stdio.h>
#include <conio.h>
int main(void)
{
	FILE *f;  //В языке C дескриптор открытого в программе файла - указатель на FILE. Именно такими указателями являются stdin, stdout, stderr.
	int sum = 0, n;
	f = fopen("in.txt", "r"); // открываем  in.txt на чтение
	while (fscanf (f, "%d", &n) == 1)
		sum += n;
	fclose (f);
	printf ("%d\n", sum);

return 0;
}
