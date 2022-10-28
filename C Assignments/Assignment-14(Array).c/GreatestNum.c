// Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user.
#include<stdio.h>
int main()
{
    int a[10],gN=0,i;
    printf("Enter 10 Numbers:");
    for ( i = 0; i < 10; i++)
    {
         scanf("%d",&a[i]);
         if(i==0)gN=a[i];
         if(gN<a[i])
         gN=a[i];
    }
    printf("The Greatest Num is %d",gN);
    return 0;
}