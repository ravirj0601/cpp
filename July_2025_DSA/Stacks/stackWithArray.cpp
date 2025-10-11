#include <iostream>
#include <vector>
using namespace std;
class StackUsingArray{
    private:
        int* arr;
        int top = -1;
        int capacity = 0;
    public:
        StackUsingArray(): capacity(4), arr(new int[4]){}// default Constr
        StackUsingArray(int size):capacity(size) {
            arr = new int[capacity];
        }                                               // parameterized Constr
        void push(int val){                             // push()
            if (top == capacity-1) {
                cout << "Out Of Bound....!\n";
                return;
            } 
            top++;
            arr[top] = val;
        }
        int pop(){                      // pop()
            if (isEmpty()) {
                cout << "Stack is Empty...!\n";
                return -1;
            }
            int temp = arr[top];
            top--;
            return temp;
        }
        int peek(){                     // Peek()
            if (isEmpty()) {
                return -1;
            }
            int temp = arr[top];
            return temp;
        }
        bool isEmpty(){                 //  isEmpty
            if (top == -1) {
                return true;
            }
            return false;
        }
        bool isFull(){                  // isFull()
            if (top == capacity-1) {
                return true;
            }
            return false;
        }
        int size(){                    // size()
            return top+1;
        }
        ~StackUsingArray(){             // Destructor
            delete[] arr;
        }

};

int main() {
    StackUsingArray atA1(3);
    atA1.push(4);
    atA1.push(5);
    atA1.push(6);
    atA1.push(7);
    atA1.push(9);
    cout << atA1.pop() << "\n";
    cout << atA1.pop() << "\n";
    cout << atA1.isEmpty() << "\n";
    cout << atA1.isFull() << "\n";
    cout << atA1.peek() << "\n";
    cout << atA1.size() << "\n";
    return 0;
}

