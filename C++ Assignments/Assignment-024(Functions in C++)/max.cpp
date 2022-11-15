// Write functions using function overloading to find a maximum of two numbers and
// both the numbers can be integer or real.
#include<iostream>
using namespace std;
int maxNum(int,int);
float maxNum(float,float);

int main()
{
  int a,b;
  float x,y;
  cout<<"Enter two Integer Number:";
  cin>>a>>b;
  cout<<"The maximum Number is :"<<maxNum(a,b)<<endl;
  cout<<endl<<"Enter two Real Number:";
  cin>>x>>y;
  cout<<"The maximum Number is :"<<maxNum(x,y);

  return 0;
}
int maxNum(int a,int b)
{
    return a>b?a:b;
}
float maxNum(float a,float b)
{
    return a>b?a:b;
}
