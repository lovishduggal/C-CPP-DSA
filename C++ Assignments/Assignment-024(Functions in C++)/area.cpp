// Define overloaded functions to calculate area of circle, area of rectangle and area of
// triangle
#include<iostream>
using namespace std;
float area(int);
int area(int,int);
float area(float,float);
int main()
{
  int l,b;
  float r,base,height;
  cout<<"Enter Radius of circle:";
  cin>>r;
  cout<<"The area of circle is "<<area(r)<<endl;
  cout<<"Enter Length and Width of Rectangle:";
  cin>>l>>b;
  cout<<"The area of rectangle is "<<area(l,b)<<endl;
  cout<<"Enter base and height of Rectangle:";
  cin>>base>>height;
  cout<<"The area of rectangle is "<<area(base,height);
  return 0;
}
float area(int r)
{
    return 3.14 * r *r;
}
int area(int l, int b)
{
    return l * b;
}
float area(float base, float height)
{
    return (base * height / 2);
}