// Write functions using function overloading to add two numbers having different data
// types.
#include<iostream>
using namespace std;
int sum(int,int);
float sum(float,float);

int main()
{
  int a,b;
  float x,y;
  cout<<"Enter two Integer Number:";
  cin>>a>>b;
  cout<<"The sum is :"<<sum(a,b)<<endl;
  cout<<endl<<"Enter two Real Number:";
  cin>>x>>y;
  cout<<"The sum is :"<<sum(x,y);

  return 0;
}
int sum(int a,int b)
{
    return a+b;
}
float sum(float x, float y)
{
    return x+y;
}
