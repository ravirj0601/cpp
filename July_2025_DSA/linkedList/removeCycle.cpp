#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
        int val_;
        Node* next;
        Node(int value):val_(value), next(nullptr){}
};

class NodeOps{
    private:
        Node* head;
        void clear() noexcept{
            Node* newNode = head->next;
            delete head;
            head = newNode;
        }
    public:
        NodeOps():head(nullptr){}
        ~NodeOps(){clear();}
        void createCircularList(const vector<int>& lists){
            if (lists.empty()) {
                cout << "Empty List provide some elements\n";
                return;
            }
            Node* curr = nullptr;
            for (const auto num : lists) {
                Node* newNode = new Node(num);
                if (head == nullptr) {
                    head = newNode;
                    curr = newNode;
                }else {
                    curr->next = newNode;
                    curr = curr->next;
                }
            }
            curr->next = head;
        }
        
        bool detectCycle(){
            if (head == nullptr) {
                cout << "List is empty to check Cycle!\n";
                return false;
            }
            Node* slow = head;
            Node* fast = head->next->next;
            while (slow != nullptr && slow->next!=nullptr) {
                slow = slow->next;
                fast = fast->next->next;
                if (slow->val_ != fast->val_) {
                    return true; 
                }
            }
            return false;
        }

        void removeCycle(){
            /*
             * Detect cycle
             * find start of cycle
             * find last node of cycle 
             * and put null to last node next
             */
        }

        void printElement(){
            
        }
};

int main() {
    
    return 0;
}

