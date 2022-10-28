// Write a program in C to find the sum of rows and columns of a Matrix.
#include<stdio.h>
int main()
{
    int a[50][50],n,i,j,k,s1=0,s2=0;
    printf("NOTE!!\nIf you put Size->3 that means 3x3 matrix will formed!!\n");
    printf("Enter Size of Square Matrix:");
    scanf("%d",&n);
    int sRows[(n-1)],sColums[(n-1)];
    for ( i = 0; i < n; i++)
    {    
        s1=0;
         for ( j = 0; j < n; j++)
         {
            printf("Value of Element at a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
            s1+=a[i][j];
         }
         sRows[i]=s1;
          
    } 

    for ( i = 0; i < n; i++)
    {    
        s2=0;
        for ( j = 0; j < n; j++)s2+=a[j][i];
        sColums[i]=s2;
    }   

   for ( i = 0; i < n; i++)
    {
         for ( j = 0; j < n; j++)printf("%d    ",a[i][j]);
         printf("%d",sRows[i]);
         printf("\n");
    } 
   
    for ( k = 0; k < n; k++)printf("%d   ",sColums[k]);
 return 0;
}