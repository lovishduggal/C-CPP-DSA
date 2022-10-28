// Write a program to take marks of 5 subjects from the user. Assume marks are given
// out of 100 and passing marks is 33. Now display whether the candidate passed the
// examination or failed.
#include <stdio.h>
int main()
{
  int maths,hindi,english,phy,chem,total;
  printf("Enter marks of Maths Subject");
  scanf("%d",&maths);
  printf("Enter marks of Hindi Subject");
  scanf("%d",&hindi);
  printf("Enter marks of English Subject");
  scanf("%d",&english);
  printf("Enter marks of Phy Subject");
  scanf("%d",&phy);
  printf("Enter marks of chem Subject");
  scanf("%d",&chem);
  total=maths+english+hindi+phy+chem;
 if(total>165)
  printf("Students is Passed");
 else
  printf("Students is Failed");
  return 0;
}