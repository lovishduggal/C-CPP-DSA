// Print n factorial numbers
#include <iostream>
using namespace std;
int main()
{
    int num, fact = 1;
    cout << "Enter nth number : ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
        cout << "Factorial of " << i << " is : " << fact << endl;
    }
    return 0;
}