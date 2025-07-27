#include <iostream>
using namespace std;

/** Linked List */

// Using class
class NODE
{
public:
    int val_;
    NODE *next = nullptr;

    NODE(int val)
    {
        val_ = val;
    }
};

// Using Struct
struct LinkedLIST
{
    int val_;
    LinkedLIST *next = nullptr;

    LinkedLIST(int val)
    {
        val_ = val;
    }
};

/**
 * Insertion in LinkedList:
 * 1. Insert form front
 * 2. Insert from end
 * 3. Insert after specific Node
 * 4. Insert before specific Node
 * 5. Insert at specific Node
 * */

// Insert from front
LinkedLIST *insertionEnd(LinkedLIST *head, int val)
{
    // LinkedList* newNode = new LinkedList(val);
    // if(head == nullptr){
    //     newNode = head;
    // }
    LinkedLIST* newNode = new LinkedLIST(val);
    if (head == NULL)
    {
        return newNode;
    }
    LinkedLIST* curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = newNode;
    return head;
}

void printNode(LinkedLIST* head){
    LinkedLIST* curr = head;
    while(curr->next !=  NULL){
        cout<<"Current Value: "<<curr->val_<< ", Next Address: "<<curr->next << "\n";
        curr = curr->next;
    }
    cout<<"Current Value: "<<curr->val_<< ", Next Address: "<<curr->next << "\n";
}

void printList(NODE *head) {
       // Using do while
        NODE *curr = head;
        do{
            cout << curr->val_ << " ";
            curr = curr->next;
        }
        while(curr != nullptr);
    }

int main(){
    LinkedLIST* newNode = nullptr;
    int val = 5;
    newNode = insertionEnd(newNode, val);
    newNode = insertionEnd(newNode, 9);
    printNode(newNode);
}

