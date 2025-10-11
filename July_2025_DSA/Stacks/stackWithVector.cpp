#include <iostream>
#include <stdexcept>
#include <vector>


class stackWithVector{
    private:
        std::vector<int> st;
        int limit_;
    public:
        stackWithVector(int size):limit_(size){}
        void push(const int& value){
            if (st.size() >= limit_) {
                throw std::out_of_range("Stack is full!");
            }
            st.push_back(value);
        }

        int pop(){
            if (st.empty()) throw std::underflow_error("Stack is empty!");
            int val = st.back();
            st.pop_back();
            return val;
        }

        int top() const {
            if (st.empty()) throw std::underflow_error("Stack is empty!");
            return st.back();
        }

        int size() const noexcept { return st.size(); }
        
        bool isEmpty() const noexcept{
            return st.empty();
        }

        size_t max_size() const noexcept { return st.capacity(); }

        void printElement(){
            std::cout << "Elements: ";
            for (auto const num : st) {
                std::cout << num << " ";
            }
            std::cout << "\n";
        }

        ~stackWithVector(){}

};

int main() {
    std::cout << "--- Simple Stack Test ---\n";
    stackWithVector st(3);

    st.push(10);
    st.push(20);
    st.push(30);
    st.printElement();
    std::cout << "Top element: " << st.top() << ", Size: " << st.size() << "\n";

    st.pop();
    st.printElement();
    std::cout << "Top element: " << st.top() << ", Size: " << st.size() << "\n";

    st.push(40);
    st.printElement();
    std::cout << "Top element: " << st.top() << ", Size: " << st.size() << "\n";

    std::cout << "Is stack empty? " << (st.isEmpty() ? "Yes" : "No") << "\n";

    // Test stack overflow
    try {
        std::cout << "Attempting to push to a full stack (expecting exception)...\n";
        st.push(50);
    } catch (const std::out_of_range& ex) {
        std::cout << "Caught expected exception: " << ex.what() << "\n";
    }

    // Empty the stack
    while (!st.isEmpty()) {
        st.pop();
    }

    // Test stack underflow
    try {
        std::cout << "Attempting to pop from an empty stack (expecting exception)...\n";
        st.pop();
    } catch (const std::underflow_error& ex) {
        std::cout << "Caught expected exception: " << ex.what() << "\n";
    }

    std::cout << "--- Simple Stack Test Completed ---\n";

    return 0;
}

