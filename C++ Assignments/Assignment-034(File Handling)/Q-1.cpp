// Write a C++ program to create a file and print “File created successfully” and throw
// an error if file is not created.
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("Q-1_text.txt", ios::in | ios::binary);
    try
    {
        if (!fin)
        {
            throw "\nFile does not exit !!";
            exit(0);
        }
        else
        {
            cout << "File created sucessfully !!";
        }
    }
    catch (const char str[])
    {
        cout << str << endl;
    }
}