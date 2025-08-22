#include <iostream>
#include <iterator>
#include <queue>
using namespace std;

class Node{
public:
    int jobID;
    int priority;
    Node* next;
    Node(int jid, int pr){
        jobID = jid;
        priority = pr;
        next = nullptr;
    }
};

/**
 * psudo Code for this program.
 * class Node
 *  -   two values jobid, priority and next Node
 * class priorityQ
 * Node head*;
 *  -   priorityQ()
 *      -   head = nullptr
 *  -   enqueue method passing newNode
 *      -   if head is null 
 *          -   make this newNode head
 *          -   return
 *      -   node curr = head
 *      -   node prv = nullptr
 *      -   if head.priority is < newNode.priority
 *          -   newNode.next = head
 *          -   head = newNode
 *          -   return
 *      -   else
 *          -   while loop traverse till the curr is nullptr
 *              -   if curr.priority < newNode.priority;
 *                  -   newNode.next = c:wurr
 *                  -   prev.next = newNode
 *                  -   return
 *              -   prev = curr
 *              -   curr = curr.next
 *          -   after the loop it means it the prioroty is lowest so we will keep it at the end
 *          -   curr.next = newNode
 *               
 *
 *  -   dequeue method
 *      -   just remove the head
 *      -   new head is head-> next node as head is always high priority
 *  */


class priorityQ{
private:
    Node* head;
public:
    priorityQ(){
        head = nullptr;
    }

    void enqueue(int jobID, int pr){
        // if (head == nullptr) {
        //     head = elNode;
        //     return;
        // }   
        Node* elNode = new Node(jobID, pr);
        if (head == nullptr || elNode->priority < head->priority) {
            elNode->next = head;
            head = elNode;
            return;
        }else {
            Node* curr = head;
            Node* prv = nullptr;
            while (curr != nullptr && elNode->priority >= curr->priority) {
                prv = curr;
                curr = curr->next;
            }
            // Debugging prints
            // cout << "After loop: elNode->jobID=" << elNode->jobID << ", elNode->priority=" << elNode->priority << endl;
            // cout << "After loop: prv=" << prv << ", curr=" << curr << endl;

            elNode->next = curr;
            if (prv != nullptr) { // Ensure prv is not nullptr before dereferencing
                prv->next = elNode;
            } else {
                // This case should ideally be handled by the initial 'if' block
                // but as a safeguard, if prv is nullptr here, it means elNode is the new head
                head = elNode;
            }
        }

    }

    Node* dequeue(){
        if (head == nullptr) {
            return nullptr;
        }
        Node* ans = head;
        head = head->next;
        return ans;
    }

    bool isEmpty(){
        return head == nullptr;
    }

    ~priorityQ(){
        Node* current = head;
        while (current != nullptr) {
            Node* nNode = current->next;
            delete current;
            current = nNode;
        }
        head = nullptr;    
    }

};
int main() {
    priorityQ pq;

    // Add some jobs (jobID, priority)
    pq.enqueue(101, 3);   // job 101, priority 3
    pq.enqueue(102, 1);   // job 102, priority 1 (highest priority)
    pq.enqueue(103, 5);   // job 103, priority 5 (lowest priority)
    pq.enqueue(104, 2);   // job 104, priority 2

    cout << "Processing jobs in order of priority:\n";
    while (!pq.isEmpty()) {   // assuming you add an isEmpty() helper
        Node* job = pq.dequeue();
        cout << "Job ID: " << job->jobID 
             << " | Priority: " << job->priority << endl;
        delete job; // cleanup
    }
    return 0;
}

