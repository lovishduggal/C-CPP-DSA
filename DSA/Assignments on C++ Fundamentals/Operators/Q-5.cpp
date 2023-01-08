// Write a program to calculate the sum of digits of a 3 digit number.
// Sample Input : 123
// Sample Output : 6
#include <iostream>
using namespace std;
int main()
{
    int sum = 0, num;
    cout << "Enter a three dugit Number : ";
    cin >> num;
    while (num != 0)
    {
        sum += (num % 10);
        num /= 10;
    }
    cout << "The sum is " << sum;
    return 0;
}
