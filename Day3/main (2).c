/******************************************************************************
Write a program to display even numbers present in an given array 
input :  my_array[]={1,2,3,4,5,6,7};
*******************************************************************************/

#include <stdio.h>

int main()
{
   int my_array[]={1,2,3,4,5,6,7};
   int size=sizeof(my_array)/sizeof(my_array[0]);
   for(int i=0;i<size;i++)
   {
       if(my_array[i]%2==0)
       {
           printf("%d\t",my_array[i]);
       }
   }
    return 0;
}