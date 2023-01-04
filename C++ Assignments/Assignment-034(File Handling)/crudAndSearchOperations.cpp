#include <iostream>
#include <fstream>
#include <cstring>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class Book
{
private:
    int id;
    char name[20];
    float price;

public:
    void getBookData();
    void showBookData();
    void insertBookData();
    void viewBooksData();
    void searchBookByName(const char *);
    void deleteBookByName(const char *);
    void updateBookByName(const char *);
};
void Book::getBookData()
{
    cout << "Enter Book Id, Book Name & Book Price : ";
    cin >> id;
    cin.ignore();
    cin.getline(name, 20);
    cin >> price;
}
void Book::showBookData()
{
    cout
        << id << " " << name << " " << price << endl;
}
void Book::insertBookData()
{
    ofstream fout;
    fout.open("BookRecords.dat", ios::out | ios::app | ios::binary);
    fout.write((char *)this, sizeof(*this));
    fout.close();
}
void Book::viewBooksData()
{
    ifstream fin;
    fin.open("BookRecords.dat", ios::binary);
    if (!fin)
    {
        cout << "File does not exit !!" << endl;
    }
    fin.read((char *)this, sizeof(*this));
    while (!fin.eof())
    {
        showBookData();
        fin.read((char *)this, sizeof(*this));
    }
    fin.close();
}
void Book::searchBookByName(const char *str)
{
    ifstream fin;
    fin.open("BookRecords.dat", ios::binary);
    if (!fin)
    {
        cout << "File does not exit !!" << endl;
    }
    fin.read((char *)this, sizeof(*this));
    while (!fin.eof())
    {
        if (!strcmp(str, name))
            showBookData();
        fin.read((char *)this, sizeof(*this));
    }
    fin.close();
}
void Book::deleteBookByName(const char *str)
{
    ifstream fin;
    ofstream fout;
    fin.open("BookRecords.dat", ios::binary);
    if (!fin)
    {
        cout << "File does not exit !!" << endl;
        exit(0);
    }
    fin.read((char *)this, sizeof(*this));
    fout.open("temp.dat", ios::out | ios::app | ios::binary);
    while (!fin.eof())
    {
        if (strcmp(str, name))
            fout.write((char *)this, sizeof(*this));
        fin.read((char *)this, sizeof(*this));
    }
    fin.close();
    fout.close();
    remove("BookRecords.dat");
    rename("temp.dat", "BookRecords.dat");
}
void Book::updateBookByName(const char *str)
{
    fstream file;
    file.open("BookRecords.dat", ios::out | ios::in | ios::ate | ios::binary);
    file.seekg(0);
    if (!file)
    {
        cout << "File does not exit !!" << endl;
        exit(0);
    }
    file.read((char *)this, sizeof(*this));
    while (!file.eof())
    {
        if (!strcmp(str, name))
        {
            getBookData();
            int sizeOfobj = sizeof(*this);
            file.seekp(-sizeOfobj, ios::cur);
            file.write((char *)this, sizeof(*this));
        }
        file.read((char *)this, sizeof(*this));
    }
    file.close();
}
int menuDriven()
{
    int choice;
    cout << "1.Get Book Data" << endl;
    cout << "2.View Books Data" << endl;
    cout << "3.Search Book" << endl;
    cout << "4.Delete Book" << endl;
    cout << "5.Update Book" << endl;
    cout << "6.Exit" << endl;
    cin >> choice;
    return choice;
}
int main()
{
    Book BookData;
    char name[20];
    while (1)
    {
        system("cls");
        switch (menuDriven())
        {
        case 1:
            BookData.getBookData();
            BookData.insertBookData();
            getch();
            break;
        case 2:
            BookData.viewBooksData();
            getch();
            break;
        case 3:
            cout << "Enter Book Name to search : ";
            cin.ignore();
            cin.getline(name, 20);
            BookData.searchBookByName(name);
            getch();
            break;
        case 4:
            cout << "Enter Book Name to Delete : ";
            cin.ignore();
            cin.getline(name, 20);
            BookData.deleteBookByName(name);
            getch();
            break;
        case 5:
            cout << "Enter Book Name to Update : ";
            cin.ignore();
            cin.getline(name, 20);
            BookData.updateBookByName(name);
            getch();
            break;
        case 6:
            cout << "Thanks for use this application !!" << endl;
            cout << "Press any Key to exit";
            getch();
            exit(0);
            break;
        default:
            cout << "\nInvalid choice";
            getch();
            break;
        }
    }
}