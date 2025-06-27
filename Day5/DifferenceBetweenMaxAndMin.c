/******************************************************************************
Write a program to find the difference between maximum and minimum element
*******************************************************************************/

#include <stdio.h>
int findMax(int a[],int size)
{
    int max=a[0];
    for(int i=0;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
int findMin(int a[],int size)
{
    int min=a[0];
    for(int i=0;i<size;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    return min;
}

int main()
{
    int a[]={1,12,13,15,87,2,9};
    int size=sizeof(a)/sizeof(a[0]);
    int max=findMax(a,size);
    int min=findMin(a,size);
    printf("Difference between Max and Min Elements :%d",max-min);
    return 0;
}