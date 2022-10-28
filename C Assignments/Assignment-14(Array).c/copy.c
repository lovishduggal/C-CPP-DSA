// Write a program in C to copy the elements of one array into another array.Take array
// values from the user.
#include<stdio.h>
int main()
{
    int a[100],tmp[100],i,n;
    printf("Enter Size of an Array:");
    scanf("%d",&n);
    printf("Enter %d Numbers:",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        tmp[i]=a[i];
    }    
    for ( i = 0; i < n; i++)printf("%d ",tmp[i]);
    return 0;
}