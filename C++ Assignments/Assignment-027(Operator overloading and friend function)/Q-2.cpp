// Write a C++ program to overload unary operators that is increment and decrement.#
#include <iostream>
using namespace std;
class Numbers
{
private:
    int Num;

public:
    void setNum(int n)
    {
        Num = n;
    }
    int getNum()
    {
        return Num;
    }
    int operator++()
    {
        return ++Num;
    }
    int operator++(int)
    {
        return Num++;
    }
    int operator--()
    {
        return --Num;
    }
    int operator--(int)
    {
        return Num--;
    }
};
int main()
{
    Numbers n_1;
    int check;
    n_1.setNum(5);
    check = n_1.operator++(0); // or n_1++;
    cout << check <<endl;
    n_1.setNum(5);
    check = ++n_1 ;
    cout << check <<endl;
    n_1.setNum(5);
    check = n_1.operator--(0); // or n_1--;
    cout << check << endl;
    n_1.setNum(5);
    check = --n_1 ;
    cout << check << endl;
}