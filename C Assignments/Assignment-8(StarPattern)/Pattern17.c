// *********
//  *     * 
//   *   *  
//    * *   
//     *
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter N for Total Numbers of Rows:");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=n*2-1 ; j++)
        {
            if(i==1)
             printf("*");
            else if(j>=i && j<=i || j>=n*2-i && j<=n*2-i)
             printf("*");  
           else
             printf(" ");
        }
      
        printf("\n");
    }
    return 0;
}