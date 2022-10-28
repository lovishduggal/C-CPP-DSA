// Write a recursive function to calculate HCF of two number
#include<stdio.h>
int hcf(int,int);
int main()
{
  int x,y,result;
  printf("Enter two +ve Numbers:");
  scanf("%d%d",&x,&y);
  result=hcf(x,y);
  printf("The HCF is %d",result);
  return 0;
}
int hcf(int x,int y)
{
    if((x>y?x:y)%(x<y?x:y)==0)
    return (x<y?x:y);
    return hcf((x>y?x:y)%(x<y?x:y),(x<y?x:y));
}
