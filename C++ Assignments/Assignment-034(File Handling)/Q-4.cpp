// Write a program to copy the contents of one text file to another while changing the
// case of every alphabet.
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("Q-4_text-1.txt", ios::in | ios::binary);
    try
    {
        if (!fin)
        {
            throw "File does not exit";
            exit(0);
        }
        // fout.seekp(0);
        char ch;
        ch = fin.get();
        fout.open("Q-4_text-2.txt", ios::out | ios::binary);
        getch();
        while (!fin.eof())
        {
            if (ch >= 'A' && ch <= 'Z')
            {
                ch = tolower(ch);
            }
            else if (ch >= 'a' && ch <= 'z')
            {
                ch = toupper(ch);
            }
            fout << ch;
            ch = fin.get();
        }
        fin.close();
        fout.close();
    }
    catch (const char str[])
    {
        cout << str << endl;
    }
}