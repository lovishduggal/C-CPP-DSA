// Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int nxtPrime(int);
int main()
{
    int N,result;
    printf("Enter Number:");
    scanf("%d",&N);
    result=nxtPrime(N);
    printf("The next prime Number is %d",result);
    return 0;
}
int nxtPrime(int N)
{
      int i;  
   while (N)
   {
     N++;
     for ( i = 2; i < N; i++)
     {
        if(N%i==0)
        break;
     }
      if(i==N)
       return N;
   }
}