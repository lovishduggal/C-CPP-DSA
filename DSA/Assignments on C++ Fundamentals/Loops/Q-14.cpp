// calculate the a raise to the power b
#include <iostream>
using namespace std;
int main()
{
    int num, power, result = 1;
    cout << "Enter a number : ";
    cin >> num;
    cout << "Enter power : ";
    cin >> power;
    for (int i = 1; i <= power; i++)
    {
        result *= num;
    }
    cout << "The sum of series is " << result;
    return 0;
}