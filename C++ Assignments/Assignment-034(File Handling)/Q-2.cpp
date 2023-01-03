// Write a C++ program to read a text file and count the number of characters in it.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("Q-2_text.txt", ios::in | ios::binary);
    try
    {
        if (!fin)
        {
            throw "File does not exit !!";
            exit(0);
        }
        else
        {
            cout << "File created successfully !!" << endl;
        }
        char ch;
        int count = 1;
        ch = fin.get();
        while (!fin.eof())
        {
            cout << ch;
            ch = fin.get();
            count++;
        }
        cout << endl
             << "The total numbers of characters are : " << count - 1;
    }
    catch (const char str[])
    {
        cout << str << endl;
    }
}