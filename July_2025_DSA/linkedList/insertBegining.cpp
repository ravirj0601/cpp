#include <cstddef>
#include <iostream>
#include <stdexcept>
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
        void display() const {
            Node* temp = head;
            while(temp != nullptr){
                cout << temp->value << " ";
                temp = temp->next;
            }
            cout << endl;
        }
        
        // Remove element from front of the list  
        int popHead(){
            if (head == nullptr) {
                throw std::out_of_range("Can not POP from a empty list...!");
            }
            Node* temp = head;
            head = head->next;
            int val = temp->value;
            delete temp;
            return val;
        }
        
        // Remove element from tail of the list
        int popTail(){
            if (head == nullptr) {
                throw std::out_of_range("Can not POP from a empty list...!");
            }
            if (head->next == nullptr) {
                int val = head->value;
                delete head;
                head = nullptr;
                return val;
            }
            Node* curr = head;
            Node* prv = nullptr;
            while (curr->next != nullptr) {
                prv = curr;
                curr = curr->next;
            }
            prv->next = nullptr;
            int val = curr->value;
            delete curr;
            return val;
        }
        
        //Remove from the given position k/n
        int popPositon(int n){
            if (n <= 0) {
                throw std::invalid_argument("Need a valid position.. !");
            }
            if (head == nullptr) {
                throw std::out_of_range("Can not POP from a empty list.. !");
            }
            if (n == 1) {
                int val = popHead();
                return val;
            }
            int i = 0;
            Node* curr = head;
            Node* prv = nullptr;
            while (i < n - 1 && curr != nullptr) {
                prv = curr;
                curr = curr->next;
                i++;
            }
            if (curr == nullptr) {
                throw std::out_of_range("n is bigger then the size of LinkedList...!");
            }
            prv->next = curr->next;
            int val = curr->value;
            delete curr;
            return val;
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

    try {
        // cout << "Popped: " << mylist.popHead() << endl; // Pop 30
        // cout << "Popped: " << mylist.popHead() << endl; // Pop 20
        // cout << "Popped: " << mylist.popHead() << endl; // Pop 10
        cout << "Popped: " << mylist.popPositon(2) << endl; // Pop 10
        cout << "Popped: " << mylist.popPositon(1) << endl; // Pop 10
        cout << "Popped: " << mylist.popTail() << endl; // Pop 40
        // cout << "Popped: " << mylist.popTail() << endl; // Pop 50
        // cout << "Popped: " << mylist.popTail() << endl; // This will throw an exception
    } catch (const out_of_range& e) {
        cerr << "Error: " << e.what() << "\n";
    }

    cout << "Final Linked List: ";
    mylist.display();

    return 0;
}
