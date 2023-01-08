// Tell if the number in the input is prime or not
#include <iostream>
using namespace std;
int main()
{
    int number, i;
    cout << "Enter a number : ";
    cin >> number;
    for (i = 2; i <= number; i++)
    {
        if (number % i == 0)
            break;
    }
    if (i == number)
    {
        cout << "You entered a prime number.";
    }
    else
    {
        cout << "Not a prime number.";
    }
    return 0;
}