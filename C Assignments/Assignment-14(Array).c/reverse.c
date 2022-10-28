// Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("Enter Size of an Array:");
    scanf("%d",&n);
    printf("Enter %d Numbers:",n);
    for ( i = 0; i < n; i++)scanf("%d",&a[i]);
    for ( i = (n-1); i >= 0; i--)printf("%d ",a[i]);
    return 0;
}