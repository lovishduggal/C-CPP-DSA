// Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void natural(int);
int main()
{
    int x;
    printf("Enter N:");
    scanf("%d",&x);
    natural(x);
    return 0;
}
void natural(int x)
{
    int i;
    for ( i = 1; i <= x; i++)printf("%d ",i);
}