// Print the first k multiples of a number n.
#include <iostream>
using namespace std;
int main()
{
    int k, n;
    cout << "Enter n : ";
    cin >> n;
    cout << "Enter K : ";
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    return 0;
}