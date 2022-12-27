// Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
// functions to support Invent1 to float and Invent1 to Invent2 type.
// Example -
// int main()
// {
// Invent1 s1=(4,5);
// Invent2 d1;
// float tv;
// tv=s1;
// d1=s1;
// return 0;
// }
#include <iostream>
using namespace std;
class Invent1
{
private:
    int a, b;

public:
    Invent1(int x, int y)
    {
        a = x;
        b = y;
    }
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << a << " and " << b;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
    operator float()
    {
        return a + b;
    }
};
class Invent2
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
        cout << a << " and " << b;
    }
    Invent2 operator=(Invent1 I)
    {
        Invent2 temp;
        a = I.getA();
        b = I.getB();
        return temp;
    }
};
int main()
{
    Invent1 s1(4, 5);
    Invent2 d1;
    float tv;
    tv = s1;
    d1 = s1;
    cout << tv << endl;
    d1.showData();
    return 0;
}