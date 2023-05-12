#include <iostream>
using namespace std;
struct node
{
    int priorityNo;
    int item;
    node *next;
};
class PriorityQueue
{
private:
    node *start;

public:
    PriorityQueue();
    void insert(int, int);
    void del();
    int highestPriorityElement();
    int highestPriorityNum();
    bool isEmpty();
    ~PriorityQueue();
};

PriorityQueue::~PriorityQueue()
{
    while (start)
    {
        del();
    }
}

bool PriorityQueue::isEmpty()
{
    return start == NULL;
}

int PriorityQueue::highestPriorityNum()
{
    if (start)
        return start->priorityNo;
    return -1;
}

int PriorityQueue::highestPriorityElement()
{
    if (start)
        return start->item;
    return -1;
}

void PriorityQueue::del()
{
    if (start != NULL)
    {
        node *temp = start;
        start = start->next;
        delete temp;
    }
}

void PriorityQueue::insert(int priority, int data)
{
    node *n = new node;
    n->item = data;
    n->priorityNo = priority;
    if (start == NULL)
    {
        n->next = NULL;
        start = n;
    }
    else
    {
        if (n->priorityNo > start->priorityNo)
        {
            n->next = start;
            start = n;
        }
        else
        {
            node *t = start;
            while (t->next != NULL)
            {
                if (t->next->priorityNo > n->priorityNo)
                    t = t->next;
                else
                    break;
            }
            n->next = t->next;
            t->next = n;
        }
    }
}
PriorityQueue::PriorityQueue()
{
    start = NULL;
}
int main()
{
    PriorityQueue pq;
    pq.insert(10, 7);
    pq.insert(28, 2);
    pq.insert(19, 22);
    pq.del();
    cout << pq.highestPriorityElement() << endl;
    cout << pq.highestPriorityNum() << endl;
    return 0;
}