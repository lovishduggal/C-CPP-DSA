// Write a program in C to find the row with maximum number of 1s.
#include<stdio.h>
int main()
{
    int a[50][50],n,i,j,c1,Max[50],tmp=0,row=-1;
    printf("NOTE!!\nIf you put Size->3 that means 3x3 matrix will formed!!\n");
    printf("Enter Size of Square Matrix:");
    scanf("%d",&n);
  
    for ( i = 0; i < n; i++)
    {
         c1=0;
         for ( j = 0; j < n; j++)
         {
            printf("Value of Element at a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                c1++;
                tmp=1;
            }    
        }
        Max[i]=c1;
     }
    if(tmp)
    {
        tmp=Max[0];
       for ( i = 0; i < n; i++)
       {
          if(tmp<Max[i])
          {
           tmp=Max[i];
           row=i;
          }
       }
      printf("%dth Index Row have maximum 1s.",row+1);
    }
    else
    {
     printf("This Matrix Not contain 1");
    }
  return 0;  
}
   
