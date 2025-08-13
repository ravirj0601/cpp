#include <iostream>
#include <iterator>
#include <vector>
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

// BruteForce technique
Node* middleNode(Node* head){
    int count = 0;
    Node* curr = head;
    while (curr !=  nullptr) {
        count++;
        curr = curr->next;
    }
    count = count / 2;
    curr = head;
    while (count--) {
        curr = curr->next;
    }
    return curr;
}



Node* createLL(vector<int> &lists){
    Node* head = nullptr;
    Node* curr = nullptr;
    int i = 0;
    int n = lists.size();
    while(i < n){
        Node *temp = new Node(lists[i]);
        if (head == nullptr) {
            head = temp;
            curr = temp;
        }else {
            curr->next = temp;
            curr = temp;
        }
        i++;
    }
    return head;
}

void print(Node *head){
    Node* curr = head;
    if (head == nullptr) {
        cerr << "List is empty Nothing to Print....!\n";
        return;
    }
    cout << "List Value: ";
    while (curr !=  nullptr) {
        cout << curr->value << " ";
        curr = curr->next;
    }
    cout << "\n";
}

int main() {
    vector<int> lists = {1, 2, 3, 4, 5, 6};
    Node *head = createLL(lists);
    print(head);
    Node *ans = middleNode(head);
    cout << "Ans: " << ans->value << "\n";
    return 0;
}

