// Write a C++ program to find the factorial of a number.
#include <iostream>
using namespace std;
class Factorial
{
private:
    int num;
    int fact;

public:
    Factorial(int x)
    {
        num = x;
        fact = 1;
    }
    void calc();
    int getFact()
    {
        return fact;
    }
};
void Factorial::calc()
{
    int i;
    for (size_t i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
}

int main()
{
    Factorial f_1(5);
    f_1.calc();
    cout << "The factorial of 5 is " << f_1.getFact() << endl;
    Factorial f_2 = f_1;
    cout << "The factorial of 5 is " << f_2.getFact();
}