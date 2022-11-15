// Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int add(int,int,int=0);
int main()
{
   system("cls");
   int a,b,c,select,result;
   cout<<"Select any choice !!"<<endl<<endl;
   cout<<"1.For adding two Numbers"<<endl;
   cout<<"2.For adding three Numbers"<<endl;
   cin>>select;
   switch (select)
   {
      case 1:
      cout<<"Enter two Numbers:"<<endl;
      cin>>a>>b;
      result = add(a,b);
      cout<<"The sum is:"<<result;
      break;

      case 2:
      cout<<"Enter three Numbers:"<<endl;
      cin>>a>>b>>c;
      result = add(a,b,c);
      cout<<"The sum is:"<<result;
      break;
   }
  
   return 0;
}

int add(int x, int y, int z)
{
    return x+y+z;
}