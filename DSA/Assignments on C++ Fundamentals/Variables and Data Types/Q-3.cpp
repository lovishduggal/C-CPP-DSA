/*
?Write a C++ program to take length and breadth of a rectangle and print its area.
*Sample Input : 7, 4
*Sample Output : 28
*/
#include <iostream>
using namespace std;
int main()
{
    float x, y;
    cout << "Enter length and breadth of reactangle : ";
    cin >> x >> y;
    cout << "The area of rectangle is " << x * y;
    return 0;
}