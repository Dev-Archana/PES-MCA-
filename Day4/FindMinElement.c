/******************************************************************************
Find the minimum element present in the given array 
*******************************************************************************/
#include <stdio.h>
int findMin(int arr[],int n)
{
    int index=0,key=arr[0];
    for(int i=0;i<n;i++)
    {
        if(key>arr[i])
        {
            key=arr[i];
            index=i;
        }
    }
    return index;
}
int main()
{   
    int arr[]={11,64,41,72,6,64,31,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("%d",findMin(arr,size));
    return 0;
}