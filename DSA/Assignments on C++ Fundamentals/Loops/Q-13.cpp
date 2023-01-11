// Find the sum of the following series
#include <iostream>
using namespace std;
int main()
{
    int num, result = 0;
    cout << "Enter a number : ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            result -= i;
        }
        else
        {
            result += i;
        }
    }
    cout << "The sum of series is " << result;
    return 0;
}