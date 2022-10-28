// Write a function in C to count the frequency of each element of an array.
#include <stdio.h>    
void freq(int [],int);   
int main()    
{  
    int a[100],n,i;
    printf("Enter Size of an Array:");
    scanf("%d",&n);
    for ( i = 0; i <n; i++)scanf("%d",&a[i]);
    freq(a,n);
    return 0;
}    
void freq(int a[],int n)
{
    int frq[100],i,j,flag=-1,c;
    for ( i = 0; i < n; i++)
    {
         if(a[i]==flag)
         flag--;
    }
        
    for ( i = 0; i < n; i++)
    {
        c=1;
       for ( j = i+1; j < n; j++)
       {  
        
         if(a[i]==a[j])
         {
            c++;
            a[j]=flag;
         }
       }
       if(a[i]!=flag)
       frq[i]=c;
    }
     for ( i = 0; i < n; i++)
     {
        if(a[i]!=flag)
        {
             printf("Frequency of %d",a[i]);
             printf(" -> ");
             printf("%d",frq[i]);
             printf("\n");
        }
    }
}
