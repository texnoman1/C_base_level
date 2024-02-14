/*
 Сумма минимальна
Дан целочисленный массив из 30 элементов. Элементы массива могут
принимать произвольные целые значения помещающиеся в int. Необходимо
создать функцию, которая находит и выводит в порядке возрастания номера
двух элементов массива, сумма которых минимальна.
Данные на входе: Последовательность из 30 целых чисел через пробел
Данные на выходе: Два целых числа через пробел
Пример
Данные на входе: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24
25 26 27 28 29 30
Данные на выходе: 0 1
 */

#include <stdio.h>
#include <limits.h>
int Input(int arr[], int n)
{
int i;
 for(i=0;i<n;i++)
 scanf("%d",&arr[i]);
 return i;
}
void Print2Min(int min[])
{
 if(min[0]<min[1])
 printf("%d %d", min[0],min[1]);
 else
 printf("%d %d", min[1],min[0]);
 printf("\n");
}
void minSum(int size, int arr[], int
min[])
{
int sum = arr[0]+arr[1];
 min[0] = 0;
 min[1] = 1;
 for (int i=0;i<size;i++)
 {
 for (int j=i+1;j<size;j++)
 {
 if(arr[i]+arr[j] < sum)
 {
 sum = arr[i] + arr[j];
 min[0]=i;//n1=i;
 min[1]=j;//n2=j;
 }
 }
 }
}
int main(void)
{
enum {BUFFER_SIZE = 30 };
int buffer[BUFFER_SIZE];
int min[2];
 Input(buffer,BUFFER_SIZE);
 minSum(BUFFER_SIZE,buffer,min);
 Print2Min(min);
 return 0;
}
