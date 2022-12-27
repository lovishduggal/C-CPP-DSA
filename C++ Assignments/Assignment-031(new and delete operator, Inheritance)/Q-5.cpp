// Write a C++ program to demonstrate how a common friend function can
// be used to exchange the private values of two classes. (Use call by
// reference method).
#include <iostream>
using namespace std;
class Class_2;
class Class_1
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
    void showData()
    {
        cout << a << " and " << b << endl;
    }
    friend void exchange(Class_1 *, Class_2 *);
};
class Class_2
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << a << " and " << b << endl;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
    friend void exchange(Class_1 *, Class_2 *);
};
void exchange(Class_1 *C_1, Class_2 *C_2)
{
    Class_1 temp;
    temp.setData(C_1->getA(), C_1->getB());
    C_1->setData(C_2->getA(), C_2->getB());
    C_2->setData(temp.getA(), temp.getB());
}
int main()
{
    Class_1 c_1;
    Class_2 c_2;
    c_1.setData(21, 31);
    c_2.setData(4, 5);
    exchange(&c_1, &c_2);
    c_1.showData();
    c_2.showData();
    return 0;
}