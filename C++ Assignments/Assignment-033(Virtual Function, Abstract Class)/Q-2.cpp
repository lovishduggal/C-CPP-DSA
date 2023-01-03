// Extend the above program to display the area of circles. This requires the addition of
// a new derived class 'circle' that computes the area of a circle. Remember, for a circle
// we need only one value, its radius, but the get_data() function in the base class
// requires two values to be passed. (Hint: Make the second argument of get_data()
// function as a default one with zero value.)
#include <iostream>
using namespace std;
class Shape
{
protected:
    double x;
    double y;

public:
    void get_data(int y = 0)
    {
        cin >> x;
        this->y = y;
    }
    virtual void display() = 0;
};
class Circle : public Shape
{
public:
    void display()
    {
        cout << "The Area of Circle is " << 3.14 * x * x;
    }
};
int main()
{
    Circle c_1;
    cout << "Enter Radius of circle : ";
    c_1.get_data();
    c_1.display();
    return 0;
}
