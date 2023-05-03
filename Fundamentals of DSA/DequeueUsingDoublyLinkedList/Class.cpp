#include <iostream>
using namespace std;
struct node
{
    node *prev;
    int item;
    node *next;
};

class Dequeue
{
private:
    node *front;
    node *rear;

public:
    Dequeue()
    {
        front = NULL;
        rear = NULL;
    }
    void insertFront(int);
};
void Dequeue::insertFront(int data)
{
    node *n = new node;
    n->item = data;
    n->prev = NULL;
    n->next = front;
    front = n;
}
