#include <iostream>
using namespace std;

/**
 * @brief : Queue implimentation with simple Array.
 * @author : Ravi Ranjan Rajak
 * @date : 31-July-2025
 */
class Queue
{
public:
    int *arr;
    int front;
    int rear;
    int size;
    int capacity;
    Queue(int cap)
    {
        arr = new int[cap];
        front = 0;
        rear = 0;
        size = 0;
        capacity = cap;
    }

    bool enqueue(int val)
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

    int dequeue()
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

    bool isEmpty()
    {
        return size == 0;
    }

    int peek()
    {
        if (isEmpty())
        {
            return 0;
        }
        int element = arr[front];
        return element;
    }
    ~Queue()
    {
        delete[] arr;
    }
};

/**
 * @brief : Circular Array implimentation in Queue.
 * @author : Ravi Ranjan Rajak
 * @date : 1-Aug-2025
 */

class CirArrQueue
{

public:
    int *arr;
    int rear, front, size;
    int capacity;
    CirArrQueue(int cap)
    {
        arr = new int[cap];
        rear = front = 0;
        size = 0;
        capacity = cap;
    };

    bool isEmpty()
    {
        return size == 0;
    }

    bool isFull()
    {
        return size == capacity;
    }
    void enqueue(int value)
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

    int dequeue()
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

    int peek()
    {
        if (isEmpty())
        {
            cerr << "Queue is Empty..";
            return -1;
        }
        return arr[front];
    }

    ~CirArrQueue()
    {
        delete[] arr;
    };
};

/**
 * @brief : Linked List based Queue.
 * @date  : 01-Aug-2025
 * @author: Ravi Ranjan Rajak
 *
 */

class Node
{
public:
    int value;
    Node *Next;
    Node(int val)
    {
        value = val;
        Next = nullptr;
    }
};

class LLQueue
{
private:
    Node *rear;
    Node *front;
    

public:
int size;
    LLQueue()
    {
        rear = front = NULL;
        size = 0;
    }

    bool isEmpty()
    {
        return front == NULL;
    }

    void enqueue(int val)
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

    int dequeue()
    {
        if (isEmpty())
        {
            cerr << "Queue is underflow...\n";
            return -1;
        }
        int element = front->value;
        Node *temp = front;
        front = front->Next;
        size--;
        delete temp;
        return element;
    }

    void display()
    {
        Node *temp = front;
        cout << "Queue Data: ";
        while (temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->Next;
        }
    }

    ~LLQueue()
    {
        while (!isEmpty())
        {
            dequeue();
        }
    }
};

int main(int argc, char const *argv[])
{
    // CirArrQueue rirr(5);
    // rirr.enqueue(10);
    // rirr.enqueue(20);
    // rirr.enqueue(30);
    // rirr.enqueue(40);
    // cout << "Front: "  << rirr.dequeue() << endl;
    // cout << "Front: "  << rirr.dequeue() << endl;
    // rirr.enqueue(50);
    // rirr.enqueue(60);
    // cout << "Front: "  << rirr.peek() << endl;
    // rirr.dequeue();
    // rirr.enqueue(70);
    // rirr.enqueue(80);
    // cout << "Front: "  << rirr.peek() << endl;

    LLQueue llq;
    llq.enqueue(10);
    llq.enqueue(20);
    llq.enqueue(30);
    llq.display();
    cout << "\nDequeued: " << llq.dequeue() << endl;
    llq.enqueue(40);
    llq.display();
    cout<< "\nSize: " << llq.size << endl;

    return 0;
}
