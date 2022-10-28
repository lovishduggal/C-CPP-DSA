// Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
void fibo(int,int,int);
int main()
{
    int x ,a=-1,b=1;
    printf("Enter N:");
    scanf("%d",&x);
    fibo(x,a,b);
    return 0;
}
void fibo(int x,int a,int b)
{
    int c;
    if(x>=1)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        fibo(x-1,a,b);
    }

}