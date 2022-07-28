#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int visited[20],a[20][20],n,front=-1,rear=-1,q[20];

void bfs(int,int);

void dfs(int);

int main()
{   int s,choice;
  char ch;


    printf("enter the number of vertices\n");
    scanf("%d",&n);

    printf("\n enter the adjacency matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    

    printf("\n  The adjacency matrix is:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    

  
    do{  
    for(int i=0;i<n;i++)
    visited[i]=0;

    printf("\nenter the source vertex\n");
    scanf("%d",&s);

    printf("1.BFS\n2.DFS\n3.Exit\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: bfs(s,n);
          break;

          case 2: dfs(s);
          break;
          case 3: exit(0);

          default: printf("wrong choice entered");
    }

   
   


  printf("\nwanna continue\n");
  fflush(stdin);
  scanf("%c",&ch);
    } while(ch=='y' || ch=='Y');



return 0;
}

void dfs(int i)
{
    int j;
    printf("\t%d",i);
    visited[i]=1;
    for(j=0;j<n;j++)
    {
        if(!visited[j] && a[i][j]==1)
        dfs(j);
    }

}

void add(int item)
{
  if (rear == 19)
    printf("QUEUE FULL");
  else
  {
    if (rear == -1)
    {
      q[++rear] = item;
      front++;
    }
    else
      q[++rear] = item;
  }
}
int delete ()
{
  int k;
  if ((front > rear) || (front == -1))
    return (0);
  else
  {
    k = q[front++];
    return (k);
  }
}

void bfs(int s, int n)
{
  int p, i;
  add(s);
  visited[s] = 1;
  p = delete ();
  if (p != 0)
    printf(" % d", p);
  while (p != 0)
  {
    for (i = 1; i <= n; i++)
      if ((a[p][i] != 0) && (visited[i] == 0))
      {
        add(i);
        visited[i] = 1;
      }
    p = delete ();
    if (p != 0)
      printf(" % d ", p);
  }
  for (i = 1; i <= n; i++)
    if (visited[i] == 0)
      bfs(i, n);
}


