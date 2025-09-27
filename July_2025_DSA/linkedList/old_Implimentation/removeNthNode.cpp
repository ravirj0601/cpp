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

Node*  createList(vector<int> &lists){
    Node *head = nullptr;
    Node *curr =  head;
    int i = 0;
    int n = lists.size();
    while (i < n) {
        Node *temp =  new Node(lists[i]);
        if(head == nullptr){
            head = temp;
        }else {
            curr->next = temp;
        }
        curr = temp;
        i++;
    }
    return head;
}

void print(Node *head){
    Node *curr = head;
    if (head ==  nullptr) {
        cerr << "List is already empty.....!\n";
        return;
    }
    cout << "List: ";
    while (curr != nullptr) {
        cout << curr->value << " ";
        curr = curr->next;
    }
    cout << "\n";
}

/**
 * Find Nth node from end.
 * */
Node* removeNth(Node* head, int n){
    if (n <= 0) {
        cerr << "Inavalid Nth size....! \n";
        return nullptr;
    }

    Node *slow = head, *fast = head;
    int count = 0;

    while (count <= n && fast != nullptr) {
        fast = fast->next;
        count++;
    }
    if (fast == nullptr && count < n) {
        cerr << "List Out of bounds!!!..\n";
        return nullptr;
    }
    while (fast != nullptr) {
        slow = slow->next;
        fast = fast->next;
    }
    
    Node* temp = slow->next;
    slow->next = slow->next->next;

    delete temp;

    return head;
}

int main() {
    vector<int> lists = {1, 2, 3, 4, 5};
    Node *head = createList(lists);
    print(head);
    Node *middle = removeNth(head, 2);
    print(middle);
    return 0;
}

