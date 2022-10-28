// Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
int main()
{
    int i,N,c=0,m=1,j,k,num=0,n,check,loop;
    printf("Enter Number in order to print AS Num under that Num:");
    scanf("%d",&loop);

for ( k = 0; k<=loop; k++)
{   
    N=k;
    n=k;
    check=k;
    c=0;  
    num=0;
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
     printf("%d ",num);
}
 return 0;
}