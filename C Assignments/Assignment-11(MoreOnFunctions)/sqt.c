// Write a program in C to find the square of any number using the function.
#include<stdio.h>
int sqt(int);
int main()
{
    int a,result;
    printf("Enter Number:");
    scanf("%d",&a);
    result=sqt(a);
    printf("The Square is %d",result);
    return 0;
}
int sqt(int a)
{
 return (a*a);   
}