// Define a class Box and write a program to enter length, breadth and height and
// initialise objects using constructor also define member functions to calculate volume
// of the box.
#include<iostream>
using namespace std;
class Box
{
    private:
    float len, bd, ht, vol;
    public:
    Box(float l, float b, float w)
    {
        vol = l * b * w;
    }
    void setSides(float l, float b, float w)
    {
        vol = l * b * w;
    }
    void showVol()
    {
        cout << "The vol of box is " << vol;
    }

};
int main()
{
    Box b_1(2.5, 3.2, 4.43);
    b_1.showVol();
    return 0;
}