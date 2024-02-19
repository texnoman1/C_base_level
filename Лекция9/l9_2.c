// запись в файл

#include <stdio.h>
#include <conio.h>

void writeIntoFile(char name [])
{
	int a;
     int b;
     int c;
     FILE *fout;
     fout = fopen(name, "w");
     printf ("enter num1 \n");
     scanf("%d", &a);
     printf ("enter num2 \n");
     scanf("%d", &b);
     c=a+b;
     fprintf(fout,"%d %d %d",a,b,c);
     fclose(fout);
}

void WreadFromFile(char name [])
{
	FILE *f;  //В языке C дескриптор открытого в программе файла - указатель на FILE. Именно такими указателями являются stdin, stdout, stderr.
	int  n = 0;
	f = fopen(name, "r"); // открываем  in.txt на чтение
	while (fscanf (f, "%d", &n) == 1)
		printf ("%d\n", n);
	fclose (f);
	
}

void WreadFromFile1(char name [])
{
	enum {BUFFER_SIZE = 1000};
	char buffer[BUFFER_SIZE];
	FILE *f;  //В языке C дескриптор открытого в программе файла - указатель на FILE. Именно такими указателями являются stdin, stdout, stderr.
	int  n = 0;
	int i = 0;
	int r [10] = {0};
	f = fopen(name, "r"); // открываем  in.txt на чтение
	while (fscanf (f, "%d", &n) == 1)
	{
		buffer[i] = n;
		i ++;
	}
	fclose (f);
	for (int j; j < r; j++  )
	{
		printf("%c", buffer[j]);
	}
	
}
int main()
{
//{    int a;
     //int b;
     //int c;
     //FILE *fout;
     //fout = fopen("C:out.txt", "w");
     //printf ("введите первое число \n");
     //scanf("%d", &a);
     //printf ("введите второе число \n");
     //scanf("%d", &b);
     //c=a+b;
     //fprintf(fout,"%d %d %d",a,b,c);
     ////getch();
     //char a [] = "out.txt"
     writeIntoFile("out.txt");
     WreadFromFile("out.txt");
     WreadFromFile1("out.txt");
    //// FILE *file = fopen("out.txt", "r");
 
	//fgets(line, 255, file);
	//printf("%s", line);
     //fclose(fout);
     return 0;
}

// Создание/открытие файла "examples.txt"
// Можно было использовать метод fopen
//int main()
//{
//FILE *file = fopen("examples.txt", "w");
//// Помещение данных
//fprintf(file, "Hello George");
//// Закрываем файл
//fclose(file);
//return 0;
//}
