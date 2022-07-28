#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 void insertionSort(int arr[],int n)
 {
    int i,key,j;
    for(i=1;i<n;i++)
    {
       key=arr[i];
       j=i-1;
       while(j>=0 && arr[j]>key)
       {
        arr[j+1]=arr[j];
        j=j-1;
       }
       arr[j+1]=key;
    }

 }

 void printArray(int arr[],int n )
 {
   for(int i=0;i<n;i++)
   {
    printf("%d\t",arr[i]);
   }
 }


int main()
{
    int arr[]={7,6,5,4,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
      printf("the sorted array is :\n");
    insertionSort(arr,n);
    printArray(arr,n);
return 0;
}