//          *         
//         * *        
//        *   *       
//       *     *      
//      *       *     
//     *         *    
//    *           *   
//   *             *  
//  *               * 
// *******************
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
            if(i==n)
             printf("*");
            else if(j>=n+1-i && j<=n+1-i || j>=n-1+i && j<=n-1+i)
             printf("*");  
           else
             printf(" ");
        }
      
        printf("\n");
    }
    return 0;
}