#include <iostream>
#include <vector>

class Node{
    public:
        int value;
        Node *next;
        Node(int val){
            value = val;
            next = nullptr;
        }
};

Node *createList(std::vector<int> &lists){
    int n = lists.size();
    if (n <= 0) {
        return nullptr;
    }

    Node *head = nullptr;
    Node *curr = head;
    int i = 0;
    while (i < n) {
        Node *temp = new Node(lists[i]);
        if (head == nullptr) {
            head = temp;
            curr = head;
            curr->next = nullptr;
        }else {
            curr->next = temp;
            curr = temp;
        }
        i++;
    }
    return head;
}

// Helper function to print the list to verify createList works
void printList(Node* head){
    Node* curr = head;
    if (head == nullptr) {
        std::cerr << "List is Empty....!\n";
        return;
    }
    std::cout << "Values from List: ";
    while (curr != nullptr) {
        std::cout << curr->value << " " ;
        curr = curr->next;
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> myList = {1, 2, 3, 4, 5};
    Node* head = createList(myList);
    std::cout << "List created successfully!\n";
    printList(head);
    return 0;
}

