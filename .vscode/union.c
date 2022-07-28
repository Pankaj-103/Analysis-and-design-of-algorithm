#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

    int arr1[]={1,2,3,4,5,6};
    int arr2[]={7,8,9,10,11,12,14,15,16};

    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[n1+n2];
    int i=0,k;
 
    if(n1>n2)
    k=n2;
    else
    k=n1;
   

    while(i<(n1+n2))
    {  int j=0;
       while(j<n1 && j<n2)
       {
        if(arr1[j]!=arr2[j])
        {
            arr3[i]=arr1[j];
            i=i+1;
            arr3[i]=arr2[j];
            i++;
        }
        else{
            arr3[i]=arr1[j];
            i++;
        }
        j++;

       }

       while(j<n1)
       {
        arr3[i]=arr1[j];
        j++;
        i++;
       }
      
       while(j<n2)
       {
        arr3[i]=arr2[j];
        j++;
        i++;
       }
    
    }

    for(int i=0;i<n1+n2;i++)
    {
        printf("%d\t",arr3[i]);
    }

return 0;
}