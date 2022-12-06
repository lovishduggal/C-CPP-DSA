// Define a class student and write a program to enter student details using constructor
// and define member function to display all the details.
#include <iostream>
#include <string.h>
using namespace std;
class Student
{
private:
    int rollNo;
    char name[20];

public:
    Student(int x, char N[20])
    {
        rollNo = x;
        strcpy(name,N);
    }
    void setRollNo(int y)
    {
        if (y < 0)
            y = -y;
        rollNo = y;
    }
    int getRollNo()
    {
        return rollNo;
    }
    void setName(char n[20]);
    char* getName()
    {
        return name;
    }
    void display()
    {
        cout << "The student name is " << name << " and its roll number is " << rollNo << endl;
    }
};
void Student::setName(char n[20])
{
    strcpy(name, n);
}
int main()
{
    Student s_1(1,"lovish duggal");
    s_1.setName("Lovish");
    s_1.display();
    return 0;
}