
#include <stdio.h>

int main()
{
    int key = 3;
    int a[6]= {1,2,3,4,5,6};
    for(int i=0;i<6;i++)
    if(a[i]==3)
    printf("element found at index %d",i);
    return 0;
}