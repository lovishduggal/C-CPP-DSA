#include <iostream>
using namespace std;
struct node
{
    int item;
    node *next;
};
class CLL
{
private:
    node *last;

public:
    CLL();
    void insertFirst(int);
    void insertLast(int);
    node *search(int);
    void insertAfter(node *, int);
    void deleteFirst();
    void deleteLast();
    void deleteNode(node *);
    void displayItems();
    ~CLL()
    {
        while (last)
        {
            deleteFirst(); //! esko Dry run karo!!
        }
    }
};
void CLL::displayItems()
{
    if (last)
    {
        node *t = last->next;
        do
        {
            cout << t->item << " ";
            t = t->next;
        } while (t != last->next);
    }
    else
    {
        cout << "List is Empty!!";
    }
}
void CLL::deleteNode(node *ptr)
{
    if (ptr)
    {
        node *t = last->next;
        while (t->next != ptr)
            t = t->next;
        if (t->next == last)
            deleteLast();
        else
        {
            t->next = ptr->next;
            delete ptr;
        }
        ptr = NULL;
    }
    else
    {
        cout << "\nUnderflow!!";
    }
}
void CLL::deleteLast()
{
    if (last)
    {
        node *t = last;
        while (t->next != last)
            t = t->next;
        if (t == last)
        {
            delete last;
            last = NULL;
        }
        else
        {
            t->next = last->next;
            delete last;
            last = t;
        }
    }
    else
    {
        cout << "\nUnderflow !!";
    }
}
void CLL::deleteFirst()
{
    if (last)
    {
        node *r = last->next;
        if (last->next == last)
            last = NULL;
        else
            last->next = r->next;
        delete r;
    }
    else
    {
        cout << "\nUnderflow !!";
    }
}
void CLL::insertAfter(node *ptr, int data)
{
    if (last && ptr)
    {
        node *n = new node;
        n->item = data;
        n->next = ptr->next;
        ptr->next = n;
        if (last == ptr)
            last = n;
    }
    else
    {
        cout << "\n node is not founded or list is empty";
    }
}

node *CLL::search(int data)
{
    if (last)
    {
        node *t = last->next;
        while (t != last)
        {
            if (t->item == data)
                return t;
            t = t->next;
        }
        if (t->item == data)
            return t;
    }
    return NULL;
}
void CLL::insertLast(int data)
{
    node *n = new node;
    n->item = data;
    if (last)
    {
        n->next = last->next;
        last->next = n;
    }
    else
    {
        n->next = n;
    }
    last = n;
}
void CLL::insertFirst(int data)
{
    node *n = new node;
    n->item = data;
    if (last)
    {
        n->next = last->next;
        last->next = n;
    }
    else
    {
        n->next = n;
        last = n;
    }
}
CLL::CLL()
{
    last = NULL;
}
int main()
{
    CLL obj;
    obj.insertFirst(10);
    // obj.insertFirst(20);
    // obj.insertFirst(30);
    // obj.insertFirst(40);
    // obj.insertFirst(50);
    obj.displayItems();
    obj.deleteNode(obj.search(10));
    cout
        << endl;
    obj.displayItems();
}
