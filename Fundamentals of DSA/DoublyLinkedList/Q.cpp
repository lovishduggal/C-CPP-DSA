#include <iostream>
using namespace std;
struct node
{
    node *prev;
    int item;
    node *next;
};
class DLL
{
private:
    node *start;

public:
    DLL();
    void insertFirst(int);
    void insertLast(int);
    node *search(int);
    void deleteFirst();
    void deleteLast();
    void deleteNode(node *);
    void display();
    ~DLL();
};
void DLL::display()
{
    node *t = start;
    if (start)
    {
        while (t != NULL)
        {
            cout << t->item << " ";
            t = t->next;
        }
    }
    else
    {
        cout << 0;
    }
}
DLL::~DLL()
{
    while (start)
        deleteFirst();
}

void DLL::deleteNode(node *ptr)
{
    if (start && ptr)
    {
        if (start->next == NULL)
        {
            delete start;
            start = NULL;
        }
        else
        {
            ptr->prev->next = ptr->next;
            if (ptr->next != NULL)
                ptr->next->prev = ptr->prev;
            delete ptr;
        }
    }
    else
    {
        cout << "\n UnderFlow or Item is not founded!!";
    }
}

void DLL::deleteLast()
{
    if (start == NULL)
    {
        cout << "\nUnderFlow!!";
    }
    else if (start->next == NULL)
    {
        delete start;
        start = NULL;
    }
    else
    {
        node *t = start;
        while (t->next->next != NULL)
            t = t->next;
        delete t->next;
        t->next = NULL;
    }
}
void DLL::deleteFirst()
{
    if (start == NULL)
    {
        cout << "\n UnderFlow!!";
    }
    else
    {
        node *t = start;
        start = start->next;
        delete t;
    }
}

node *DLL::search(int data)
{
    if (start)
    {
        node *t = start;
        while (t != NULL)
        {
            if (t->item == data)
                return t;
            t = t->next;
        }
    }
    return NULL;
}

void DLL::insertLast(int data)
{
    node *n = new node;
    n->item = data;
    n->next = NULL;
    node *t = start;
    if (start)
    {
        while (t->next != NULL)
            t = t->next;
        n->prev = t;
        t->next = n;
    }
    else
    {
        n->prev = t;
        start = n;
    }
}
void DLL::insertFirst(int data)
{
    node *n = new node;
    n->item = data;
    n->prev = NULL;
    n->next = start;
    if (start)
    {
        start->prev = n;
    }
    start = n;
}
DLL::DLL()
{
    start = NULL;
}
