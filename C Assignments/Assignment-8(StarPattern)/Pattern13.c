// ABCDEFGFEDCBA
// ABCDEF FEDCBA
// ABCDE   EDCBA
// ABCD     DCBA
// ABC       CBA
// AB         BA
// A           A
#include<stdio.h>
int main()
{
    int i,j,n,num1=1,num2;
    printf("Enter N for Total Numbers of Rows:");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {   
          num1=65;
        for ( j = 1; j <=(n*2)-1; j++)
        {
           if(j<=n+1-i || j>=n-1+i)
           {    
                if(i==1)
                 {
                     if(j<=n)
                     {
                       num2=num1;
                       printf("%c",num1);
                       num1++; 
                     }
                    else
                     {
                       num2--;
                       printf("%c",num2);
                     }
                 }
               else if(j<=n)
                {
                  num2=num1;
                  printf("%c",num1);
                  num1++;
                }
                else
                {
                  printf("%c",num2);
                  num2--;
                }
           }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}