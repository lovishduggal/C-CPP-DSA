// Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int lcm(int,int);
int main()
{
    int a,b,result;
    printf("Enter two +ve Numbers:");
    scanf("%d%d",&a,&b);
    result=lcm(a,b);
    printf("The LCM is %d",result);
}
int lcm(int a,int b)
{
    int i;
    for ( i=a>b?a:b; i <=a*b; i=i+(a>b?a:b))
    {
       if(i%a==0 && i%b==0)
       return i;
    }
}
