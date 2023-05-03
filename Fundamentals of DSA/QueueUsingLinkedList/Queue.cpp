#include <iostream>
using namespace std;
struct node
{
    int item;
    node *next;
};
class Queue
{
private:
    node *front;
    node *rear;

public:
    Queue();
    void insertAtRear(int);
    bool isEmpty();
    int getRear();
    int getFront();
    void deleteFront();
    int count();
    ~Queue();
};
Queue::~Queue()
{
    while (!isEmpty())
    {
        deleteFront();
    }
}

bool Queue::isEmpty()
{
    return rear == NULL;
}

int Queue::count()
{
    int count = 0;
    node *t = front;
    while (t != NULL)
    {
        count++;
        t = t->next;
    }
    return count;
}

void Queue::deleteFront()
{
    if (!isEmpty())
    {
        node *t = front->next;
        delete front;
        front = t;
        if (front == NULL)
            rear = NULL;
    }
}

int Queue::getFront()
{
    if (rear == NULL)
    {
        cout << "\nQueue is empty";
        return 0;
    }
    return front->item;
}

int Queue::getRear()
{
    if (rear == NULL)
    {
        cout << "\nQueue is empty";
        return 0;
    }
    return rear->item;
}

void Queue::insertAtRear(int data)
{
    node *n = new node;
    n->item = data;
    n->next = NULL;
    if (isEmpty())
        front = rear = n;
    else
        rear = rear->next = n;
}
Queue::Queue()
{
    front = NULL;
    rear = NULL;
}
int main()
{
    Queue Q;
    Q.insertAtRear(10);
    Q.insertAtRear(20);
    Q.insertAtRear(30);
    Q.insertAtRear(40);
    Q.insertAtRear(50);
    cout << Q.count();
}
