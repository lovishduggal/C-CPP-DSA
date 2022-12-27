// Write a C++ program to add two numbers using single inheritance. Accept these two
// numbers from the user in base class and display the sum of these two numbers in
// derived class.
#include <iostream>
using namespace std;
class Base
{
protected:
    int a, b;

public:
    void setNum(int x, int y)
    {
        a = x;
        b = y;
    }
};
class Derived : public Base
{
public:
    int sumOfNum()
    {
        return a + b;
    }
    void display()
    {
        cout << "The sum of numbers is " << sumOfNum();
    }
};
int main()
{
    Derived n_1;
    n_1.setNum(5, 5);
    n_1.display();
    return 0;
}