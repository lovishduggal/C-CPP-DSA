#include <iostream>
#include <fstream>
#include <cstring>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
class Book
{
private:
    int bookid;
    char title[20];
    float price;

public:
    Book()
    {
        bookid = 0;
        strcpy(title, "No title");
        price = 0;
    }
    void getBookData();
    void showBookData();
    int storeBookData();
    void viewBooksData();
    void searchBookByTitle(const char *);
    void deleteBookByTitle(const char *);
    void updateBookByTitle(const char *);
};
void Book::getBookData()
{
    cout << "Enter book id : ";
    cin >> bookid;
    cout << "Enter book name : ";
    cin.ignore(); //! clear the buffer
    cin.getline(title, 20);
    cout << "Enter price : ";
    cin >> price;
}
void Book::showBookData()
{
    cout << "Bookid : " << bookid << endl
         << "Book name : " << title << endl
         << "Book price : " << price << endl;
}
int Book::storeBookData()
{
    if (bookid == 0 && price == 0)
    {
        cout << "Book record is not intialized !!" << endl;
        return 0;
    }
    ofstream fout;
    fout.open("bookRecord.txt", ios::app | ios::binary);
    fout.write((char *)this, sizeof(*this)); //! This function help us to write data in file
    fout.close();                            //! This function helps us to store data in the hard disk bookRecord.txt file from the bookRecord.txt file which is opened in RAM.
    return 1;
}
void Book::viewBooksData()
{
    ifstream fin;
    fin.open("bookRecord.txt", ios::in | ios::binary);
    if (!fin)
    {
        cout << "\n File not found !!" << endl;
    }
    else
    {
        fin.read((char *)this, sizeof(*this));
        while (!fin.eof())
        {
            this->showBookData();
            fin.read((char *)this, sizeof(*this)); //! This function help us to read data from file
        }
    }
    fin.close();
}
void Book::searchBookByTitle(const char *str)
{
    ifstream fin;
    int flag = 0;
    fin.open("bookRecord.txt", ios::in | ios::binary);
    if (!fin)
    {
        cout << "\n File not found !!" << endl;
    }
    else
    {
        fin.read((char *)this, sizeof(*this));
        while (!fin.eof())
        {
            if (!strcmp(str, title))
            {
                this->showBookData();
                flag++;
            }
            fin.read((char *)this, sizeof(*this)); //! This function help us to read data from file
        }
    }
    if (flag == 0)
        cout << "Book not found !!" << endl;
    fin.close();
}
void Book::deleteBookByTitle(const char *str)
{
    ifstream fin;
    ofstream fout;
    fin.open("bookRecord.txt", ios::in | ios::binary);
    if (!fin)
    {
        cout << "Book Not found" << endl;
    }
    else
    {
        //? getch();
        fout.open("temp.txt", ios::out | ios::binary);
        fin.read((char *)this, sizeof(*this));
        while (!fin.eof())
        {
            if (strcmp(str, title))
                fout.write((char *)this, sizeof(*this));
            fin.read((char *)this, sizeof(*this));
        }
        fin.close();
        fout.close();
        //? getch();
        remove("bookRecord.txt");
        //? getch();
        rename("temp.txt", "bookRecord.txt");
    }
}
void Book::updateBookByTitle(const char *str)
{
    fstream file;
    file.open("bookRecord.txt", ios::in | ios::out | ios::ate | ios::binary);
    file.seekg(0); //! May our put pointer points end of the file.
    file.read((char *)this, sizeof(*this));
    while (!file.eof())
    {
        if (!strcmp(str, title))
        {
            getBookData();
            int sizeOfObj = sizeof(*this);
            file.seekp(-sizeOfObj, ios::cur);
            file.write((char *)this, sizeof(*this));
        }
        file.read((char *)this, sizeof(*this));
    }
    file.close();
}
int menuDriven()
{
    int choice;
    cout << "\n1.Get Book Data";
    cout << "\n2.View Books Data";
    cout << "\n3.Search Book ";
    cout << "\n4.Delete Book Data";
    cout << "\n5.Update Book Data";
    cout << "\n6.Exit";
    cout << "\nEnter your Choice : ";
    cin >> choice;
    return choice;
}
int main()
{
    Book bookManagement;
    char str[20];
    while (1)
    {
        system("cls");
        switch (menuDriven())
        {
        case 1:
            bookManagement.getBookData();
            bookManagement.storeBookData();
            getch();
            break;
        case 2:
            bookManagement.viewBooksData();
            getch();
            break;
        case 3:
            cout << "\n Enter Book title to search book by : ";
            cin.ignore();
            cin.get(str, 19);
            bookManagement.searchBookByTitle(str);
            getch();
            break;
        case 4:
            cout << "\n Enter Book title to delete the book : ";
            cin.ignore();
            cin.get(str, 19);
            bookManagement.deleteBookByTitle(str);
            getch();
            break;
        case 5:
            cout << "\n Enter Book title to update the book data : ";
            cin.ignore();
            cin.get(str, 19);
            bookManagement.updateBookByTitle(str);
            getch();
            break;
        case 6:
            cout << "\nThanks for using Book Management Application !!";
            cout << "\nPress any key to exit !!";
            getch();
            exit(0);
            break;
        default:
            cout << "\nInvalid choice";
            getch();
            break;
        }
    }
    return 0;
}