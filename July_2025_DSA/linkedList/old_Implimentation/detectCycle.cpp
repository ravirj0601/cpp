#include <ios>
#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
        int value;
        Node *next;

        Node(int val){
            value = val;
            next = nullptr;
        }
};
    

Node* createList(vector<int> lists){
    Node *head = nullptr;
    Node *curr = head;
    int i =  0;
    int n = lists.size();
    while (i < n) {
        Node *temp  = new Node(lists[i]);
        if (head == nullptr) {
            head = temp;
        }else {
            curr->next = temp;
        }
        curr = temp;
        i++;
    }
    return head;
}

void  printList(Node *head){
    Node *curr = head;
    if (head == nullptr) {
        cerr << "List is empty.....!\n";
        return;
    }

    cout << "Lists: ";
    while (curr != nullptr) {
        cout << curr->value << " ";
        curr = curr->next;
    }
}

bool checkCycle(Node* head){
    Node *slow = head, *fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            return true;
        }
    }
    return false;
}


int main() {
    vector<int> lists = {1, 2, 3, 4, 5};
    Node *head = createList(lists);

    cout << (checkCycle(head) ? "Cycle detected" : "No cycle") << "\n";
    
    // make a cycle: last node points to second node
    head->next->next->next->next->next = head->next;

    cout << (checkCycle(head) ? "Cycle detected" : "No cycle") << "\n";
    return 0;
}

