// Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void nPrimes(int);
int main()
{
    int x;
    printf("Enter N:");
    scanf("%d",&x);
    nPrimes(x); 
}
void nPrimes(int x)
{
    int i,j,n=1;
   
     for ( i = 2;; i++)
     {
        for ( j = 2;j<=i; j++)
        {
             if(i%j==0)
             break;
        }
        if(j==i)
        {
          printf("%d ",i);
          if(n==x)
          break;
          n++;
        }
      }   
}