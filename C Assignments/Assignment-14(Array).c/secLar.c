// Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h>
// int main()
// {
//     int a[100],i,j,tmp,n;
//     printf("Enter Size of an Array:");
//     scanf("%d",&n);
//     printf("Enter %d Numbers:",n);
//     for ( i = 0; i < n; i++)scanf("%d",&a[i]);
//     for ( i = 0; i < n; i++)
//     {
//         for ( j = i+1; j < n; j++)
//         {
//             if(a[i]<a[j])
//             {
//                 tmp=a[i];
//                 a[i]=a[j];
//                 a[j]=tmp;
//             }
//         }
//          if(i==1)
//          break;
//     }
//     printf("The Second Greatest Num is %d",a[i]);
// }
#include<stdio.h>
int main()
{
    int a[100],i,gN=0,sGN=0,n;
    printf("Enter Size of an Array:");
    scanf("%d",&n);
    printf("Enter %d Numbers:",n);
    for ( i = 0; i < n; i++)scanf("%d",&a[i]);
    if(a[0]>a[1])
    {
        gN=a[0];
        sGN=a[1];
    }
    else
    {
        gN=a[1];
        sGN=a[0]; 
    }
    for ( i = 2; i < n; i++)
    {
      if(gN<a[i])
      {
        sGN=gN;
        gN=a[i];
      }
      else if(sGN<a[i])
      {
        sGN=a[i];
      }
    }
    printf("The Second Largest Num is %d",sGN);
    return 0;
}