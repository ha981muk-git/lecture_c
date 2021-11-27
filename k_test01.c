#include <stdio.h>

int main()
{
    int  a, b, *ip;
    
     a = -3;
     b = a*a-11;
     ip =&a;
     b = b**ip;

     b +=8;

     if(*ip = a*b){
       b = *ip;
     }
     printf(" a = %d ,b = %d \n",a,b);
     return 0;
}