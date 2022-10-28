// Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;

    printf("Enter Elements Values of First Matrix(3x3):");
    for ( i = 0; i < 3; i++)
    {
       for ( j = 0; j < 3; j++)scanf("%d",&a[i][j]);
    }

    printf("Enter Elements Values of Second Matrix(3x3):");
    for ( i = 0; i < 3; i++)
    {
       for ( j = 0; j < 3; j++)scanf("%d",&b[i][j]);
    }

    printf("The sum of two matrices each of order 3x3\n");
    for ( i = 0; i < 3; i++)
    {

        printf("|");
       for ( j = 0; j < 3; j++)
       {
        c[i][j]=a[i][j]+b[i][j];
        printf(" %d ",c[i][j]=a[i][j]+b[i][j]);
       }
        printf("|");
        printf("\n");
    }
    return 0;
    
}