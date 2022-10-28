// Write a program to reverse a given number
#include<stdio.h>
int main()
{
    int i,N,rnum=0;
    printf("Enter Number in order to get reverse of it:");
    scanf("%d",&N);
    while (N!=0)
    {
     rnum=(rnum*10)+(N%10);
     N=N/10;

    }
    printf("After reverse, the Number is %d ",rnum);
    return 0;
}