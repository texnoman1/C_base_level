/*
 
 
 */

#include <stdio.h>
int power(int n)
{
int res = 1 ;

 for (int i =1; i <= n; i++)
 
 res = res * i
 
 return res;
}
int main()
{
int x;
 scanf("%d", &x);
 printf("%d", power(x));
 return 0;
}
