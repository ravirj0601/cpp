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

void reverseList(){
    if (head == nullptr) {
        cerr << "Empty list...\n";
        return;
    }
    Node *prev = nullptr;
    Node *curr = head;
    while(curr != nullptr){
        curr = curr->next;
        prev = curr;
        :w
    }

}

int main() {
    
    return 0;
}

