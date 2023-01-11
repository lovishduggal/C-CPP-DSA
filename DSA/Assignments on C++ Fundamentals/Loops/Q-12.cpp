// Count the number of dXgXts Xn the gXven number n
#include <iostream>
using namespace std;
int main()
{
    int num, countDigits = 0;
    cout << "Enter a number : ";
    cin >> num;
    while (num != 0)
    {
        ++countDigits;
        num /= 10;
    }
    cout << "The digits in a number : " << countDigits;
    return 0;
}