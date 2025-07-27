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

class Node{
public:
    int index;
    Node *Next;
    Node(int n){
        index = n;
        Next = NULL;
    }
};

class KStacks {
    int n;
    int k;
    int* arr;
    Node **Top;
    stack<int> st;

public:
    KStacks(int k, int n);               // Constructor
    ~KStacks();                          // Destructor
    bool push(int stackNum, int value);  // Push into stackNum
    int pop(int stackNum);               // Pop from stackNum
    bool isFull() const;                 // Check if storage is full
    bool isEmpty(int stackNum) const;    // Check if specific stack is empty
};

KStacks::KStacks(int k, int n) {
    // TODO: Implement constructor
    this->n = n;
    this->k = k;
    arr = new int[n];
    Top = new Node*[k];
    for (size_t i = 0; i < k; i++)
    {
        Top[i] = NULL;
    }
    for (size_t i = 0; i < n; i++)
    {
        st.push(i);
    }
}

KStacks::~KStacks() {
    // Delete the dynamically allocated arr
    delete[] arr;
    // Delete each linked list for every stack in Top[i]
    for (int i = 0; i < k; i++) {
        Node* current = Top[i];
        while (current != NULL) {
            Node* temp = current;
            current = current->Next;
            delete temp;
        }
    }
    // Delete the array Top
    delete[] Top;
}

bool KStacks::push(int stackNum, int value) {
    // TODO: Implement push
    if(st.empty()){
        return false;
    }
    arr[st.top()] = value;
    Node *temp = new Node(st.top());
    temp->Next = Top[stackNum];
    Top[stackNum] = temp;
    st.pop();
    delete temp;
    return true;
}

int KStacks::pop(int stackNum) {
    // TODO: Implement pop
    if(Top[stackNum] == NULL){
        return -1;
    }
    st.push(Top[stackNum]->index);
    int element = arr[Top[stackNum]->index];
    Top[stackNum] = Top[stackNum]->Next;
    return element;
}

bool KStacks::isFull() const {
    // TODO: Implement isFull
    return st.empty();
}

bool KStacks::isEmpty(int stackNum) const {
    // TODO: Implement isEmpty
    if (Top[stackNum] == NULL)
    {
        return true;
    }
    return false;
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