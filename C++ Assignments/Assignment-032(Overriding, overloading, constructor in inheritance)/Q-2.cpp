// C++ Program to illustrate the use of Constructors in single inheritance of your choice.
#include <iostream>
using namespace std;
class Base
{
protected:
    int a, b;

public:
    Base(int x, int y)
    {
        cout << "P" << endl;
        a = x;
        b = y;
    }
    Base()
    {
        cout << "def" << endl;
        a = 0;
        b = 0;
    }
    void displayBaseData()
    {
        cout << "a = " << a
             << " and "
             << " b = " << b << endl;
    }
};
class Derived : public Base
{
private:
    int c, d;

public:
    Derived() : Base(5, 10)
    {
        c = 15;
        d = 20;
    }
    void display()
    {
        cout << "a = " << a
             << " and "
             << " b = " << b << endl
             << "c = " << c
             << " and "
             << " d = " << d << endl;
    }
};
int main()
{

    Derived d_1;
    d_1.display();
    Base b_1;
    b_1.displayBaseData();
    d_1.display();
    return 0;
}