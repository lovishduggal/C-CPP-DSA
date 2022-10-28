// Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void bwPrime(int,int);
int main()
{
    int a,b,r;
    printf("Enter Two Number:");
    scanf("%d%d",&a,&b);
    bwPrime(a,b);
    return 0;
}
void bwPrime(int a,int b)
{
    int i,h;
    for ( h = (a<b?a:b); h <= (a>b?a:b) ; h++)
    {
      for ( i = 2; i < h; i++)
      {
        if(h%i==0)
        break;
      }
      if(i==h)
      printf("%d ",h);
    
    }
}    
   
   