#include <iostream>
#include <unordered_map>
#include <vector> // For printCache helper

class Node{
    public:
        int key;
        int value;
        Node* next;
        Node* prev;
        Node(int k, int v): key(k), value(v), next(nullptr), prev(nullptr){}
};

class LRUCache{
    private:
        int capacity, current_size;
        Node* head;
        Node* tail;
        std::unordered_map<int, Node*> cache_map;
        
        void add_to_front(Node* newNode){
            if (head == nullptr) {
                head = newNode;
                tail = newNode;
            }else {
                newNode->next = head;
                head->prev = newNode;
                newNode->prev = nullptr;
                head = newNode;
            }
            current_size++;
        }

        void remove_Node(Node* oldNode){
            if (oldNode == head && oldNode == tail) {
                head = nullptr;
                tail = nullptr;
            }else if (oldNode == head) {
                head = head->next;
                if (head != nullptr) {
                    head->prev = nullptr;
                }
            }else if (oldNode == tail) {
                tail = tail->prev;
                if (tail != nullptr) {
                    tail->next = nullptr;
                }
            }else{
                oldNode->prev->next = oldNode->next;
                oldNode->next->prev = oldNode->prev;
            }
            oldNode->next = nullptr;
            oldNode->prev = nullptr;
            current_size--;
        }

    public:
        LRUCache(int cap):capacity(cap), current_size(0), head(nullptr), tail(nullptr), cache_map() {}

        // Destructor to free allocated memory
        ~LRUCache() {
            Node* current = head;
            while (current != nullptr) {
                Node* next_node = current->next;
                delete current;
                current = next_node;
            }
        }

        void put(int key, int value){
            auto it = cache_map.find(key);
            if (it != cache_map.end()) {
                Node* existingNode = it->second; // Correctly get Node* from iterator
                existingNode->value = value;
                remove_Node(existingNode);
                add_to_front(existingNode);
            }else {
                if (current_size == capacity) {
                    Node* lru_node = tail;
                    cache_map.erase(lru_node->key);
                    remove_Node(lru_node);
                    delete lru_node;
                }
                Node* newNode = new Node(key, value);
                add_to_front(newNode);
                cache_map[key] = newNode;
            }
        }

        int get(int key){
            auto it = cache_map.find(key);
            if (it != cache_map.end()) {
                Node* node = it->second; // Correctly get Node* from iterator
                remove_Node(node);
                add_to_front(node);
                return node->value;
            }else {
                return -1;
            }
        }

        // Helper to print cache contents (most-recent -> least-recent)
        void printCache() {
            std::cout << "Cache: [";
            Node* current = head;
            while (current != nullptr) {
                std::cout << "(" << current->key << ", " << current->value << ")";
                if (current->next != nullptr) {
                    std::cout << " -> ";
                }
                current = current->next;
            }
            std::cout << "]" << std::endl;
        }
};

int main() {
    LRUCache cache(2); // Capacity = 2

    std::cout << "Initial state: ";
    cache.printCache();

    cache.put(1, 100);
    cache.printCache();

    cache.put(2, 200);
    cache.printCache();

    std::cout << "Get 1: " << cache.get(1) << std::endl;
    cache.printCache();

    cache.put(3, 300); // Evicts (2, 200)
    cache.printCache();

    std::cout << "Get 2: " << cache.get(2) << std::endl; // Should be -1
    cache.printCache();

    return 0;
}