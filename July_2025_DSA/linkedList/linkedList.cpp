
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
        int cnt = 0;
        
        if (pos < 0) {
            cerr << "Invalid Position...\n";
            delete temp;
            return;
        }
        
        if (pos == 0) {
            temp->next = head;
            head = temp;
            return;
        }


        Node *curr = head;

        while (curr != nullptr && cnt < pos-1) {
            curr = curr->next;
            cnt++;
        }

        if(curr == nullptr){
            cerr<< "Position is out of bound.\n";
            delete temp;
            return;
        }

        temp->next = curr->next;
        curr->next = temp;
    }

    int deleteatPos(int pos){
        
        if (pos < 0) {
            cerr << "Invalid Position.....\n";
            return -1;
        }

        if (head == nullptr) {
            cerr << "Empty list.....\n";
            return -1;
            
        }

        if (pos == 0) {
            Node *temp = head;
            head = head->next;
            int element = temp->value;
            delete temp;
            return element;
        }

        int cnt = 0;
        Node *curr = head;
        while(curr != nullptr && cnt < pos -1){
            curr = curr->next;
            cnt++;
        }

        if (curr == nullptr || curr->next == nullptr) {
            cerr << "List out of bound.. \n";
            return -1;
        }

        Node *temp = curr->next;
        curr->next = temp->next;
        int element = temp->value;
        delete temp;
        return element;
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

    cout << "\n=== Case 1: Insert 15 at pos 1 ===\n";
    ll.insertatPosi(15, 1);
    ll.printLL();

    cout << "\n=== Case 2: Insert 40 at end (pos 4) ===\n";
    ll.insertatPosi(40, 4);
    ll.printLL();

    cout << "\n=== Case 3: Try invalid insert at pos 10 ===\n";
    ll.insertatPosi(99, 10);
    ll.printLL();


    cout << "Initial list: ";
    ll.printLL();

    cout << "\nDelete pos 0 (front): " << ll.deleteatPos(0) << "\n";
    ll.printLL();

    cout << "\nDelete pos 1 (middle): " << ll.deleteatPos(1) << "\n";
    ll.printLL();

    cout << "\nDelete last element: " << ll.deleteatPos(1) << "\n";
    ll.printLL();

    cout << "\nTry invalid pos 10: " << ll.deleteatPos(10) << "\n";
    ll.printLL();
    return 0;
}

