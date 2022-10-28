#include<stdio.h>
void evenNatRev( int);
int main()
{
    int x;
    printf("Enter N:");
    scanf("%d",&x);
    evenNatRev(x);
    return 0;
}
void evenNatRev( int x)
{
    if(x>=1)
    {
        printf("%d ",(x*2));
        evenNatRev(x-1);
    }
}