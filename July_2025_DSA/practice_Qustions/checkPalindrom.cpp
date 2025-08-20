#include <iostream>
#include <stack>
#include <vector> // Added for std::vector
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
 *  Function checkPalindrome(head of NodeList):
 *      // 1. Handle edge cases: empty or single-node list
 *      If head is null OR head.next is null:
 *          Return true (it's a palindrome)
 *
 *      // 2. Initialize pointers and stack
 *      Create a pointer 'slow' and set it to head
 *      Create a pointer 'fast' and set it to head
 *      Create an empty stack (to store integer values)
 *
 *      // 3. Traverse to find the middle and store first half values
 *      While fast is not null AND fast.next is not null:
 *          Push slow.value onto the stack
 *          Move slow one step forward (slow = slow.next)
 *          Move fast two steps forward (fast = fast.next.next)
 *
 *      // 4. Adjust 'slow' for odd-length lists
 *      If fast is not null (meaning the list has an odd number of elements):
 *          Move slow one step forward (slow = slow.next) // Skip the middle element
 *
 *      // 5. Compare the second half of the list with elements from the stack
 *      While slow is not null:
 *          Pop a value from the stack and store it as 'value_from_stack'
 *          If value_from_stack is NOT equal to slow.value:
 *              Return false (not a palindrome)
 *          Move slow one step forward (slow = slow.next)
 *
 *      // 6. If all comparisons passed
 *      Return true (it is a palindrome)
 */

bool checkPalindrom(Node *head){
    if (head == nullptr || head->next == nullptr) {
        cerr << "Empty list either single Node! Can not check...! \n"; 
        return true;
    }

    Node* slow = head;
    Node* fast = head;
    stack<int> st;

    while (fast != nullptr && fast->next != nullptr) {
        st.push(slow->value);
        slow = slow->next;
        fast = fast->next->next;
    }

    if (fast->next == nullptr) {
        slow = slow->next;
    }

    while (slow != nullptr) {
        int temp = st.top();
        if (temp != slow->value) {
            return false;
        }
        slow = slow->next;
        st.pop();
    }
    return true;
}


int main() {
    vector<int> list = {1,2,3,2,1};
    Node* head = createLists(list);
    print(head);
    bool res = checkPalindrom(head);
    if (res) {
        cout << "List is palindrom...!\n";
    }else {
        cout << "List is Palindrom...!\n";
    }
    return 0;
}

