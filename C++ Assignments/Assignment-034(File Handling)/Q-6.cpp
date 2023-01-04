// Write a C++ program that counts the total number words and lines in
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
    char words[20], line[100];
    while (!fin.eof())
    {
        fin.getline(line, 100);
        lineCount++;
    }
    fin.seekg(0);
    while (!fin.eof())
    {
        fin >> words;
        wordCount++;
    }
    cout << "The total words and lines in file are : " << wordCount << "," << lineCount << endl;
    fin.close();
}
