#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(int *xp,int *yp)
{
    int temp=*xp;
      *xp=*yp;
      *yp=temp;

}

void improvedBubble(int arr[],int n)
{
    int i,j; 
    int flag=0;
    for(i=0;i<n-1;i++)
    {   
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                flag=1;
            }

            if(flag==0)
               {

             break;
               }            
        }
    }
}

void display(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}


int main()
{
    int arr[]={1,4,8,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    improvedBubble(arr,n);
    printf("sorted array is:\n");
  display(arr,n);




return 0;
}
