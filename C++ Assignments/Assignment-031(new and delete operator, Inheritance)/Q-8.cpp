// Consider two base classes
// worker(int code, char name, float salary),
// officer(float DA, HRA)
// class manger(float TA(is 10% of salary), gross salary) is derived from both base
// classes.
// Write necessary member functions.
#include <iostream>
#include <cstring>
using namespace std;
class Worker
{
protected:
    int code;
    char name[20];
    float salary;

public:
    void setCode()
    {
        int code;
        cin >> code;
        this->code = code;
    }
    void setName()
    {
        char name[20];
        cin.getline(name, 20);
        strcpy(this->name, name);
    }
    void setSalary()
    {
        float salary;
        cin >> salary;
        this->salary = salary;
    }
    int getCode()
    {
        return code;
    }
    char *getName()
    {
        return name;
    }
    float getSalary()
    {
        return salary;
    }
};
class Officer
{
private:
    float DA, HRA;

public:
    void setDa()
    {
        float DA;
        cin >> DA;
        this->DA = DA;
    }
    void setHra()
    {
        float HRA;
        cin >> HRA;
        this->HRA = HRA;
    }
    float getDa()
    {
        return DA;
    }
    float getHra()
    {
        return HRA;
    }
};
class Manager : public Worker, Officer
{
private:
    long double TA, salary, grossSalary;

public:
    void setSal()
    {
        float salary;
        cin >> salary;
        this->salary = salary;
    }
    void setTa()
    {
        TA = (10 / 100.0) * salary;
    }
    void setGrossSal()
    {
        this->grossSalary = (salary + TA + this->getHra() + this->getDa());
    }
    long double getTa()
    {
        return TA;
    }
    long double getSal()
    {
        return salary;
    }
    long double getGrossSal()
    {
        return grossSalary;
    }
    void input()
    {
        cout << "Enter Detail : " << endl;
        cout << "--------------------------" << endl;
        cout << "Enter Code : ";
        this->setCode();
        cin.ignore();
        cout << "Enter Name : ";
        this->setName();
        cout << "Enter Salary : ";
        this->setSal();
        cout << "Enter DA : ";
        this->setDa();
        cout << "Enter HRA : ";
        this->setHra();
        this->setTa();
        this->setGrossSal();
        cout << "--------------------------" << endl;
    }
    void output()
    {
        cout << "Detail : " << endl;
        cout
            << "--------------------------" << endl;
        cout << "code : ";
        cout << this->getCode() << endl;
        cout << "Name : ";
        cout << this->getName() << endl;
        cout << "Salary : ";
        cout << this->getSal() << endl;
        cout << "DA : ";
        cout << this->getDa() << endl;
        cout << "HRA : ";
        cout << this->getHra() << endl;
        cout << "Gross Salary : ";
        cout << this->getGrossSal() << endl;
        cout << endl
             << "--------------------------" << endl;
    }
};
int main()
{
    Manager man[50];
    int i, N;
    cout << "Enter No. of Manager Data you want to Enter : ";
    cin >> N;
    for (i = 0; i < N; i++)
    {
        man[i].input();
    }
    for (i = 0; i < N; i++)
    {
        man[i].output();
    }
    return 0;
}