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
        Node* meetNode_{nullptr};
        void clear() noexcept{
            Node* newNode = head->next;
            delete head;
            head = newNode;
        }

        Node* findCycleStart(){
            if (!meetNode_ || !head) return nullptr;
            Node* ptr1 = head;
            Node* ptr2 = meetNode_;
            while (ptr1 != ptr2) {
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
                cout << ptr1->val_ << " ";
            }
            return ptr1;
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
            meetNode_ = nullptr;
            if (head == nullptr) {
                cout << "List is empty to check Cycle!\n";
                return false;
            }
            Node* slow = head;
            Node* fast = head;
            while (fast != nullptr && fast->next != nullptr) {
                slow = slow->next;
                fast = fast->next->next;
                if (slow == fast) {
                    meetNode_ = slow;
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
            if (!this->detectCycle()){
                cout << "This list is not circular..!";
                return;
            }
            Node* cycleStart = findCycleStart();
            Node* startNode = cycleStart;
            while (startNode->next != cycleStart) {
                startNode = startNode->next;
            }
            startNode->next = nullptr;
        }

        void printCircularList(){
            if (head == nullptr) {
                cout << "List is empty\n";
                return;
            }
            cout << "Circular list Elements: ";
            Node* curr = head;
            do {
                cout << curr->val_ << " ";
                curr = curr->next;
            }while (curr != head);

            cout << "\n";
        }

        void printElement(){
            if (head == nullptr) {
                cout << "List is empty\n";
                return;
            }
            cout << "List Elements: ";
            Node* curr = head;
            while (curr != nullptr){
                cout << curr->val_ << " ";
                curr = curr->next;
            }  
            cout << "\n";
        }

        int printMeetNode(){
            return meetNode_->val_;
        }
        
        int printStartNode(){
            return findCycleStart()->val_;
        }
};

int main() {

    vector<int> list = {1, 2, 3, 4, 5};
    NodeOps list1;
    list1.createCircularList(list);
    list1.printCircularList();
    bool check = list1.detectCycle();
    if (check) {
        cout << "List is Circular\n";
    }else {
        cout << "List is not Circular\n";
    }
    cout << "MeetNode: " << list1.printMeetNode() << "\n";
    cout << "MeetNode: " << list1.printStartNode() << "\n";
    list1.removeCycle();
    check = list1.detectCycle();
    if (check) {
        cout << "List is Circular\n";
    }else {
        cout << "List is not Circular\n";
    }
    list1.printElement();
    return 0;
}

