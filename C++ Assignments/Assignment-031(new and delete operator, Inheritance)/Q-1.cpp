// Define a class Person with instance members name and age. Also define member
// functions setName(), setAge(), getName(), getAge(). Now define class Employee by
// inheriting Person class. In the Employee class define empid and salary as instance
// members. Also define setEmpid, setSalary, getEmpid, getSalary.
#include <iostream>
#include <cstring>
using namespace std;
class Person
{
private:
    char name[20];
    int age;

public:
    void setName(const char str[])
    {
        strcpy(name, str);
    }
    void setAge(int x)
    {
        age = x;
    }
    char *getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
};
class Employee : public Person
{
private:
    int empid;
    float salary;

public:
    void setEmpId(int x)
    {
        empid = x;
    }
    void setSalary(int x)
    {
        salary = x;
    }
    int getEmpId()
    {
        return empid;
    }
    float getSalary()
    {
        return salary;
    }
};
int main()
{
    Employee e_1;
    e_1.setName("Lovish Duggal");
    e_1.setAge(20);
    e_1.setEmpId(1);
    e_1.setSalary(1000);
    cout << "The name of Employee is " << e_1.getName()
         << ", his id is " << e_1.getEmpId()
         << ", his age is " << e_1.getAge()
         << " and his salary is " << e_1.getSalary();
}