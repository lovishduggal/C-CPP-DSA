// Write a function to calculate the number of arrangements one can make from n items
// and r selected at a time. (TSRS)
#include<stdio.h>
int arg(int,int);
int main()
{
    int n,r,result;
    printf("Enter n and r resp..");
    scanf("%d%d",&n,&r);
    result=arg(n,r);
    printf("The Number of Arrangements is %d",result);
}
int arg(int n,int r)
{
    int i,fact1=1,fact2=1;
    for ( i = 1; i <= n; i++)fact1*=i;
    for ( i = 1; i <= (n-r); i++)fact2*=i;
    return (fact1/fact2);
}