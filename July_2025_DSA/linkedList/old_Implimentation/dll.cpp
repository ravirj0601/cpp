#include <iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node* prev;
        Node(int value):val(value),next(nullptr), prev(nullptr){}
};


class MyLinkedList {
    int capacity;
    Node* head;
    Node* tail;
public:
    MyLinkedList():head(nullptr),tail(nullptr) {}
    
    int get(int index) {
        if(head == nullptr || index <= 0){
            return -1;
        }
        int count = 1;
        Node* curr = head;
        while(count != index || curr != nullptr){
            curr = curr->next;
            curr->prev = curr;
            count++;
        }
        return curr->val;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        if(head == nullptr ){
            head = newNode;
            if(tail == nullptr)
                tail = newNode;
        }else{
            newNode->next = head;
            head = head->prev;
            head->prev = nullptr;
        }
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if(head == nullptr ){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }

    }
    
    void addAtIndex(int index, int val) {
        Node* newNode = new Node(val);
        if(head == nullptr ){
            addAtHead(val);
        }
        Node* curr = head;
        int count = 1;
        while(count != index || curr != nullptr){
            curr = curr->next;
            count++;
        }
        curr->prev->next = newNode;
        curr->next->prev = newNode;
    }
    
    void deleteAtIndex(int index) {
        if(head == nullptr && tail == nullptr){
            return;
        }
        Node* curr = head;
        int count = 1;
        while(count != index || curr != nullptr){
            curr = curr->next;
            count++;
        }
        curr->prev = curr-> next;
    }
};

int main() {
    
    return 0;
}

