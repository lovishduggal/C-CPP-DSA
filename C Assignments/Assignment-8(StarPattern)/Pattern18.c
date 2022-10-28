//     *    
//    ***   
//   *****  
//  ******* 
// *********
//  ******* 
//   *****  
//    ***   
//     *
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter N for Total Numbers of Rows:");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=n; j++)
        {
           if(i<=(n-(n/2)))
            {
                if(j>=(n-(n/2))+1-i && j<=(n-(n/2))-1+i)
                printf("*");
                else
                 printf(" ");
            }
           else if(i>(n-(n/2)))
            {
                if(j>=(i-(n/2)) && j<=(n-(i-(n/2))+1))
                printf("*");
                else
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}