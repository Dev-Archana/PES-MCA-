//Binary Search
#include <stdio.h>
int binarySearch(int arr[],int n , int key)
{
    int index=-1;
   int element=key;
         int low=0,high=n-1,mid=0;
    while(low<=high)
    {
         mid=low+high/2;
         if(arr[mid]==key)
         return mid;
         else if(arr[mid]>=key)
         high=mid-1;
         else if(arr[mid]<=key)
         low=mid+1;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int key=8;
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("%d",binarySearch(arr,size,key));
    return 0;
}