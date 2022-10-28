// Write a function to rotate an array by n position in d direction. The d is an indicative
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
#include<stdio.h>
void rotate(int [],int,int);
int main()
{
    int a[100],n,N,i;
    printf("ENTER SIZE OF AN ARRAY:");
    scanf("%d",&N);
    printf("Enter n (rotate an array by n position):");
    scanf("%d",&n);
    rotate(a,N,n);
    for ( i = 0; i < N; i++)printf("%d",a[i]);
    return 0;
}
void rotate(int a[],int N,int n)
{
    int i,j,val;
    for ( i = 0; i < N; i++)scanf("%d",&a[i]);
    for ( i = 0; i < n; i++)
    {
        val=a[0];
        for ( j = 0; j < (N-1); j++)
        {
            a[j]=a[j+1];
        }
        a[j]=val;
    }
    
}