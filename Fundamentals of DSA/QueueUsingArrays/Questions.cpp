#include <iostream>
using namespace std;
class QUEUE
{
private:
    int capacity, front, rear;
    int *ptr;

public:
    QUEUE(int);
    QUEUE(QUEUE &);
    void insertAtRear(int);
    int getRear();
    int getFront();
    void deleteFromFront();
    bool isFull();
    bool isEmpty();
    int count();
    QUEUE &operator=(QUEUE &);
    ~QUEUE();
};
QUEUE::~QUEUE()
{
    delete[] ptr;
}
QUEUE &QUEUE::operator=(QUEUE &Q)
{
    capacity = Q.capacity;
    front = Q.front;
    rear = Q.rear;
    if (ptr != NULL)
        delete[] ptr;
    ptr = new int[capacity];
    int n = Q.count();
    int i = Q.front;
    while (n)
    {
        ptr[i] = Q.ptr[i];
        if (i == capacity - 1)
            i = 0;
        else
            i++;
        n--;
    }
    return *this;
}

int QUEUE::count()
{
    if (isEmpty())
        return 0;
    else if (front <= rear)
        return rear - front + 1;
    return capacity - front + rear + 1;
}

bool QUEUE::isEmpty()
{
    return rear == -1;
}
bool QUEUE::isFull()
{
    return ((front == 0 && rear == capacity - 1) || (front - 1 == rear));
}
void QUEUE::deleteFromFront()
{
    if (isEmpty())
    {
        cout << "\nQueue is Underflow!!";
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == capacity - 1)
    {
        front = 0;
    }
    else
    {
        ++front;
    }
}

int QUEUE::getFront()
{
    if (isEmpty())
    {
        cout << "\nQUEUE is Empty ";
        return 0;
    }
    return ptr[front];
}

int QUEUE::getRear()
{
    if (isEmpty())
    {
        cout << "\nQUEUE is Empty ";
        return 0;
    }
    return ptr[rear];
}
void QUEUE::insertAtRear(int data)
{
    if (isFull())
    {
        cout << "QUEUE is Overflow!!" << endl;
    }
    else if (isEmpty())
    {
        front = rear = 0;
        ptr[rear] = data;
    }
    else if (rear == capacity - 1)
    {
        rear = 0;
        ptr[rear] = data;
    }
    else
    {
        ptr[++rear] = data;
    }
}
QUEUE::QUEUE(QUEUE &Q)
{
    capacity = Q.capacity;
    front = Q.front;
    rear = Q.rear;
    ptr = new int[capacity];
    int n = Q.count();
    int i = Q.front;
    while (n)
    {
        ptr[i] = Q.ptr[i];
        if (i == capacity - 1)
            i = 0;
        else
            i++;
        n--;
    }
}
QUEUE::QUEUE(int cap)
{
    capacity = cap;
    front = -1;
    rear = -1;
    ptr = new int[cap];
}

int main()
{
    QUEUE Q(5);
    Q.insertAtRear(10);
    Q.insertAtRear(20);
    Q.insertAtRear(30);
    Q.insertAtRear(40);
    Q.insertAtRear(50);
    QUEUE Q1 = Q;
    Q1.deleteFromFront();
    cout << Q.count() << endl;
    cout << Q1.count() << endl;
    cout
        << Q.getFront() << endl;
    cout << Q.getRear() << endl;
    return 0;
}