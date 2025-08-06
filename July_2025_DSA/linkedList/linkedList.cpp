
#include <codecvt>
#include <cstddef>
#include <ios>
#include <iostream>
#include <iterator>
#include <new>
using namespace std;

class Node{
public:
    int value;
    Node* next;
    Node(int val){
        value = val;
        next = NULL;
    }
};

class LinkedList{
private:
    Node* head = nullptr;
public:
    void insertFromEnd(int value){
        Node* newNode = new Node(value);

        if(head == nullptr){
            head = newNode;
            return;
        }
        
        Node* curr = head;

        while(curr->next != NULL){
            curr =  curr->next;
        }
        curr->next = newNode;
    }

    void insertfromFront(int value){
        
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;

    }

    int deleteFromEnd(){
        if(head == nullptr){
            cerr << "Queue is already empty....  \n";
            return;
        }

        if(head->next == nullptr){
            delete head;
            head = nullptr;
            return;
        }

        Node* curr = head;
        while(curr->next->next != nullptr){
            curr = curr->next;
        }
        int element = curr->next->value;
        delete curr->next->next;
        curr->next = nullptr;

        return element;
    }

    int deleteFromFront(){
        if (head == nullptr) {
            cerr << "Queue is already empty....  \n";
            return;
        }

        int element = head->value
        Node *temp = head;
        head = head->next;  
        delete head;
    }

    void insertatPosi(int value){
        
    }

    void printLL(){
        if(head == nullptr){
            cerr << "!No Data... Empty List..\n";
            return;
        }
        cout << "List Values: "; 
        Node* curr = head;
        while(curr != NULL){
            cout << curr->value << " " ;
            curr = curr->next;
        }
        cout << "\n";
    }
};



int main() {
    LinkedList ll;
    ll.insertFromEnd(10);
    ll.insertFromEnd(20);
    ll.insertFromEnd(30);
    ll.printLL();
    return 0;
}

