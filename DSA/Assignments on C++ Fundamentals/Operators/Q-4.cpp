// Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.
// Sample Input : 12345
// Sample Output : 1 + 4 = 5
#include <iostream>
using namespace std;
int main()
{
    int i = 1, flag_1 = 2, flag_2 = 5, digit = 0, num, sum = 0;
    cout << "Enter 5 digit Number : ";
    cin >> num;
    while (num != 0)
    {
        digit = num % 10;
        if (i == flag_1)
        {
            sum += digit;
        }
        if (i == flag_2)
        {
            sum += digit;
        }
        num = num / 10;
        i++;
    }
    cout << "The sum is " << sum;
    return 0;
}