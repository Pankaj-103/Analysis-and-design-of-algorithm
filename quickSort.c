#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(int *x,int *y)
{
    int temp=*x;
        *x=*y;
        *y=temp;
}

int partition(int arr[],int low,int high)
{
   int i=low;
   int j=high;
   int pivot=arr[low];
   while(i<j)
   {
    while(pivot>=arr[i])
    i++;
    while(pivot<arr[j])
    j--;
    if(i<j)
    swap(&arr[i],&arr[j]);
   }
   swap(&arr[low],&arr[j]);
   return j;

}



void quicksort(int arr[],int low,int high){

  if(low<high)
  {
    int pivot=partition(arr,low,high);
    quicksort(arr,low,pivot-1);
    quicksort(arr,pivot+1,high);
  }
}

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}



int main()
{
    int arr[]={4,2,8,3,1,5,7,11,6};
    int size=sizeof(arr)/sizeof(int);

    printf("before sorting\n");
    printArray(arr,size);
    quicksort(arr,0,size-1);
    printf("\nafter sorting\n");
    printArray(arr,size);
return 0;
}