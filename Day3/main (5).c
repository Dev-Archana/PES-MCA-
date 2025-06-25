/******************************************************************************
Linear Search : 
sample input1 : 1,2,3,4,5,6        key = 3
output : 2 -> index

sample input 2 : 1,2,3,4,5,6        key =8 
output -> -1 : not found 
*******************************************************************************/
#include <stdio.h>
int linear_search(int arr[],int size,int key){
    int index=-1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            index=i;
            return index;
        }
    }
    return index;
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int key=3;
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("%d",linear_search(arr,size,key));
    return 0;
}