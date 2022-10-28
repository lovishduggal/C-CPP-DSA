// Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int sN(int a[],int n);
int main()
{
    int a[100],result,n;
    printf("Enter Size of an array:");
    scanf("%d",&n);
    result=sN(a,n);
    printf("The Smallest Number is %d",result);
    return 0;
}
int sN(int a[],int n)
{
    int i,num;
    printf("Enter %d Elements:",n);
    for ( i = 0; i < n; i++)scanf("%d",&a[i]);
    num=a[0];
    for ( i = 0; i < n; i++)
    {
         if(num>a[i])
         num=a[i];
    }
    return num;
}