// Define a class Counter and Write a program to Show Counter using Constructor.
// just example: Counter contructor evokes itself when obj created.
#include<iostream>
using namespace std;
class Counter
{
private:
    int counter;

public:
    Counter()
    {
        cout << "counter is called !!" <<endl;
    }
};
int main()
{
    Counter obj_1;
    Counter obj_2;
}