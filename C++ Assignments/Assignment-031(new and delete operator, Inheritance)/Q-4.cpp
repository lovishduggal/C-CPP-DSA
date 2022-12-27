// Write a C++ program to design a base class Person (name, address,
// phone_no). Derive a class Employee (eno, ename) from Person. Derive a
// class Manager (designation, department name, basic-salary) from
// Employee. Write a menu driven program to:
#include <iostream>
#include <cstring>
using namespace std;
class Person
{
private:
    char name[20];
    char address[20];
    char phNum[20];

public:
    void setPersonName(const char str[])
    {
        strcpy(name, str);
    }
    void setAddress()
    {
        char address[20];
        cin.getline(address, 20);
        strcpy(this->address, address);
    }
    void setPhNum()
    {
        char phNum[20];
        cin.getline(phNum, 20);
        strcpy(this->phNum, phNum);
    }
    char *getPersonName()
    {
        return name;
    }
    char *getAddress()
    {
        return address;
    }
    char *getPhNum()
    {
        return phNum;
    }
};
class Employee : public Person
{
private:
    char ename[20];
    int eno;

public:
    void setEmpName()
    {
        char ename[20];
        cin.getline(ename, 20);
        strcpy(this->ename, ename);
    }
    void setEmpId()
    {
        int x;
        cin >> x;
        eno = x;
    }
    char *getEmpName()
    {
        return ename;
    }
};
class Manager : public Employee
{
private:
    char desigination[20];
    char departmentName[20];
    float basicSalary;

public:
    void setDesigination()
    {
        char desigination[20];
        cin.getline(desigination, 20);
        strcpy(this->desigination, desigination);
    }
    void setDepartmentName()
    {
        char departmentName[20];
        cin.getline(departmentName, 20);
        strcpy(this->departmentName, departmentName);
    }
    void setSalary()
    {
        float x;
        cin >> x;
        basicSalary = x;
    }
    char *getDesigination()
    {
        return desigination;
    }
    char *getDepartment()
    {
        return departmentName;
    }
    int getSalary()
    {
        return basicSalary;
    }
    void input()
    {
        cout << "Enter Employee No:";
        this->setEmpId();
        cout << "Enter Name:";
        cin.ignore();
        this->setEmpName();
        cout << "Enter Address:";
        this->setAddress();
        cout << "Enter Ph:";
        this->setPhNum();
        cout << "Enter Desigination:";
        this->setDesigination();
        cout << "Enter Department Name:";
        this->setDepartmentName();
        cout << "Enter Basic Salary:";
        this->setSalary();
        cout << "------------------------------" << endl;
    }
};

// int higSalMan(Manager M[], int N)
// {
// }
int main()
{
    Manager man[50];
    int i, highestSalary, indexNo = -1, N;
    cout << "How many Managers You Want To Enter:";
    cin >> N;
    cin.ignore();
    for (i = 0; i < N; i++)
    {
        man[i].input();
    }
    highestSalary = man[0].getSalary();
    for (i = 0; i < N; i++)
    {
        if (highestSalary <= (man[i].getSalary()))
        {
            highestSalary = (man[i].getSalary());
            indexNo = i;
        }
    }
    cout << "Manager with Highest Salary is : " << man[indexNo].getSalary()
         << " and his name is " << man[indexNo].getEmpName();
}