/*
?Write a C++ program to swap two numbers with the help of a third variable. (Hard)
*Sample Input : 2, 3
*Sample Output : 3, 2
*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "Enter value of a and b : ";
    cin >> a >> b;
    temp = b;
    b = a;
    a = temp;
    cout << "After Swaping value of a and b : " << a << " " << b;
    return 0;
}