// From the list of IP addresses, check whether all ip addresses are valid.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  int check_1=0,check_2=0,i;
  char ip[3][50]={"23.194.120.0","111.231.123.1","42.44.13.123"},*p;
  for ( i = 0; i < 3 ; i++)
  {
	  check_1=0,check_2=0;
	  p=strtok(ip[i],".");
      while (p!=NULL)
     {
	   int x=atoi(p);
	   if(x>=0 && x<=255)
	   check_1++;
	   p=strtok(NULL,".");
	   check_2++;
     }
  
     if(!(check_1==4 && check_2==4))
     break;
  }
   if(i==3)
   printf("All IP Addresses are valid");
   else
   printf("All or may be some IP Addresses are not valid");
}