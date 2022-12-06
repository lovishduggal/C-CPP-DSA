// Define a class Circle and define an instance member function to find the area of the
// circle.
#include <iostream>
using namespace std;
class circleArea
{
    private:
    float rad, area;
    public:
    void setRadius(float x)
    {
        rad = x;
    }
    float getRadius()
    {
        return rad;
    }
    void calc()
    {
        area = 3.14 * rad * rad;
    }
    float getArea()
    {
        return area;
    }
};

int main()
{
    circleArea c_1;
    c_1.setRadius(3.5f);
    c_1.calc();
    cout << "The area of circle having " << c_1.getRadius() <<"R is " << c_1.getArea();
    return 0;
}