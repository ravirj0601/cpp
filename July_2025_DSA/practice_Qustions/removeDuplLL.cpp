#include <ios>
#include <iostream>
#include <regex>
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

Node *createList(vector<int> &lists){
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

void printList(Node* head){
    Node* curr = head;
    if (head == nullptr) {
        cerr << "List is Empty....!\n";
        return;
    }
    cout << "Values from List: ";
    while (curr != nullptr) {
        cout << curr->value << " " ;
        curr = curr->next;
    }
    cout << "\n";
}

/**
 *  Psudo Code for this program
 *  removeDuplicate(head)
 *      -   curr = head
 *      -   while till curr will become nullptr
 *          -   check if curr.value == curr.next.value
 *              -   temp = curr.next.next
 *              -   curr.next = temp
 *          -   else
 *              -   curr = curr.next
 *
 *      return head
 *
 *  main()
 *      -   create a linked list through an array
 *      -   new head = removeDuplicate(head)
 * */
Node* removeDuplicate(Node* head){
    Node* curr = head;
    if (head == nullptr) {
        cerr << "List is Empty....!\n";
        return nullptr;
    }

while (curr != nullptr && curr->next != nullptr) {
        if (curr->value == curr->next->value) {
            Node* temp = curr->next->next;
            Node* temp2 = curr->next;
            curr->next = temp;
            delete temp2;
        }else {
            curr = curr->next;
        }
    }
    return head;
}

int main() {
    vector<int> list = {10,20,30,30,40,40,50};
    Node* head = createList(list);
    printList(head);
    Node* newHead = removeDuplicate(head);
    printList(newHead);
    return 0;
}

