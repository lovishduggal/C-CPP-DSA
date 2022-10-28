// Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include<stdio.h>
int main()
{
    int a[50][50],n,i,j,c1=0,c2=0;
    printf("NOTE!!\nIf you put Size->3 that means 3x3 matrix will formed!!\n");
    printf("Enter Size of Square Matrix:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
         for ( j = 0; j < n; j++)
         {
            printf("Value of Element at a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
            if(a[i][j]!=0)
            c1++;
            else
            c2++;
        }
    }

    if(c1>c2)
    printf("Matrix is not sparse Matrix.");
    else
    printf("Matrix is sparse Matrix.");
}