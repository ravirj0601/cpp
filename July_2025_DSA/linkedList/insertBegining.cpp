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

        void insertFront(int val){
            Node* temp = new Node(val);
            temp->next = head;
            head = temp;
        }

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
    cout << "Linked List: ";
    mylist.display();

    return 0;
}