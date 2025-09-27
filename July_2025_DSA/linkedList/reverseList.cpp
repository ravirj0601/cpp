#include <exception>
#include <iostream>
#include <list>
#include <stdexcept>
#include <vector>
using namespace std;

class Node{
    public:
        int val_;
        Node* next;
        Node(int value):val_(value), next(nullptr){}
};

class NodeOp{
    private:
        Node* head;
        Node* recRev(Node* curr, Node* prev){
            if (curr == nullptr) {
                    return prev;
                }
            Node* tempNext;
            tempNext = curr->next;
            curr->next = prev;
            prev = curr;
            return recRev(tempNext, prev);
        }
        
        void clear() noexcept{ 
            while(head){ 
                Node* t = head; 
                head = head->next; 
                delete t; 
            } 
        }

    public:
        NodeOp():head(nullptr){}
        NodeOp(const NodeOp&) = delete;
        NodeOp& operator=(const NodeOp&) = delete;
        void createList(const vector<int>& list){
            clear();
            if (list.empty()) {
                cout << "Vector is empty...!\nProvide some numbers.\n";
                return;
            }

            Node* curr = nullptr;
            for (auto const num : list) {
                Node* newNode = new Node(num);
                if (head == nullptr) {
                    head = newNode;
                    curr = newNode;
                }else{
                    curr->next = newNode;
                    curr = curr->next;
                }
            }
        }
        void printEle() const{
            if (head == nullptr) {
                cout << "Vector is empty...!\nProvide some numbers.\n";
                return;
            }
            Node* curr = head;
            cout << "Elements from the list: ";
            while (curr != nullptr) {
                cout << curr->val_ << " ";
                curr = curr->next;
            }
            cout << "\n";
        }
        void reverse_List(){
            head = recRev(head, nullptr);
        }
        ~NodeOp(){
            clear();
            head = nullptr;
        }
};

int main() {
    vector<int> lists = {1, 2, 3, 4, 5};
    NodeOp list1, list2, list3;
    try {
        list2.createList({});
        list2.printEle();
        list3.createList({2,3});
        list3.printEle();
        list3.reverse_List();
        list3.printEle();
        list1.createList(lists);
        list1.printEle();
        list1.reverse_List();
        list1.printEle();
    } catch (exception& e) {
        cerr << "Error occured..." << e.what() << "\n";
    }
    return 0;
}

