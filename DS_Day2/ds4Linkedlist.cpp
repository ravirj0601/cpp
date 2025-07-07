#include<iostream>
using namespace std;

/** Linked List */

// Using class
class NODE{
public:
    int val_;
    class NODE* next = nullptr;

    NODE(int val){
        val_ = val;
    }
};


// Using Struct
struct LinkedLIST
{
    int val_;
    LinkedLIST* next = nullptr;

    LinkedLIST(int val){
        val_ = val;
    }
};

/**
 * Insertion in LinkedList: 
 * 1. Insert form front
 * 2. Insert from end
 * 3. Insert after specific Node
 * 4. Insert before specific Node
 * 5. Insert at specific Node
 * */

// Insert from front
int insertionEnd(NODE head, int val){
    NODE newNode = new NODE(val);
    
}


