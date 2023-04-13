#include <iostream>
using namespace std;
struct node
{
    node *prev;
    int item;
    node *next;
};
class CDLL
{
private:
    node *start;

public:
    CDLL()
    {
        start = NULL;
    }
    void insertFirst(int);
    void insertLast(int);
    node *search(int);
    void insertAfter(node *, int);
    void display();
    void deleteFirst();
    void deleteLast();
    void deleteNode(node *);
    ~CDLL()
    {
        while (start)
        {
            deleteFirst();
        }
    }
};
void CDLL::deleteNode(node *ptr)
{
    if (ptr)
    {
        if (ptr == start->prev)
            deleteLast();
        else if (ptr == start)
            deleteFirst();
        else
        {
            ptr->next->prev = ptr->prev;
            ptr->prev->next = ptr->next;
            delete ptr;
        }
        ptr = NULL;
    }
}
void CDLL::deleteLast()
{
    if (start)
    {
        node *r = start->prev;
        r->prev->next = start;
        start->prev = r->prev;
        if (start == r)
            start = NULL;
        delete r;
    }
    else
        cout << "\n Underfow !!";
}
void CDLL::deleteFirst()
{
    if (start)
    {
        node *r = start;
        start->prev->next = start->next;
        start->next->prev = start->prev;
        if (start == start->next)
            start = NULL;
        else
            start = start->next;
        delete r;
    }
    else
        cout << "\n Underfow !!";
}
void CDLL::display()
{
    if (start)
    {
        node *t = start;
        do
        {
            cout << t->item << " ";
            t = t->next;
        } while (t != start);
    }
    else
    {
        cout << "\n List is Empty!!";
    }
}
void CDLL::insertAfter(node *ptr, int data)
{
    if (ptr)
    {
        node *n = new node;
        n->item = data;
        n->next = ptr->next;
        n->prev = ptr;
        ptr->next->prev = n;
        ptr->next = n;
    }
    else
    {
        cout << "\nList is Empty or Node is not founded!!";
    }
}
node *CDLL::search(int data)
{
    if (start)
    {
        node *t = start;
        do
        {
            if (t->item == data)
            {
                return t;
            }
            t = t->next;
        } while (t != start);
    }
    return NULL;
}
void CDLL::insertLast(int data)
{
    node *n = new node;
    n->item = data;
    if (start == NULL)
    {
        n->next = n;
        n->prev = n;
        start = n;
    }
    else
    {
        n->next = start;
        n->prev = start->prev;
        start->prev->next = n;
        start->prev = n;
    }
}
void CDLL::insertFirst(int data)
{
    node *n = new node;
    n->item = data;
    if (start == NULL)
    {
        n->next = n;
        n->prev = n;
    }
    else
    {
        n->next = start;
        n->prev = start->prev;
        start->prev->next = n;
        start->prev = n;
    }
    start = n;
}

int main()
{
    CDLL obj;
    obj.display();
}