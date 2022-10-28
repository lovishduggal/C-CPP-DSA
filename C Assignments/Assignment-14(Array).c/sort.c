// Write a program to sort elements of an array of size 10. Take array values from the
// user.
#include<stdio.h>
int main()
{
    int a[10],i,j,tmp;
    printf("Enter 10 Numbers:");
    for ( i = 0; i < 10; i++)scanf("%d",&a[i]);
    for ( i = 0; i < 10; i++)
    {
        for ( j = i+1; j < 10; j++)
        {
            if(a[i]>a[j])
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
 printf("After Sorting:");
 for ( i = 0; i < 10; i++)printf("%d ",a[i]);
 return 0;
}