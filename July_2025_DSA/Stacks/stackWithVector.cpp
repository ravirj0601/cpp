#include <iostream>
#include <nl_types.h>
#include <stdexcept>
#include <vector>
using namespace std;

class stackWithVector{
    private:
        vector<int> st;
        int limit_;
    public:
        stackWithVector(int size):limit_(size){}
        void push(const int& value){
            if (st.size() >= limit_) {
                throw out_of_range("Stack is full!");
            }
            st.push_back(value);
            return;
        }

        int pop(){
            if (st.empty()) {
                return -1;
            }
            int val = st.back();
            st.pop_back();
            return val;
        }

        int top() const {
            if (st.empty()) return -1;
            return st.back();
        }

        int size() const noexcept { return st.size(); }
        
        bool isEmpty() const noexcept{
            if(st.empty()){
                return true;   
            }
        }

        size_t capacity() const noexcept { return st.capacity(); }

        void printElement(){
            cout << "Elements: ";
            for (auto const num : st) {
                cout << num << " ";
            }
            cout << "\n";
        }

        ~stackWithVector(){}

};

int main() {
    try{
        stackWithVector st(4);
        std::cout << "Initial capacity (reserved): " << st.capacity() << "\n";

        st.push(10);
        st.push(20);
        st.push(30);
        st.printElement();
        std::cout << "Top: " << st.top() << " size=" << st.size() << "\n";

        st.pop();
        std::cout << "After pop, top: " << st.top() << " size=" << st.size() << "\n";

        st.push(40);
        st.push(50);
        st.push(60); // triggers growth if needed
        std::cout << "After pushes, size=" << st.size() << " capacity=" << st.capacity() << "\n";

        st.printElement();
        while (!st.isEmpty()) {
            std::cout << "popping: " << st.top() << "\n";
            st.pop();
        }
        
        // expect underflow
        try {
            st.pop();
        } catch (const std::exception& ex) {
            std::cout << "Expected: " << ex.what() << "\n";
        }

        // move/copy test
        st.push(100);
        st.push(200);
        st.printElement();
        // StackUsingVector<int> s2 = std::move(s); // s moved-from
        // std::cout << "s2.top() after move: " << s2.top() << "\n";
        std::cout << "s.size() after move: " << st.size() << "\n";
    }catch(const std::exception& e){
        cerr << "Fatal: " << e.what() << "\n";
        return 1;
    }
        return 0;
}

