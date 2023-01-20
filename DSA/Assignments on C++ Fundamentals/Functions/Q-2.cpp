/*
Given radius of a circle. Write a function to print the area and circumference of the circle.
Sample Input: r=3
Sample Output: Area : 28.26
Circumference : 18.84
*/
#include <iostream>
using namespace std;
double area(int x)
{
    double area;
    area = 3.14 * x * x;
    return area;
}
double circum(int x)
{
    double crcm;
    crcm = 2 * 3.14 * x;
    return crcm;
}
int main()
{
    int r;
    cout << "Enter circle radius : ";
    cin >> r;
    cout << "The area of circle is " << area(r) << endl;
    cout << "The circumference of circle is " << circum(r);
    return 0;
}