// Write a program in C to find the transpose of a given matrix.
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;

    printf("Enter Elements Values of  Matrix(3x3):");
    for ( i = 0; i < 3; i++)
    {
       for ( j = 0; j < 3; j++)scanf("%d",&a[i][j]);
    }

    printf("The Transpose of Matrix of order 3x3\n");
    for ( i = 0; i < 3; i++)
    {
       for ( j = 0; j < 3; j++)printf(" %d ",b[i][j]=a[j][i]);  
        printf("\n");
    }
    return 0;
}