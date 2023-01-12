// Convert decimal to binary
#include <iostream>
using namespace std;
int main()
{
    int binary = 0, parity, decimal, power = 1;
    cout << "Enter a decimal number : ";
    cin >> decimal;
    while (decimal != 0)
    {
        parity = decimal % 2;
        binary += (parity * power);
        power *= 10;
        decimal = decimal / 2;
    }
    cout << "The conversion of decimal to binary is : " << binary;
    return 0;
}