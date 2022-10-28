// Write a program to find the smallest number stored in an array of size 10. Take array
// values from the user.
#include<stdio.h>
int main()
{
    int a[10],sN=0,i;
    printf("Enter 10 Numbers:");
    for ( i = 0; i < 10; i++)
    {
         scanf("%d",&a[i]);
         if(i==0)sN=a[i];
         if(sN>a[i])
         sN=a[i];
    }
    printf("The Smallest Num is %d",sN);
    return 0;
}