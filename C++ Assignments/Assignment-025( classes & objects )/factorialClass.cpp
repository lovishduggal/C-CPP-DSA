// Define a class Factorial and define an instance member function to find the Factorial
// of a number using class.
#include <iostream>
using namespace std;
class Factorial
{
    private:
    int num, numResult = 1;
    public:
    void setNum(int);
    int getNum();
    void calc();
    int  getFactorial();
};
void Factorial::setNum(int n)
{
    num = n;
}
int Factorial::getNum()
{
    return num;
}
void Factorial::calc()
{
   int i;
   for ( i = 1; i <= num; i++)
   {
      numResult *= i;
   }
}
int Factorial::getFactorial()
{
    return numResult;
}
int main()
{
    Factorial f_1;
    f_1.setNum(3);
    f_1.calc();
    cout << "The factorial of " << f_1.getNum() << " is " << f_1.getFactorial();
    return 0;
}