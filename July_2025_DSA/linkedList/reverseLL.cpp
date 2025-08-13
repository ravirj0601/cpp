#include <ios>
#include <iostream>
#include <iterator>
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

/**
 * Brute Force Implimentation
 * */
Node* reverseList(Node* head){
    vector<int>nodes;
    Node *curr = head;
    while(curr != NULL){
        nodes.push_back(curr->value);
        curr = curr->next;
    }
    int i = nodes.size()-1;
    curr = head;
    while(i >= 0){
        curr->value = nodes[i];
        i--;
        curr = curr->next;
    }

    return head;
}

/**
 * Improved Implimentation
 * */
Node* reverseList1(Node* head){
    Node *prv = nullptr;
    Node *curr = head;
    Node *fut = nullptr;
    if (head == nullptr) {
        cerr << "List is empty Nothing to reverse.....!\n";
        return nullptr;
    }
    while (curr != nullptr) {
        fut = curr->next;
        curr->next = prv;
        prv = curr;
        curr = fut;
    }
    return prv;
}
/**
 * Using recursion
 * */
Node* reverseList2(Node *curr, Node *prv){
    if (curr == nullptr) {
        return prv;
    }
    /// cout << "Inside the function\n";
    Node* fut = curr->next;
    curr->next = prv;
    return reverseList2(fut, curr); 
}


Node* createNodeList(vector<int> list){
    Node *head = nullptr;
    Node *curr = head;
    int i = 0;
    int n = list.size() - 1;
    while(i <= n){
        Node *temp = new Node(list[i]);
        if (head ==  nullptr) {
            head = temp;
            curr = temp;
        }else{
            curr->next = temp;
            curr = temp;
        }
        i++;
    }
    return head;
}
 void printLL(Node* head){
    if(head == nullptr){
        cerr << "!No Data... Empty List..\n";   
        return;
    }
    cout << "List Values: ";
    Node* curr = head;
    while(curr != NULL){
        cout << curr->value << " " ;
        curr = curr->next;
    }
    cout << "\n";
}


int main() {
    vector<int> lists = {1,2,3,4,5};
    Node *head = createNodeList(lists);
    printLL(head);
    Node *newhead = reverseList2(head, nullptr);
    printLL(newhead);
    return 0;
}

