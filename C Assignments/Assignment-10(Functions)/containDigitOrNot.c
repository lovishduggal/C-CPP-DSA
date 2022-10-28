// Write a function to check whether a given number contains a given digit or not.
// (TSRS)
#include<stdio.h>
int dig(int ,int);
int main()
{
  int number,digit,result;
  printf("Enter  Number and Digit resp :");
  scanf("%d%d",&number,&digit);
  result=dig(number,digit);
  if(result==1)
  printf("Digit present in Number");
  else
  printf("Digit is not present in Number");
}
int dig(int num,int dig)
{
    while(num!=0)
    {
        if((num%10)==dig)
        return 1;
        num=num/10;
    }
    return 0;
}