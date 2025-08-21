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
        priority = priority;
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
 *              -   if curr.priority > newNode.priority;
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
public:
    void enqueue(Node* elNode){
        

    }

};
int main() {
    
    return 0;
}

