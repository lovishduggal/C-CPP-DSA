// Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
// function.
#include<stdio.h>
int series(int);
int main()
{
    int result;
    result=series(5);
    printf("The sum of Series is %d",result);
    return 0;
}
int series(int x)
{
    int i,j,m,s=0;
    for (i = 1; i <=x; i++)
    {
         m=1;
        for ( j =1; j<=i; j++)
        {
           m*=j;
        }
        m=m/i;
        s+=m;
    }
    return s;
}