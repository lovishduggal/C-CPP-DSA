// Write a C++ program to calculate the percentage of a student using multi-level
// inheritance. Accept the marks of three subjects in base class. A class will be derived
// from the above mentioned class which includes a function to find the total marks
// obtained and another class derived from this class which calculates and displays the
// percentage of students.
#include <iostream>
using namespace std;
class Base
{
protected:
    float maths, phy, chm;

public:
    void setMarks(float x, float y, float z)
    {
        maths = x;
        phy = y;
        chm = z;
    }
};
class Derived_1 : public Base
{
protected:
    float total;

public:
    void totalMarks()
    {
        total = maths + phy + chm;
    }
};
class Derived_2 : public Derived_1
{
protected:
    float percentage;

public:
    void perCalc()
    {
        percentage = (total / 300) * 100;
    }
    float getPer()
    {
        return percentage;
    }
};
int main()
{
    Derived_2 s_1;
    s_1.setMarks(90, 90, 80);
    s_1.totalMarks();
    s_1.perCalc();
    cout << "The percentage of marks is " << s_1.getPer();
}
