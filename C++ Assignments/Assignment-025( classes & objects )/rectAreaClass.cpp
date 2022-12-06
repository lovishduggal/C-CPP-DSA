// Define a class Rectangle and define an instance member function to find the area of
// the rectangle.
#include <iostream>
using namespace std;
class rectArea
{
    private:
    float len, bd, area;
    public:
    void setLenBd(int l, int b)
    {
        len = l;
        bd = b;
    }
    int getLength()
    {
        return len ;
    }
    int getbreadth()
    {
        return bd;
    }
    void calc()
    {
        area = len * bd;
    }
    int getArea()
    {
        return area;
    }
};

int main()
{
    rectArea r_1;
    r_1.setLenBd(4,6);
    r_1.calc();
    cout << "The area of rectangle is " <<  r_1.getArea();
    return 0;
}