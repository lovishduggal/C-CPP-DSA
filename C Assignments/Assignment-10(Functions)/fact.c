#include<stdio.h>
int fact(int);
int main()
{
int x,result;
printf("Enter Number:");
scanf("%d",&x);
result = fact(x);
printf("%d",result);

}
int fact(int x)
{
    int i,s=1;
    for ( i = 1; i <= x; i++)s*=i;
    return s;
}