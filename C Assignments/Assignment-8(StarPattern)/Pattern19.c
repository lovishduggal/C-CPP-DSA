#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter N for Total Numbers of Rows:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= (n*2)-7; j++)
        {
           if(i<=(n-(((n*2)-7)-1)/2))
            {
                if(j>=((n-((5*n)/6)))+1-i && j<=((n-(n/2)))+i-1 || j>=(n+1-i) && j<=(n+(n/3))+i)
                printf("*");
                else
                 printf(" ");
            }
            else if(i>=(n-(((n*2)-7)-1)/2))
            {
                if(j>=(i-3) && j<=((n+6)-(i-3)+1))
                printf("*");
                else
                printf(" ");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}