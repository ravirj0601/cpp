#include <iostream>
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

Node* createLists(vector<int> &lists){
    int n = lists.size();
    Node* head = nullptr;
    Node* curr = head;
    int i = 0;
    while (i < n) {
        Node* temp = new Node(lists[i]);
        if (head == nullptr) {
            head = temp;
            curr = head;
        }else{
            curr->next = temp;
            curr = temp;
        }
        i++;
    }
    return head;
}

void print(Node* head){
    if (head == nullptr) {
        cerr << "List is empty....!\n";
        return;
    }
    cout << "Values of Lists: ";
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->value << " "; 
        curr = curr->next;
    }
    cout << "\n";
}

/**
 *  Psudo code for this program.
 *   
 */


int main() {
    
    return 0;
}

