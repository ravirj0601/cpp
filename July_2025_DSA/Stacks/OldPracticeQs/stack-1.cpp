#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Stack{
private:
    vector<int> stack_;
public:
    Stack(){}
    void push(int x){
        stack_.push_back(x);
    }

    int pop(){
        if(stack_.empty()){
            cerr << "Stack is empty. Nothing to show.\n";
            return -1;
        }
        int ans = stack_[stack_.size() - 1];
        stack_.pop_back();
        return ans;
    }

    int peek(){
        if(stack_.empty()){
            cerr << "Stack is empty. Nothing to show.\n";
            return -1;
        }
        int ans = stack_[stack_.size() - 1];
        return ans;
    }

    bool isEmpty(){
        return stack_.empty();
    }

    int size(){
        return stack_.size();
    }
};

int main(int argc, char const *argv[])
{
    // Manual Implimentation.....
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    cout << s.peek() << endl;
    
    //STL Implementaion....
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.pop();
    cout << s1.top() << endl; ;
    cout << "Is s1 empty? " << s1.empty() << endl;
    cout << "Size of s1: " << s1.size() << endl;
    
    return 0;
}
