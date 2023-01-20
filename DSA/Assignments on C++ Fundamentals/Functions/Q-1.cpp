/**
 Write a function to print squares of the first 5 natural numbers.
Sample Output: 1 4 9 16 25
*/
#include <iostream>
using namespace std;
void square(int x)
{
    cout << x * x << " ";
}
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        square(i);
    }
    return 0;
}