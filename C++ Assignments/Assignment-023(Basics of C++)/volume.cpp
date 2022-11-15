// Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main()
{
    float width,length,height,volume;
    cout<<"Enter width,length & height of Cuboid resp.. :";
    cin>>width>>length>>height;
    volume= width * height * length;
    cout<<"The Volume of Cuboid is "<<volume;
    return 0;
}