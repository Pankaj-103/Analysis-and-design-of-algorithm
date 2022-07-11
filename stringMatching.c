#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{ 
    char str[]="my name is pankaj sharma";
    char substr[]="pankaj";
    
    int m=sizeof(str)/sizeof(str[0]);
    int n=sizeof(substr)/sizeof(substr[0]);
    int j;
    for(int i=0;i<m-n;i++)
    {     
        for(j=0;j<n;j++)
        if(str[j+i]!=substr[j])
        break;

        if(j==n-1)
        printf("substring found at location %d",i);
    }

return 0;
}
