#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#include <limits.h>

int main(void) {

//size_t = sizeof


printf("+---------------------------------------------------------------------+\n");
printf("|   Type        | Byte(s)  |                  |                       |\n");
printf("|               \\of memory/                Min|                    Max|\n");
printf("|                 \\     /                     |                       |\n"); 
printf("+------------------+-+------------------------+-----------------------+\n");
printf("|%18s|%d|%24d|%23d|\n","char",sizeof(char),CHAR_MIN,CHAR_MAX);
printf("|%18s|%d|%24d|%23d|\n","unsigned char",sizeof(unsigned char),0,UCHAR_MAX); 
printf("|%18s|%d|%24d|%23d|\n","short",sizeof(short),SHRT_MIN,SHRT_MAX);
printf("|%18s|%d|%24d|%23d|\n","unsigned short",sizeof(unsigned short),0,USHRT_MAX);
printf("|%18s|%d|%24ld|%23ld|\n","long",sizeof(long),LONG_MIN,LONG_MAX); 
printf("|%18s|%d|%24u|%23lu|\n","unsigned long",sizeof(unsigned long),0,ULONG_MAX); 
printf("|%18s|%d|%24lld|%23lld|\n","long long",sizeof(long long),LLONG_MIN,LLONG_MAX); 
printf("|%18s|%d|%24d|%23llu|\n","unsigned long long",sizeof(unsigned long long),0,ULLONG_MAX);
printf("|%18s|%d|%24e|%23e|\n","float",sizeof(float),-FLT_MAX,FLT_MAX);
//printf("|%18s|%d|%24.16E|%23.16E|\n","double",sizeof(double),DBL_MIN,DBL_MAX);
}
