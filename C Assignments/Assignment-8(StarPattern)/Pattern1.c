// * 
// * * 
// * * * 
// * * * * 
// * * * * *
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter N for Total Numbers of Rows:");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=n ; j++)
        {
           if(j<=i)
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}