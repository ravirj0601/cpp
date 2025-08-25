#include <iostream>
#include <iterator>
#include <stdexcept>
#include <utility>
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

class List{
    private:
        Node* head;
    public:
        List() : head(nullptr){}
        
        void insertFront(int val){
            Node* temp_node = new Node(val);

            if (head == nullptr) {
                head = temp_node;
            }else {
                temp_node->next = head;
                head = temp_node;
            }
        }
        
        pair<int, int> findMiddle() const {
            if (head == nullptr) {
                throw std::out_of_range("List is empty...!");
            }
            Node* slow = head;
            Node* fast = head;
            int i =  1;
            while (fast != nullptr && fast->next != nullptr) {
                fast = fast->next->next;
                slow  = slow->next;
                i++;
            }
            return {i, slow->value};
        }

        pair<int, int> findKthfromEnd(int k) const { // Added const
            if (k <= 0) {
                throw std::invalid_argument("Input is less then or 0 Its invalid....!");
            }

            if (head == nullptr) {
                throw std::out_of_range("Empty List.....!");
            }

            Node* slow = head;
            Node* fast = head;
            int i = 1;
            while (i <= k) {
                if (fast == nullptr) { // Check if k is greater than list length
                    throw std::out_of_range("k is greater than the length of the list...!");
                }
                fast = fast->next;
                i++;
            }
            // Reset i to 1 for tracking position from the beginning for the slow pointer
            // The slow pointer will be at position 1 when fast is at k+1 (after k steps)
            i = 1; 
            while (fast != nullptr) {
                fast = fast->next;
                slow = slow->next;
                i++;
            }
            return{slow->value, i};
        }

        bool detectCycle() const{
            if (head == nullptr) {
                throw std::out_of_range("List is empty...!\n");
            }

            Node* slow = head;
            Node* fast = head;

            while (fast && fast->next) {
                slow = slow->next;
                fast = fast->next->next;
                if (slow == fast) {
                    return true;
                }
            }
            return false;
        }

};

int main() {
    List mylist;
    mylist.insertFront(10);
    mylist.insertFront(20);
    mylist.insertFront(30);
    mylist.insertFront(40);
    mylist.insertFront(50);

    // Test case 1: No cycle
    cout << "Test Case 1: List with no cycle\n";
    if (mylist.detectCycle()) {
        cout << "Cycle detected (Incorrect)\n";
    } else {
        cout << "No cycle detected (Correct)\n";
    }

    // Test case 2: Empty list
    cout << "\nTest Case 2: Empty list\n";
    List emptyList;
    try {
        emptyList.detectCycle();
        cout << "No exception thrown for empty list (Incorrect)\n";
    } catch (const std::out_of_range& e) {
        cerr << "Error: " << e.what() << " (Correct)\n";
    }
    
    // To properly test a cycle, we would need a way to manually link nodes
    // to form a cycle, which the current `List` class doesn't expose.
    // If you want to test a cycle, you would need to add a method to `List`
    // that allows creating a cycle for testing purposes, or create a list
    // with a cycle outside the `List` class.

    return 0;
}

