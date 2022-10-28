// Write a program to calculate the sum of numbers stored in an array of size 10. Take
// array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,s=0;
    printf("Enter 10 Numbers or Digits:");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    printf("The sum is %d",s);
    return 0;
}