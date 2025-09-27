#include <cmath>
#include <ios>
#include <iostream>
#include <stdexcept>

// Node structure for the doubly linked list
struct Node {
    int data;
    Node* prev;
    Node* next;

    // Constructor to initialize a new node
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

// Doubly Linked List class
class DoublyLinkedList{
    private:
        Node* head;
        Node* tail;
    public:
        DoublyLinkedList():head(nullptr), tail(nullptr){}

        // Destructor to free memory
        ~DoublyLinkedList(){
            Node* curr_node = head;
            while (curr_node) {
               Node* temp = curr_node;
               curr_node = curr_node->next;
               delete temp;
            }
            head = nullptr;
            tail = nullptr;
        }

        // Insert from front
        void insert_front(int val){
            Node* temp = new Node(val);
            if (head == nullptr) {
                head = temp;
                tail = temp;
            }else {
                temp->next = head;
                head->prev = temp;
                head = temp;
            }
        }

        // Insert from Back
        void insert_back(int val){
            Node* temp = new Node(val);
            if (head == nullptr) {
                head = temp;
                tail = temp;
            }else {
                tail->next = temp;
                temp->prev = tail;
                tail = temp;
            }
        }

        // delete from front
        int delete_front(){
            if (!head)throw std::runtime_error("Empty List..");
            
            Node* temp = head;
            int val = temp->data;
            head = head->next; 
            if (!head) {
                tail = nullptr;
            }
            else {
                head->prev = nullptr;
            }
            delete temp;
            return val;
        }

        // Delete from Back
        int delete_back(){
            if (head == nullptr)throw std::runtime_error("Empty List..");
        
            Node* temp = tail;
            int val = tail->data;
            tail = tail->prev;

            if (!tail) {
                head = nullptr;
            }
            else {
                tail->next = nullptr;
            }
            delete temp;
            return val;
        }

        // Display Front
        int peek_front() const {
            if (head == nullptr) {
                throw std::runtime_error("Empty List..");
            }
            int val = head->data;
            return val;
        }

        // Display Back
        int peek_back() const {
            if (head == nullptr) {
                throw std::runtime_error("Empty List..");
            }
            int val = tail->data;
            return val;
        }

        // Function to print the list in forward direction
        void print_list() const {
            if (head == nullptr) {
                std::cout << "List is empty." << std::endl;
                return;
            }
            Node* current = head;
            std::cout << "List: ";
            while (current != nullptr) {
                std::cout << current->data << " <-> ";
                current = current->next;
            }
            std::cout << "nullptr" << std::endl;
        }
};



int main() {
    // The main function is now empty, as requested.
    // You can add your LRU cache implementation here or in a separate file.
    return 0;
}
