#include <iostream>
#include <unordered_map>
using namespace std;

/**
 * 
 *  LRU Cache
 *  Implement the Least Recently Used (LRU) cache class LRUCache.//
 *  The class should support the following operations
 *  LRUCache(int capacity) Initialize the LRU cache of size capacity.
 *  int get(int key) Return the value corresponding to the key if the key exists, otherwise return -1.
 *  void put(int key, int value) Update the value of the key if the key exists. Otherwise, 
 *  add the key-value pair to the cache. If the introduction of the new pair causes the //
 *  cache to exceed its capacity, remove the least recently used key.
 *  A key is considered used if a get or a put operation is called on it.
 *
 *  Ensure that get and put each run in O(1) average time complexity.
 *
 *  Explanation:
 *  LRUCache lRUCache = new LRUCache(2);
 *  lRUCache.put(1, 10);  // cache: {1=10}
 *  lRUCache.get(1);      // return 10
 *  lRUCache.put(2, 20);  // cache: {1=10, 2=20}
 *  lRUCache.put(3, 30);  // cache: {2=20, 3=30}, key=1 was evicted
 *  lRUCache.get(2);      // returns 20
 *  lRUCache.get(1);      // return -1 (not found)
 *
 *  */

/**
 * Psudo Code for LRU Cache
 *  Class LRUCache
 *      -   
 *
 * */

class Node{
public:
    int key;
    int value;
    Node* prev;
    Node* next;
    Node(int k, int v):key(k), value(v), prev(nullptr), next(nullptr){};
};

class LRUCache{
    private:
        int capacity;
        int key;
        int value;
        Node* head;
        Node* tail;
        unordered_map<int, Node*> mOrder;

        void push_to_front(Node* newNode){
            if (head == newNode && tail == newNode) {
                }
        }
        void removeFromEnd(){   
        }

    public:

        LRUCache():head(nullptr), tail(nullptr){}
        void put(int key, int value){}
        int get(int key){}
        ~LRUCache(){}

};

int main() {
    
    return 0;
}

