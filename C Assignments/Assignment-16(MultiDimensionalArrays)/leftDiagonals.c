// Write a program in C to find the sum of left diagonals of a matrix.
#include<stdio.h>
int main()
{
    int a[50][50],n,i,j,s=0;
    printf("NOTE!!\nIf you put Size->3 that means 3x3 matrix will formed!!\n");
    printf("Enter Size of Square Matrix:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
         for ( j = 0; j < n; j++)
         {
            printf("Value of Element at a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
            if(i==j)s+=a[i][j];
         }
    }
    printf("The sum of Left Diagonal is %d",s);
    return 0;
}