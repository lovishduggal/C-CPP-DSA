// Write class declarations and member function definitions for a C++ base
// class to represent an Employee (emp-code, name).
// Derive two classes as Fulltime (daily rate, number of days, salary) and
// Parttime (number of working hours, hourly rate, salary).

#include <iostream>
#include <cstring>
using namespace std;
class Employee
{
private:
    int empCode;
    char name[20];

public:
    void setEmpCode()
    {
        int x;
        cin >> x;
        empCode = x;
    }
    void setName()
    {
        char str[20];
        cin.getline(str, 20);
        strcpy(name, str);
    }
    int getEmpCode()
    {
        return empCode;
    }
    char *getName()
    {
        return name;
    }
};
class Fulltime : public Employee
{
private:
    float dailyRate;
    int numberOfDays;
    float FullSalary;

public:
    void setDailyRate()
    {
        float x;
        cin >> x;
        dailyRate = x;
    }
    void setNumberOfDays()
    {
        int x;
        cin >> x;
        numberOfDays = x;
    }
    void setFullSalary()
    {
        float x;
        cin >> x;
        FullSalary = x;
    }
    float getDailyRate()
    {
        return dailyRate;
    }
    int getNumberOfDays()
    {
        return numberOfDays;
    }
    float getFullSalary()
    {
        return FullSalary;
    }
};
class Parttime : public Employee
{
private:
    float noOfWrkHrs;
    float hrRate;
    float PartSalary;

public:
    void setNoOfWrkHrs()
    {
        float x;
        cin >> x;
        noOfWrkHrs = x;
    }
    void setHrRate()
    {
        int x;
        cin >> x;
        hrRate = x;
    }
    void setPartSalary()
    {
        float x;
        cin >> x;
        PartSalary = x;
    }
    float getNoOfWrkHrs()
    {
        return noOfWrkHrs;
    }
    float getHrRate()
    {
        return hrRate;
    }
    float getPartSalary()
    {
        return PartSalary;
    }
};
void input(Fulltime &Emp)
{
    cout << "----------------------------" << endl;
    cin.ignore();
    cout << "Enter Name : ";
    Emp.setName();
    cout << "Enter Id : ";
    Emp.setEmpCode();
    cout << "Enter Salary : ";
    Emp.setFullSalary();
    cout << "----------------------------" << endl;
}
void output(Fulltime &Emp)
{
    cout << endl
         << endl
         << "The Detail of Full-Time Employee are : " << endl;
    cout << "----------------------------" << endl;
    cout << "Name : ";
    cout << Emp.getName() << endl;
    cout << "Employee Id : ";
    cout << Emp.getEmpCode() << endl;
    cout << "Employe Salary : ";
    cout << Emp.getFullSalary() << endl;
    cout << "----------------------------" << endl;
}
void input(Parttime &Emp)
{
    cout << "----------------------------" << endl;
    cin.ignore();
    cout << "Enter Name : ";
    Emp.setName();
    cout << "Enter Id : ";
    Emp.setEmpCode();
    cout << "Enter Salary : ";
    Emp.setPartSalary();
    cout << "----------------------------" << endl;
}
void output(Parttime &Emp)
{
    cout << endl
         << "The Detail of Part-Time Employee are : " << endl;
    cout << "----------------------------" << endl;
    cout << "Name : ";
    cout << Emp.getName() << endl;
    cout << "Employee Id : ";
    cout << Emp.getEmpCode() << endl;
    cout << "Employe Salary : ";
    cout << Emp.getPartSalary() << endl;
    cout << "----------------------------" << endl;
}
int main()
{
    Fulltime empFull[10];
    Parttime empPart[10];
    int i, N_1, N_2;
    cout << "No of Full-Time Employee You want to Enter:";
    cin >> N_1;
    for (i = 0; i < N_1; i++)
    {
        input(empFull[i]);
    }
    for (i = 0; i < N_1; i++)
    {
        output(empFull[i]);
    }
    cout << endl
         << endl
         << "No of Part-Time Employee You want to Enter:";
    cin >> N_2;
    for (i = 0; i < N_1; i++)
    {
        input(empPart[i]);
    }
    for (i = 0; i < N_1; i++)
    {
        output(empPart[i]);
    }
    return 0;
}
