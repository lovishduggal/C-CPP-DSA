#include<iostream>
using namespace std;
class Complex
{
    private:
    int real;
    int img;
    public:
    void setData(int x, int y)
    {
        real = x;
        img = y;
    }
    void showData()
    {
        cout<<"The real = "<<real<<" & "<<"img = "<<img<<" part of complex Number";
    }
};

int main()
{
    Complex cNum;
    cNum.setData(5, 4);
    cNum.showData();
    return 0;
}