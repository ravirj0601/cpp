#include <iostream>
using namespace std;

// Declaration of Linked List
    // With Class
class Node
{
private:
public:
    int value = 0;
    Node *next = nullptr;
    Node(int val){
        int val_ = val;
    }
};

    // With Structure
struct LinkedList_1
{
    int val_;
    LinkedList_1 *next = nullptr;

    LinkedList_1(int val){
        val_ = val;
    }
};

int main(){
    int val = 4;
    Node *newNode = new Node(4);
    
}
