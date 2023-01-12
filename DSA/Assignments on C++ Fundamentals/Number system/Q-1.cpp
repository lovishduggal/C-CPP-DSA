// Convert binary to decimal
// parity or remainder
#include <iostream>
using namespace std;
int main()
{
    int binary, parity, decimal = 0, power = 1;
    cout << "Enter a binary number : ";
    cin >> binary;
    while (binary != 0)
    {
        parity = binary % 10;
        decimal += (parity * power);
        power *= 2;
        binary = binary / 10;
    }
    cout << "The conversion of binary to decimal is : " << decimal;
    return 0;
}