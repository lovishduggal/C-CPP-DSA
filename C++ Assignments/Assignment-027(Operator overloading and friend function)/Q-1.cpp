// Define a class Complex with appropriate instance variables and member functions.
// Define following operators in the class:
// a. +
// b. -
// c. *
// d. ==
#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int imag;

public:
    Complex(const Complex &c)
    {
        real = c.real;
        imag = c.real;
    }
    Complex()
    {
        real = 0;
        imag = 0;
    }
    void setData(int r, int i)
    {
        real = r;
        imag = i;
    }
    void showData()
    {
        cout << "The complex Number is " << real << " + " << imag << "i" << endl;
    }
    Complex operator+(Complex);
    Complex operator-(Complex);
    Complex operator*(Complex);
    bool operator==(Complex);
};
Complex Complex::operator+(Complex obj)
{
    obj.real = real + obj.real;
    obj.imag = imag + obj.imag;
    return obj;
}
Complex Complex::operator-(Complex obj)
{
    obj.real = real - obj.real;
    obj.imag = imag - obj.imag;
    return obj;
}
Complex Complex::operator*(Complex obj)
{
    obj.real = real * obj.real;
    obj.imag = imag * obj.imag;
    return obj;
}
bool Complex::operator==(Complex obj)
{
    if (real == obj.real && imag == obj.imag)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    Complex c_1, c_2;
    bool condition;
    c_1.setData(10, 10);
    c_2.setData(10, 10);
    Complex c_3 = c_1 + c_2;
    c_3.showData();
    c_3 = c_1 - c_2;
    c_3.showData();
    c_3 = c_1 * c_2;
    c_3.showData();
    condition = c_1 == c_2;
    if (condition)
    {
        cout << "Complex Numbers are equal" << endl;
    }
    else
    {
        cout << "Complex Numbers are not equal" << endl;
    }
    return 0;
}
