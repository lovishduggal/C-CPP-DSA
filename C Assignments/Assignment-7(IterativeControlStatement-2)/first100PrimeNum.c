// Write a program to print all Prime numbers under 100
#include<stdio.h>
int main()
{
    int i,N;
    printf("Primes Numbers Under 100 :");
   for(N=2;N<=100;N++)
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