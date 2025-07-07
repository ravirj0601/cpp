#include<iostream>
#include<unordered_map>

using namespace std;
/** 
LRU Cache
Implement the Least Recently Used (LRU) cache class LRUCache. The class should support the following operations

LRUCache(int capacity) Initialize the LRU cache of size capacity.
int get(int key) Return the value corresponding to the key if the key exists, otherwise return -1.
void put(int key, int value) Update the value of the key if the key exists. Otherwise, add the key-value pair to the cache. If the introduction of the new pair causes the cache to exceed its capacity, remove the least recently used key.
A key is considered used if a get or a put operation is called on it.

Ensure that get and put each run in O(1) average time complexity.

Example 1:

Input:
["LRUCache", [2], "put", [1, 10],  "get", [1], "put", [2, 20], "put", [3, 30], "get", [2], "get", [1]]

Output:
[null, null, 10, null, null, 20, -1]

Explanation:
LRUCache lRUCache = new LRUCache(2);
lRUCache.put(1, 10);  // cache: {1=10}
lRUCache.get(1);      // return 10
lRUCache.put(2, 20);  // cache: {1=10, 2=20}
lRUCache.put(3, 30);  // cache: {2=20, 3=30}, key=1 was evicted
lRUCache.get(2);      // returns 20 
lRUCache.get(1);      // return -1 (not found)
*/

class LRU{
private:
    int size;
    unordered_map<int, int> che;
    vector<int> helper;
    // che.reserve(2); 
    
public:
    LRU(int x){
        size = x;
        che.reserve(x);
    }

    void printSize(){
        cout << "Map size" << che.size() << "\n";
    }

    void printMap(){
        cout << "Printing Contant of Map: \n" ;
        for(const auto nms:che){
            cout << nms.first << " : " << nms.second << "\n";
        }
        cout << "Print Back: " << helper.front() << "\n";
    }

    void printVect(){
        cout << "Printing Contant of Vector: \n[ " ;
        for(const auto num:helper){
            cout << num << ", ";
        }
        cout << "]";
    }

    int get(int n){
        if(che.count(n)){
            che[n];
        }
        return -1;
    }

    void put(int n, int m){
        che[n] = m;
        helper.push_back(n);
        if(che.size() > size){
            che.erase(helper.front());
            // helper.erase(helper.begin());
            helper.pop_back();
            // // helper.erase(helper.begin());
            // int jj = helper.begin();
            // cout << jj;
        }
    }


};

int main(){
// [null,null,null,1,null,-1,null,-1,3,4]
    LRU lru = LRU(2);
    lru.put(1, 10);
    lru.put(2, 20);
    lru.printMap();
    lru.printSize();
    lru.printVect();
    
    lru.put(3, 30);

    lru.printSize();
    lru.printMap();
    lru.printVect();
    
}
