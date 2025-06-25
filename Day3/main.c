//Write a program to create an array if size 4 and initialize 4 values in it 
#include <stdio.h>

int main()
{
  //Array declaration
  int my_array[4];
  //initialization
  my_array[0]=10;
  my_array[1]=20;
  my_array[2]=40;
  my_array[3]=70;
  my_array[4]=90;
  for(int i=0;i<=4;i++)
  {
      printf("%d\n",my_array[i]);
  }
  //how to find the length of the given Array
  
  printf("%d",sizeof(my_array)/sizeof(my_array[0]));
    return 0;
}
