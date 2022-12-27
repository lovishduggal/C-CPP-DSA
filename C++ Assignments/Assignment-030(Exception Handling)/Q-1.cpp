// Write a C++ program to demonstrate the use of try, catch block with the argument as an
// integer and string using multiple catch blocks.
// OR
// Write a C++ program to demonstrate try, throw and catch statements.
#include <iostream>
using namespace std;
void demo(int digit)
{
    try
    {
        if (digit >= 0 && digit <= 9)
            throw digit;
        else
            throw "It is not a Digit";
    }
    catch (int d)
    {
        cout << "\n It is a Digit";
    }
    catch (const char str[100])
    {
        cout << str << endl;
    }
}
int main()
{
    int digit;
    cout << "\n Enter a digit: ";
    cin >> digit;
    demo(digit);
    return 0;
}