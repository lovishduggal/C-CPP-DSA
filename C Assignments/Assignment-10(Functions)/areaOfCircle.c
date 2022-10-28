// Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area(int);
int main()
{
    int r;
    float result;
    printf("Enter Radius of Circle:");
    scanf("%d",&r);
    result=area(r);
    printf("The Area of circle is %.2f",result);
    return 0;
}
float area(int r)
{
    float area;
    area=3.14*r*r;
    return area;
}
