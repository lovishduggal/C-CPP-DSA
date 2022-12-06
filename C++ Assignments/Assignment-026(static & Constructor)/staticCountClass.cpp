// Define a class StaticCount and create a static variable. Increment this variable in a
// function and call this 3 times and display the result.
#include <iostream>
using namespace std;
class staticCount
{
private:
    static int count;

public:
     static void c()
     {
        count++;
     }
     static void displayCount()
     {
        cout << "The value of count is " << count << endl;
     }
};
int staticCount::count = 0;
int main()
{
    staticCount::c();
    staticCount::c();
    staticCount::c();
    staticCount::displayCount();
}