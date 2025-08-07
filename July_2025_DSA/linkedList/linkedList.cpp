
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
            return -1;
        }

        if(head->next == nullptr){
            delete head;
            head = nullptr;
            return -1;
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
            return -1;
        }

        int element = head->value;
        Node *temp = head;
        head = head->next;  
        delete head;
        return element;
    }

    void insertatPosi(int value, int pos){
        Node *temp = new Node(value);
        int cnt = 1;
        if (head == NULL) {
            cerr << "Queue is already empty....  \n";
            return;
        }

        Node *curr = head;
        if (pos == 0) {
            temp->next = head;
            head = temp;
        }

        Node* temp2 = nullptr;
        while (cnt != pos-1) {
            curr = curr->next;
            cnt += 1;
        }

        if(curr == nullptr){
            cerr<< "Position is out of bound.\n";
            delete temp;
            return;
        }

        temp->next = curr->next;
        curr->next = temp;
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

