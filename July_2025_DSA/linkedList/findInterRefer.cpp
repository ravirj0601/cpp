#include <iostream>
#include <vector>
#include <algorithm> // For std::max

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
    

Node* createList(const vector<int>& lists){
    Node *head = nullptr;
    Node *curr = nullptr;
    if (lists.empty()) {
        return nullptr;
    }
    for (int val : lists) {
        Node *temp  = new Node(val);
        if (head == nullptr) {
            head = temp;
            curr = temp;
        }else {
            curr->next = temp;
            curr = temp;
        }
    }
    return head;
}

void  printList(Node *head){
    Node *curr = head;
    if (head == nullptr) {
        cout << "List is empty (nullptr).\n";
        return;
    }

    cout << "List: ";
    while (curr != nullptr) {
        cout << curr->value << " ";
        curr = curr->next;
    }
    cout << "\n";
}

// Helper function to delete a list
void deleteList(Node* head_to_delete) {
    while (head_to_delete != nullptr) {
        Node* temp = head_to_delete->next;
        delete head_to_delete;
        head_to_delete = temp;
    }
}

// Corrected findIntersection function using a cycle-based approach
// WARNING: This function temporarily modifies head1 by making it cyclic.
// It restores head1 before returning, but this is a side effect to be aware of.
Node* findIntersection(Node* head1, Node* head2){
    Node* intersection_node = nullptr;
    Node* p = head1;
    Node* q = head2;

    while (p != q) {
        if (p == nullptr) p = head2;
        else p = p->next;
        if (q == nullptr) q = head1;
        else q = q->next;
    }
    return p;
}

int main() {
    cout << "--- Test Case: With Intersection ---\n";
    Node* common_part = createList({7, 8, 9});
    Node* list_a = createList({1, 2, 3});
    Node* list_b = createList({4, 5});

    // Connect lists to the common part
    Node* temp_a = list_a;
    while(temp_a->next != nullptr) temp_a = temp_a->next;
    temp_a->next = common_part;

    Node* temp_b = list_b;
    while(temp_b->next != nullptr) temp_b = temp_b->next;
    temp_b->next = common_part;

    printList(list_a);
    printList(list_b);

    Node* intersection = findIntersection(list_a, list_b);
    if (intersection != nullptr) {
        cout << "Intersection found at value: " << intersection->value << "\n"; // Expected: 7
    } else {
        cout << "No intersection found.\n";
    }
    deleteList(list_a); // Deletes list_a and the common part

    return 0;
}
