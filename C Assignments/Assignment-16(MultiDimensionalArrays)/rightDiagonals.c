// Write a program in C to find the sum of right diagonals of a matrix.
#include<stdio.h>
int main()
{
    int a[3][3],i,j,s=0,k=2;
    //k = No of columns.

    printf("Enter Elements Values of  Matrix(3x3):");
    for ( i = 0; i < 3; i++)
    {
       for ( j = 0; j < 3; j++)scanf("%d",&a[i][j]);
    }

    for ( i = 0; i < 3; i++)
    {
       s+=a[i][k];
       k--;
    }
    printf("The sum of right diagonals of a matrix  of order 3x3 is %d",s);
 
    return 0;
}