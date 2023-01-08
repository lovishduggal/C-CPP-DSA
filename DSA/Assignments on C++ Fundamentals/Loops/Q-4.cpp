// Print the sum of the stream of N integers in the input using do while loop.
#include <iostream>
using namespace std;
int main()
{
    int N, sum = 0;
    cout << "Enter N : ";
    cin >> N;
    for (int i = 1, num; i <= N; i++)
    {
        cout << "Enter Integer : ";
        cin >> num;
        sum += num;
    }
    cout << "The sum is " << sum;
    return 0;
}