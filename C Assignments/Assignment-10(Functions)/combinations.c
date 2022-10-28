// Write a function to calculate the number of combinations one can make from n items
// and r selected at a time. (TSRS)
#include<stdio.h>
int comb(int,int);
int main()
{
    int n,r,result;
    printf("Enter n and r resp..");
    scanf("%d%d",&n,&r);
    result=comb(n,r);
    printf("The Number of Combination is %d",result);

}
int comb(int n,int r)
{
    int i,fact1=1,fact2=1,fact3=1;
    for ( i = 1; i <= n; i++)fact1*=i;
    for ( i = 1; i <= r; i++)fact2*=i;
    for ( i = 1; i <= (n-r); i++)fact3*=i;
    return (fact1/(fact2*fact3));
}