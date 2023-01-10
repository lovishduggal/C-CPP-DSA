/*
Write a program to reverse a given integer number.
Sample Input : 538
Sample Output : 835
*/
#include <iostream>
using namespace std;
int main()
{
    int N, sum = 0;
    cout << "Enter Integer number : ";
    cin >> N;
    while (N != 0)
    {
        sum = (sum * 10) + (N % 10);
        N = N / 10;
    }
    cout << "The reverse is " << sum << endl;
    return 0;
}