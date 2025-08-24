#include <iostream>
using namespace std;

class Node{
public:
    int value;
    Node* next;
    Node(int val){
        value = val;
        next = nullptr;
    }
};

class ListOps{
    private:
        Node* head;
    public:
        ListOps(){
            head = nullptr;
        }

        // Insert from begining of linkedList
        void insertFront(int val){
            Node* temp = new Node(val);
            temp->next = head;
            head = temp;
        }

        // Insert element from last 
        void insertLast(int val){
            Node* temp = new Node(val);
            Node* curr = head;
            if (head == nullptr) {
                head = temp;
                return;
            }
            while (curr->next != nullptr) {
                curr = curr->next;
            }
            curr->next = temp;
        }

        // For displaying element of linkedList
        void display(){
            Node* temp = head;
            while(temp != nullptr){
                cout << temp->value << " ";
                temp = temp->next;
            }
            cout << endl;
        }

        ~ListOps(){
            while (head != nullptr) {
                Node* temp = head;
                head = head->next;
                delete temp;
            }
        }
};

int main() {
    ListOps mylist;
    mylist.insertFront(10);
    mylist.insertFront(20);
    mylist.insertFront(30);
    mylist.insertLast(40);
    mylist.insertLast(50);
    cout << "Linked List: ";
    mylist.display();

    return 0;
}
