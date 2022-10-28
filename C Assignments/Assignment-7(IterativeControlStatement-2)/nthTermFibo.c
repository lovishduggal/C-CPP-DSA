// Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main()
{
    int N,a=-1,b=1,c,i;
    printf("Enter nth  term:");
    scanf("%d",&N);
    for ( i = 1; i <=N; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("The term is %d",c);
    return 0;
}