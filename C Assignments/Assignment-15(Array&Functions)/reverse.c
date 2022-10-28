// Write a function in C to read n number of values in an array and display it in reverse
// order.
#include<stdio.h>
void sort(int a[],int n);
int main()
{
    int a[100],n,i;
    printf("Enter Size of an array:");
    scanf("%d",&n);
    sort(a,n);
    // for ( i = (n-1); i >=0; i--)printf("%d ",a[i]); 
    return 0;
}
void sort(int a[],int n)
{
    int i,j,tmp;
    printf("Enter %d Elements:",n);
    for ( i = 0; i < n; i++)scanf("%d",&a[i]);
    for ( i = (n-1); i >=0; i--)printf("%d ",a[i]);
}