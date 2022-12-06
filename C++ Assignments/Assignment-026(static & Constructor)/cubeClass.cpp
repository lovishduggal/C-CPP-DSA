// Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include<iostream>
using namespace std;
class Cube
{
    private:
    float side, area;
    public:
    Cube()
    {
        side = 0;
        area = 0;
    }
    void setSide(float x)
    {
        side = x;
    }
    float getSide()
    {
        return side;
    }
    void calc()
    {
        area = side * side * side;
    }
    float getArea()
    {
        return area;
    }

};
int main()
{
    Cube  c1;
    c1.setSide(3.4);
    c1.calc();
    cout << "The area of cube is " << c1.getArea();
    return 0;
}