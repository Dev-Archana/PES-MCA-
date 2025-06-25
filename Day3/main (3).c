/******************************************************************************
Write a program to print 6 fibonacci series elements 
where f0=0  f1=1  
f2=f0+f1    f3=f1+f2    f4=f2+f3    f5=f3+f4
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n=6;
    int a=0,b=1,c,i;
    printf("fibonacci series of %d elements:\n",n);
    for(i=0;i<=n;i++)
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}