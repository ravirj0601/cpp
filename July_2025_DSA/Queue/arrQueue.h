#ifndef ARRQUEUE_HPP
#define ARRQUEUE_HPP

#include <iostream>
using namespace std;

/**
 * @brief : Queue implementation using simple array
 */
class Queue {
public:
    int *arr;
    int front;
    int rear;
    int size;
    int capacity;

    Queue(int cap);
    bool enqueue(int val);
    int dequeue();
    bool isEmpty();
    int peek();
    ~Queue();
};

/**
 * @brief : Circular Queue using Array
 */
class CirArrQueue {
public:
    int *arr;
    int rear, front, size;
    int capacity;

    CirArrQueue(int cap);
    bool isEmpty();
    bool isFull();
    void enqueue(int value);
    int dequeue();
    int peek();
    ~CirArrQueue();
};

/**
 * @brief : Node structure for linked list based queue
 */
class Node {
public:
    int value;
    Node *Next;

    Node(int val);
};

/**
 * @brief : Linked List based Queue
 */
class LLQueue {
private:
    Node *rear;
    Node *front;

public:
    int size;

    LLQueue();
    bool isEmpty();
    void enqueue(int val);
    int dequeue();
    void display();
    ~LLQueue();
};

#endif // QUEUE_HPP