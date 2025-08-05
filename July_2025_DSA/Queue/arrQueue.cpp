#include "arrQueue.h"

Queue::Queue(int cap)
{
    arr = new int[cap];
    front = 0;
    rear = 0;
    size = 0;
    capacity = cap;
}

bool Queue::enqueue(int val)
{
    if (capacity == size)
    {
        cerr << "Queue is full...\n";
        return false;
    }
    arr[rear] = val;
    rear++;
    size++;
    return true;
}

int Queue::dequeue()
{
    if (size == 0)
    {
        cerr << "Queue is Empty...\n";
        return 0;
    }
    int element = arr[front];
    front++;
    size--;
    return element;
}

bool Queue::isEmpty()
{
    return size == 0;
}

int Queue::peek()
{
    if (isEmpty())
    {
        return 0;
    }
    int element = arr[front];
    return element;
}

Queue::~Queue()
{
    delete[] arr;
}

CirArrQueue::CirArrQueue(int cap)
{
    arr = new int[cap];
    rear = front = 0;
    size = 0;
    capacity = cap;
}

bool CirArrQueue::isEmpty()
{
    return size == 0;
}

bool CirArrQueue::isFull()
{
    return size == capacity;
}

void CirArrQueue::enqueue(int value)
{
    if (isFull())
    {
        cerr << "Queue is Full Can not enqueue....\n";
        return;
    }
    arr[rear] = value;
    rear = (rear + 1) % capacity;
    size++;
}

int CirArrQueue::dequeue()
{
    if (isEmpty())
    {
        cerr << "Nothing to dequeue its Empty...\n ";
        return 0;
    }
    int element = arr[front];
    front = (front + 1) % capacity;
    size--;
    return element;
}

int CirArrQueue::peek()
{
    if (isEmpty())
    {
        cerr << "Queue is Empty..";
        return -1;
    }
    return arr[front];
}

CirArrQueue::~CirArrQueue()
{
    delete[] arr;
}

Node::Node(int val)
{
    value = val;
    Next = nullptr;
}

LLQueue::LLQueue()
{
    rear = front = NULL;
    size = 0;
}

bool LLQueue::isEmpty()
{
    return front == NULL;
}

void LLQueue::enqueue(int val)
{
    if (isEmpty())
    {
        front = rear = new Node(val);
        size++;
        return;
    }
    else
    {
        rear->Next = new Node(val);
        rear = rear->Next;
        size++;
    }
}

int LLQueue::dequeue()
{
    if (isEmpty())
    {
        cerr << "Queue is underflow...\n";
        return -1;
    }
    auto element = front->value;
    Node *temp = front;
    front = front->Next;
    size--;
    delete temp;
    return element;
}

void LLQueue::display()
{
    Node *temp = front;
    cout << "Queue Data: ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->Next;
    }
}

LLQueue::~LLQueue()
{
    while (!isEmpty())
    {
        dequeue();
    }
}
