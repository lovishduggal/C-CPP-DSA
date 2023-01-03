// Write a C++ program to open an output file 'a.txt' and append data to it.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("Q-3_text.txt", ios::out | ios::app | ios::binary);
    fout << " Twitter ";
    fout.close();
    return 0;
}