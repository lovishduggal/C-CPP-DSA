// Write a program in C to count the digits of a given number using recursion.
 
#include <stdio.h>
int countDigits(int ,int);
int main()
{
    int number,count=0;
    printf("Enter Number: ");
    scanf("%d",&number);
    count=countDigits(number,count);
    printf("Total digits in number %d is: %d\n",number,count);
    return 0;
}
int countDigits(int num,int count)
{
   if(num==0)
       return count;
    else
    {
        count++;
       return countDigits(num/10,count);
    }
}

