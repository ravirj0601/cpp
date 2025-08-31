#include <ios>
#include <iostream>
#include <utility>

class Node{
    public:
        std::pair<int, int> value;
        Node* next;
        Node(std::pair<int, int> val):value(val), next(nullptr){}
};

class List{
    private:
        Node* head;
    public:
        List():head(nullptr){}
        void put(Node* temp){
            if (head == nullptr) {
                head = temp;
            }else {
                temp->next = head;
                head = temp;
            }
        }

        std::pair<int, int> get(int key){
            Node* curr = head;
            Node* prev = nullptr;
            while(curr != nullptr){
                if (curr->value.first == key) {
                    std::pair<int, int> temp = curr->value;
                    prev->next = curr->next;
                    curr->next = head;
                    head = curr;
                    return temp;
                    break;
                }
                prev = curr;
                curr = curr->next;
            }
            return {-1, -1};
        }

         
};  

int main() {
    
    return 0;
}

