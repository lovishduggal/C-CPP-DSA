// WAP to find the area of the circle. Take radius of circle from user as input and print the
// result in below given format.
#include<stdio.h>
int main()
{
    int r;
    float area;
    printf("Enter the Radius of Circle:");
    scanf("%d",&r);
    area=3.14*r*r;
    printf("Area of circle is %.2f having the radius %d\n",area,r);
    return 0;
}