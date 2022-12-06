// Define a class ReverseNumber and define an instance member function to find
// Reverse of a Number using class.
#include <iostream>
using namespace std;
class reverseNum
{
    private:
    int num, numResult = 0;
    public:
    void setNum(int x)
    {
        num = x;
    }
    int getNum()
    {
        return num;
    }
    void calc();
    int getReverseNum()
    {
        return numResult;
    }
};

void reverseNum::calc()
{
    int digit, n;
    n = num;
    while (n != 0)
    {
        digit =  n % 10;
        numResult = (numResult * 10) + digit;
        n = n / 10;
    }
}

int main()
{
    reverseNum ReverseNum_1;
    ReverseNum_1.setNum(675);
    ReverseNum_1.calc();
    cout << "The reverse number of " << ReverseNum_1.getNum() << " is " << ReverseNum_1.getReverseNum();
    return 0;
}