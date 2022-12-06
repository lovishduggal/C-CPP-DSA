#include<iostream>
using namespace std;
class Area
{
    private:
    float rad, len, bd, side, areaOfSq, areaOfRect, areaOfCir;
    public:
    void setSideOfSquare(float);
    void setSideOfRectangle(float , float);
    void setRadiusOfCircle(float);
    void sqAreaCal();
    void rectAreaCal();
    void cirAreaCal();
    float getAreaOfSquare();
    float getAreaOfRectangle();
    float getAreaOfCircle();
};
void Area::setSideOfSquare(float s)
{
    side = s;
}
void Area::setSideOfRectangle(float l, float b)
{
    len = l;
    bd = b;
}
void Area::setRadiusOfCircle(float r)
{
    rad = r;
}
void Area::sqAreaCal()
{
    areaOfSq = side * side ;
}
void Area::rectAreaCal()
{
    areaOfRect = len * bd;
}
void Area::cirAreaCal()
{
    areaOfCir = 3.14 * rad * rad;
}
float Area::getAreaOfSquare()
{
    return areaOfSq ;
}
float Area::getAreaOfRectangle()
{
    return areaOfRect;
}
float Area::getAreaOfCircle()
{
    return areaOfCir;
}

int main()
{
    Area a;
    a.setSideOfSquare(4);
    a.sqAreaCal();
    a.setSideOfRectangle(2,3);
    a.rectAreaCal();
    a.setRadiusOfCircle(4);
    a.cirAreaCal();
    cout << "Area of Square is " << a.getAreaOfSquare() <<endl
         << "Area of Rectangle is " << a.getAreaOfRectangle() << endl
         << "Area of Circle is " << a.getAreaOfCircle();
}