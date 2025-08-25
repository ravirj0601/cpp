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
};

int main() {
    List mylist;
    mylist.insertFront(10);
    mylist.insertFront(20);
    mylist.insertFront(30);
    mylist.insertFront(40);
    mylist.insertFront(50);

    // List: 50 -> 40 -> 30 -> 20 -> 10

    pair<int, int> middle = mylist.findMiddle();
    cout << "Middle element: Value = " << middle.second << ", Position = " << middle.first << endl;

    List mylist2;
    mylist2.insertFront(100);
    mylist2.insertFront(200);
    mylist2.insertFront(300);
    mylist2.insertFront(400);

    // List: 400 -> 300 -> 200 -> 100

    pair<int, int> middle2 = mylist2.findMiddle();
    cout << "Middle element: Value = " << middle2.second << ", Position = " << middle2.first << endl;

    // Test findKthfromEnd
    cout << "\nTesting findKthfromEnd:\n";
    pair<int, int> kth_from_end;

    // Test case 1: k = 1 (last element)
    try {
        kth_from_end = mylist.findKthfromEnd(1);
        cout << "1st from end: Value = " << kth_from_end.first << ", Position = " << kth_from_end.second << endl;
    } catch (const out_of_range& e) {
        cerr << "Error: " << e.what() << endl;
    }

    // Test case 2: k = 3 (middle element)
    try {
        kth_from_end = mylist.findKthfromEnd(3);
        cout << "3rd from end: Value = " << kth_from_end.first << ", Position = " << kth_from_end.second << endl;
    } catch (const out_of_range& e) {
        cerr << "Error: " << e.what() << endl;
    }

    // Test case 3: k = 5 (first element)
    try {
        kth_from_end = mylist.findKthfromEnd(5);
        cout << "5th from end: Value = " << kth_from_end.first << ", Position = " << kth_from_end.second << endl;
    } catch (const out_of_range& e) {
        cerr << "Error: " << e.what() << endl;
    }

    // Test case 4: k > list length
    try {
        kth_from_end = mylist.findKthfromEnd(6);
        cout << "6th from end: Value = " << kth_from_end.first << ", Position = " << kth_from_end.second << endl;
    } catch (const out_of_range& e) {
        cerr << "Error: " << e.what() << endl;
    }

    // Test case 5: k = 0 (invalid argument)
    try {
        kth_from_end = mylist.findKthfromEnd(0);
        cout << "0th from end: Value = " << kth_from_end.first << ", Position = " << kth_from_end.second << endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    // Test case 6: Empty list
    List emptyList2;
    try {
        kth_from_end = emptyList2.findKthfromEnd(1);
        cout << "1st from end in empty list: Value = " << kth_from_end.first << ", Position = " << kth_from_end.second << endl;
    } catch (const out_of_range& e) {
        cerr << "Error: " << e.what() << endl;
    }
    
    return 0;
}

