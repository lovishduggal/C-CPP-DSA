// Define a C++ class fraction
// class fraction
// {
// long numerator;
// long denominator;
// Public:
// fraction (long n=0, long d=0);
// }
// Overload the following operators as member or friend:
// a) Unary ++ (pre and post both)
// b) Overload as friend functions: operators << and >>.

#include <iostream>
using namespace std;
class Fraction
{
private:
    long n;
    long d;

public:
    Fraction()
    {
        n = 0;
        d = 0;
    }
    friend istream &operator>>(istream &, Fraction &);
    friend ostream &operator<<(ostream &, Fraction);
    Fraction operator++(int)
    {
        n++;
        d++;
        return *this;
    }
    Fraction operator++()
    {
        ++n;
        ++d;
        return *this;
    }
};
istream &operator>>(istream &is, Fraction &F)
{
    cout << "Enter numerator:";
    is >> F.n;
    cout << "Enter denominator:";
    is >> F.d;
    return is;
}
ostream &operator<<(ostream &os, Fraction F)
{
    cout << F.n << "/" << F.d << endl;
    return os;
}

int main()
{
    Fraction f_1, f_2;
    cin >> f_1;
    cout << "After Post Increament:" << f_1++;
    cout << "After Pre Increament:" << ++f_1;
    return 0;
}
