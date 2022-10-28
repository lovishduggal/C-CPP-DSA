// Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>
int fact(int);
int main()
{
    int i,j,N;
    printf("Enter No. of total Rows:");
    scanf("%d",&N);
    for ( i = 0; i < N; i++)
    {
        for ( j =0;j <(N-1-i); j++)printf(" ");
        for ( j = 0; j <=i; j++)printf("%d ",fact(i)/(fact(j)*fact(i-j)));
        printf("\n");
    }
    return 0;
}
int fact(int x)
{
    int i,s=1;
    for ( i = 1; i <= x; i++)s*=i;
    return s;
}