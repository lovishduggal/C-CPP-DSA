/*
Write a program to find the sum of n natural numbers.
Sample Input : 5
Sample Output : 15
*/
#include <iostream>
using namespace std;
int main()
{
    int N, sum = 0;
    cout << "Enter n : ";
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        sum += i;
    }
    cout << "The sum of first n natural number : " << sum;
    return 0;
}