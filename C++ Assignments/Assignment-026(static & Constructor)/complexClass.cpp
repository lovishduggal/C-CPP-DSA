// Define a class Complex to represent a complex number with instance variables a and
// b to store real and imaginary parts. Also define following member functions
// a. void setData(int,int)
// b. void showData()
// c. Complex add(Complex)
#include<iostream>
using namespace std;
class Complex
{
    private:
    int a;
    int b;
    public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << "The complex number is " << a << " + " << b << "i";
    }
    Complex add(Complex obj)
    {
        obj.a = obj.a + a;
        obj.b = obj.b + b;
        return obj;
    }
};
int main()
{
    Complex c_1, c_2, c_3;
    c_1.setData(13, 4);
    c_2.setData(5, 6);
    c_3 = c_1.add(c_2);
    c_3.showData();
    return 0;
}