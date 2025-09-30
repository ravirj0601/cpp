#include <ios>
#include <iostream>
#include <vector>
using namespace std;
/*
 * class Node{};
 */
class Node{
    public:
        int val_;
        Node* next;
        Node(int value):val_(value), next(nullptr){}
};
 /* class NodeOps{
 *  private
 *      -   head
 *      -   clearList(){
 *              while
 *                  delete each node
 *          }
 *  public  
 *      -   NodeOps(){}
 *      -   createList(){}
 *      -   printList(){}
 *      -   ~NodeOps(){
 *          -   call crearList();
 *      }
 * };
 */
class NodeOps{
    private:
        Node* head;
        void clearList(){
            while (head != nullptr) {
                Node* temNode = head->next;
                delete head;
                head = temNode;
            }
        }
    public:
        NodeOps():head(nullptr){}
        ~NodeOps() noexcept{
            clearList();
        }
        void createList(const vector<int>& lists){
            if (lists.empty()) {
                cout << "List is empty!\n";
                return;
            }
            Node* curr = head;
            for (const auto num : lists) {
                Node* newNode = new Node(num);
                if (head == nullptr) {
                    head = newNode;
                    curr = newNode;
                }else {
                    curr->next = newNode;
                    curr = curr->next;
                }
            }
        }
        void printList(){
            Node* curr = head;
            cout << "List Element: ";
            while (curr != nullptr) {
                cout << curr->val_ << " ";     
                curr = curr->next;
            }
            cout << "\n";
        }

        void printList(Node* temphead){
            Node* curr = temphead;
            cout << "List Element: ";
            while (curr != nullptr) {
                cout << curr->val_ << " ";     
                curr = curr->next;
            }
            cout << "\n";
        }

        Node* rHead(){
            Node* temp = head;
            head = nullptr; // Clear head after returning it
            return temp;
        }
};
 /* Node* mergeList(head1, head2){
 *      if(head1 == null) return head2;
 *      if(head2 == null) return head1;
 *      Node newHead = new Node(0);
 *      Node curr = newHead;
 *      Node curr1 = head1;
 *      Node curr2 = head2;
 *      while (curr1 != null || curr2 != null){
 *          -  if ( curr1.value <= curr2.value){
 *              -   thiscurr.next = curr1
 *              -   curr1 = curr1.next
 *          }else{
 *              -   thiscurr.next = curr2
 *              -   curr2 = curr2.next
 *          }
 *          -   thiscurr = thiscurr.next
 *      }
 *      newhead = newHead.next;
 *      delete newHead;
 *      return newhead;
 * }
 */

Node* mergeList(Node* head1, Node* head2){
    if (head1 == nullptr) return head2; 
    if (head2 == nullptr) return head1; 
    Node tempHead(0);
    Node* curr = &tempHead;
    Node* curr1 = head1;
    Node* curr2 = head2;
    while (curr1 != nullptr && curr2 != nullptr) {
        if (curr1->val_ <= curr2->val_) {
            curr->next = curr1;
            curr1 = curr1->next;
        }else {
            curr->next = curr2;
            curr2 = curr2->next;
        }
        curr = curr->next;
    }
    if (curr1 != nullptr) {
        curr->next = curr1;
    } else if (curr2 != nullptr) {
        curr->next = curr2;
    }
    Node* newHead = tempHead.next;
    //delete tempHead;
    return newHead;
}

void deleteList(Node* head){
    while (head != nullptr) {
        Node* temp = head->next;
        delete head;
        head = temp;
    } 
}

int main() {
    NodeOps list1, list2, finalList;
    vector<int> l1, l2;
    l1 = {1, 3, 5, 7};
    l2 = {2, 4, 6, 8};
    list1.createList(l1);
    list2.createList(l2);
    list1.printList();
    list2.printList();
    Node* newHead = mergeList(list1.rHead(), list2.rHead());
    finalList.printList(newHead);
    deleteList(newHead);
    return 0;
}

