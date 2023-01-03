// Write a C++ program to merge the two files.
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
    ifstream fin_1, fin_2;
    ofstream fout;
    fin_1.open("Q-5_file_1.txt");
    fin_2.open("Q-5_file_2.txt");
    if (!fin_1 || !fin_2)
    {
        cout << "Files does not exit !!";
        exit(0);
    }
    fout.open("Q-5_file_3.txt");
    getch();
    char ch;
    ch = fin_1.get();
    while (!fin_1.eof())
    {
        fout << ch;
        ch = fin_1.get();
    }
    ch = fin_2.get();
    while (!fin_2.eof())
    {
        fout << ch;
        ch = fin_2.get();
    }
    fin_1.close();
    fin_2.close();
    fout.close();
    return 0;
}