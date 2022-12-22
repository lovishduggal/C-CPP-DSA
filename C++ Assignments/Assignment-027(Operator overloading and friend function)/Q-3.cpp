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
    void setData(int r, int i)
    {
        real = r;
        imag = i;
    }
    void showData()
    {
        cout << "The complex Number is " << real << " + " << imag << "i" << endl;
    }
    friend Complex operator+(Complex, Complex);
};
Complex operator+(Complex obj_1, Complex obj_2)
{
    obj_1.real = obj_1.real + obj_2.real;
    obj_1.imag = obj_1.imag + obj_2.imag;
    return obj_1;
}

int main()
{
    Complex c_1, c_2, c_3;
    c_1.setData(1,2);
    c_2.setData(3,4);
    c_3 = c_1 + c_2; // or operator+(c_1, c_2);
    c_3.showData();
    return 0;
}
