// Define a class Square to find the square of a number and write a C++ program to
// Count number of times a function is called.
#include<iostream>
using namespace std;
class square
{
    private:
    int num, numResult;
    static int c;
    public:
    void setNum(int x)
    {
        num = x;
    }
    int getNum(int x)
    {
       return  num;
    }
    void calc()
    {
        numResult = num * num;
        c++;
    }
    int getSquare()
    {
      return  numResult;
    }
    static int count()
    {
        return c;
    }
     static void display()
    {
        cout << c << " " << "time sqaure function call";
    }
};
int square::c = 0;


int main()
{
    square s_1;
    s_1.setNum(5);
    s_1.calc();
    s_1.setNum(3);
    s_1.calc();
    cout << s_1.getSquare() << endl;
    square::display();
    return 0;
}