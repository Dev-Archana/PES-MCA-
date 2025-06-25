/******************************************************************************
Write a program to print the factorial of 5(5!)
input n=5
output 120
*******************************************************************************/
#include <stdio.h>
//User defined Function
int factorial(int n)
{
    if (n==0 || n==1)
    return 1;
    else
    return n*factorial(n-1);
}
int main()
{
    int num;
    printf("Enter number:\t");
    scanf("%d",&num);
    printf("Factorial of a given number is: %d",factorial(num));   

    return 0;
}
