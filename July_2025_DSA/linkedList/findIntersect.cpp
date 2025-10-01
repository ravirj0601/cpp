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
    void clearList(){
        while (head != nullptr) {
            Node* temNode = head->next;
            delete head;
            head = temNode;
        }
    }
public:
    NodeOps():head(nullptr){}
    ~NodeOps() noexcept{
        clearList();
    }

    void createList(const vector<int>& lists){
        clearList();
        if (lists.empty()) {
            cout << "List is empty!\n";
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
    }

    void printList(){
        Node* curr = head;
        cout << "List Element: ";
        if (curr == nullptr) {
            cout << "(empty)";
        }
        while (curr != nullptr) {
            cout << curr->val_ << " ";     
            curr = curr->next;
        }
        cout << "\n";
    }

    static void printList(Node* temp_head){
        Node* curr = temp_head;
        cout << "List Element (from given head): ";
        if (curr == nullptr) {
            cout << "(empty)";
        }
        while (curr != nullptr) {
            cout << curr->val_ << " ";     
            curr = curr->next;
        }
        cout << "\n";
    }

    Node* releaseHead(){
        Node* temp = head;
        head = nullptr;
        return temp;
    }
};

void deleteList(Node* head_to_delete) {
    while (head_to_delete != nullptr) {
        Node* temp = head_to_delete->next;
        delete head_to_delete;
        head_to_delete = temp;
    }
}

Node* findIntersect(Node* head1, Node* head2){
    Node* curr1 = head1; 
    Node* curr2 = head2;
    int count1 = 0, count2 = 0;
    while (curr1 != nullptr) {
        count1++;
        curr1 = curr1->next;
    }
    while (curr2 != nullptr) {
        count2++;
        curr2 = curr2->next;
    }
    curr1 = head1;
    curr2 = head2;

    while (count1 > count2) {
        curr1 = curr1->next;
        count1--;
    }
    while (count2 > count1) {
        curr2 = curr2->next;
        count2--;
    }

    while (curr1 != nullptr && curr2 != nullptr && curr1 != curr2) {
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    return curr1;
}

int main() {
    NodeOps list_a_ops, list_b_ops;
    vector<int> va = {1, 2, 3};
    vector<int> vb = {9, 8};
    list_a_ops.createList(va);
    list_b_ops.createList(vb);

    Node* common_node = new Node(100);
    common_node->next = new Node(101);

    Node* head_a = list_a_ops.releaseHead();
    Node* temp_a = head_a;
    while(temp_a->next != nullptr) temp_a = temp_a->next;
    temp_a->next = common_node;

    Node* head_b = list_b_ops.releaseHead();
    Node* temp_b = head_b;
    while(temp_b->next != nullptr) temp_b = temp_b->next;
    temp_b->next = common_node;

    cout << "List A: "; NodeOps::printList(head_a);
    cout << "List B: "; NodeOps::printList(head_b);

    Node* intersection = findIntersect(head_a, head_b);
    if (intersection != nullptr) {
        cout << "Intersection found at value: " << intersection->val_ << "\n";
    } else {
        cout << "No intersection found.\n";
    }
    deleteList(head_a);

    return 0;
}
