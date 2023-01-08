// Print the first multiple of 5 which is also a multiple of 7
#include <iostream>
using namespace std;
int main()
{
    int i = 7;
    while (1)
    {
        if ((i % 5 == 0) && (i % 7 == 0))
        {
            break;
        }
        i += 7;
    }
    cout << "The first multiple of 5 which is also a multiple of 7 : " << i << endl;
    return 0;
}