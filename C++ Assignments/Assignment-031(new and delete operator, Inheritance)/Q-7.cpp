// In a bank, different customers have savings account. Some customers may
// have taken a loan from the bank. So bank always maintain information about
// bank depositors and borrowers.
// Design a Base class Customer (name, phone-number). Derive a class
// Depositor(accno, balance) from Customer.
// Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
// Write necessary member functions to read and display the details of ‘n’
// customers.
#include <iostream>
#include <cstring>
using namespace std;
class Customer
{
public:
    char name[20];
    char phNum[20];

public:
    void setName()
    {
        char n[20];
        cin.getline(n, 20);
        strcpy(this->name, n);
    }
    void setPhNum()
    {
        char str[20];
        cin.getline(str, 20);
        strcpy(this->phNum, str);
    }
    char *getName()
    {
        return name;
    }
    char *getPhNum()
    {
        return phNum;
    }
};
class Depositer : public Customer
{
public:
    int accNum;
    long double balance;

public:
    void setAccNum()
    {
        int x;
        cin >> x;
        accNum = x;
    }
    void setBalance()
    {
        float y;
        cin >> y;
        balance = y;
    }
    int getAccNum()
    {
        return accNum;
    }
    long double getBalance()
    {
        return balance;
    }
};
class Borrower : public Depositer
{
public:
    int loanNum;
    long double loanAmt;

public:
    void setloanNum()
    {
        int x;
        cin >> x;
        loanNum = x;
    }
    void setloanAmt()
    {
        float y;
        cin >> y;
        loanAmt = y;
    }
    int getloanNum()
    {
        return loanNum;
    }
    long double getloanAmt()
    {
        return loanAmt;
    }
    void input()
    {
        cin.ignore();
        cout << "---------------------------------" << endl;
        cout << "Enter Customer Name : ";
        this->setName();
        cout << "Enter PH : ";
        this->setPhNum();
        cout << "Enter A / c : ";
        this->setAccNum();
        cout << "Enter Balance : ";
        this->setBalance();
        cout << "Enter Loan No : ";
        this->setloanNum();
        cout << "Enter Loan Amount : ";
        this->setloanAmt();
        cout << "---------------------------------" << endl;
    }
    void output()
    {
        cout << endl
             << "Custmor Detail :" << endl;
        cout << "---------------------------------" << endl;
        cout << "Customer Name : ";
        cout << this->getName() << endl;
        cout << "Customer PH : ";
        cout << this->getPhNum() << endl;
        cout << "Customer A/c No. : ";
        cout << this->getAccNum() << endl;
        cout << "---------------------------------" << endl
             << endl;
        cout << "Customer Loan No. : ";
        cout << this->getloanNum() << endl;
        cout << "Customer Loan Amount : ";
        cout << this->getloanAmt() << endl;
        cout << "---------------------------------" << endl;
    }
};

int main()
{
    Borrower cus[50];
    cout << "Enter the No. of customer you wanted to Enter : ";
    int i, N;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cus[i].input();
    }
    for (i = 0; i < N; i++)
    {
        cus[i].output();
    }
    return 0;
}