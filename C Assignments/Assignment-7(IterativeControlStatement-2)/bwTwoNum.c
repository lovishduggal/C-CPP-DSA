// Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main()
{
    int i,N,a,b;
    printf("Enter two Number :");
    scanf("%d%d",&a,&b);
    printf("Primes Numbers bw them : ");
   for(N=(a<b?a:b);N<=(a>b?a:b);N++)
   {
     for ( i = 2; i < N; i++)
     {
        if(N%i==0)
        break;
     }
     
    if(i==N)
     printf("%d ",N);
    
   }
    return 0;
}