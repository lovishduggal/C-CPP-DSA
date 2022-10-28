// Write a program to find next Prime number of a given number
#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter Number :");
    scanf("%d",&N);   
   while (N)
   {
     N++;
     for ( i = 2; i < N; i++)
     {
        if(N%i==0)
        break;
     }
      if(i==N)
       {
         printf("THE Next Prime Number is %d ",i);
         break;
       }
   }
   return 0;
}