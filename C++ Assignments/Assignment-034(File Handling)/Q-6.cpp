// Write a C++ program that counts the total number of characters, words and lines in
// the file.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    int wordCount = 0, lineCount = 0;
    bool con = false;

    fin.open("Q-6_text.txt", ios::binary);
    if (!fin)
    {
        cout << "File does not exit !!" << endl;
    }
    char ch;
    ch = fin.get();
    while (!fin.eof())
    {
        ch = fin.get();
        if (ch == ' ')
        {
            wordCount++;
        }
        else if ((ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') && ((char)fin.get() == '.'))
        {
            con = true;
            fin.seekg(-1, ios::cur);
            cout << "hllo-1" << endl;
            wordCount++;
            lineCount++;
        }
        else
        {
            fin.seekg(-1, ios::cur);
        }
        if (con)
        {
            fin.seekg(-2, ios::cur);
        }
    }
    cout << "The total words and lines in file are : " << wordCount << "," << lineCount << endl;
    fin.close();
}