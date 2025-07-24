

#include <iostream>
using namespace std;

/*
Starter Template: Implement K Stacks in a Single Array

Goal:
Design a class to manage k stacks using a single array of size n.

Functions to implement:
- push(int stackNum, int value)
- pop(int stackNum)
- isFull()
- isEmpty(int stackNum)
*/

class KStacks {
    int* arr;
    int* top;
    int* next;
    int n, k;
    int free;

public:
    KStacks(int k, int n);               // Constructor
    ~KStacks();                          // Destructor
    void push(int stackNum, int value);  // Push into stackNum
    int pop(int stackNum);               // Pop from stackNum
    bool isFull() const;                 // Check if storage is full
    bool isEmpty(int stackNum) const;    // Check if specific stack is empty
};

KStacks::KStacks(int k, int n) {
    // TODO: Implement constructor
    this->n = n;
    this->k = k;
    arr = new int[n];
    
    free = 0;
}

KStacks::~KStacks() {
    // TODO: Implement destructor
}

void KStacks::push(int stackNum, int value) {
    // TODO: Implement push
}

int KStacks::pop(int stackNum) {
    // TODO: Implement pop
    return -1;
}

bool KStacks::isFull() const {
    // TODO: Implement isFull
    return false;
}

bool KStacks::isEmpty(int stackNum) const {
    // TODO: Implement isEmpty
    return true;
}

int main() {
    KStacks ks(3, 10);  // 3 stacks, array size 10

    ks.push(0, 10);
    ks.push(1, 20);
    ks.push(2, 30);
    ks.push(1, 40);

    cout << ks.pop(1) << endl;  // Expected: 40
    cout << ks.pop(2) << endl;  // Expected: 30
    cout << ks.pop(0) << endl;  // Expected: 10

    return 0;
}