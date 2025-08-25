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
        
        pair<int, int> findMiddle(){
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

    List emptyList;
    try {
        emptyList.findMiddle();
    } catch (const out_of_range& e) {
        cerr << "Error: " << e.what() << endl;
    }
    
    return 0;
}

