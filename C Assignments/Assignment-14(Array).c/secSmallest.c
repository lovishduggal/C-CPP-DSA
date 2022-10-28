// Write a program to find the second smallest number in an array.Take array values
// from the user.

// #include<stdio.h>
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
//             if(a[i]>a[j])
//             {
//                 tmp=a[i];
//                 a[i]=a[j];
//                 a[j]=tmp;
               
//             }
//         }
//          if(i==1)
//          break;
//     }
//     printf("The Second smallest Num is %d",a[i]);
// }

//OR:
#include<stdio.h>
int main()
{
    int a[100],i,sN=0,sSN=0,n;
    printf("Enter Size of an Array:");
    scanf("%d",&n);
    printf("Enter %d Numbers:",n);
    for ( i = 0; i < n; i++)scanf("%d",&a[i]);
    if(a[0]<a[1])
    {
        sN=a[0];
        sSN=a[1];
    }
    else
    {
        sN=a[1];
        sSN=a[0]; 
    }
    for ( i = 2; i < n; i++)
    {
      if(sN>a[i])
      {
        sSN=sN;
        sN=a[i];
      }
      else if(sSN>a[i])
      {
        sSN=a[i];
      }
    }
    printf("The Second smallest Num is %d",sSN);
    return 0;
}