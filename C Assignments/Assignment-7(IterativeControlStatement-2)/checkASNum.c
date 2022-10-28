// Write a program to check whether a given number is an Armstrong number
// or not
#include<stdio.h>
int main()
{
    int i,N,c=0,m=1,j,k,num=0,n,check,loop;
    printf("Enter Number in order to check :");
    scanf("%d",&N);
    
    n=N;
    check=N;
    
    while(N!=0)
    {
     N=N/10;
     c++;
    }

   for ( j = 1; j <= c; j++)
   {  
      m=1;
      for ( i = 1; i <= c; i++)m*=(n%10);
      num+=m;
      n=n/10;
   }
   
   if(num==check)
     printf("Enter Number is Armstrong Number");
   else
     printf("Enter Number is Not a Armstrong Number");
   return 0;
}

