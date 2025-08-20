#include <iostream>
#include <stack>

using namespace std;

/**
 * created a class called queue
 * -    private: Created a two vectors first and second..
 * -    public:
 *      -   1st Method enqueue
 *              -   push the new value to first stack
 *       -  2nd method
 *          -   if first stack and second stack is not empty 
 *              -   while first element get empty
 *                  -   move all the elements from first to second
 *              -   POP one element and save it to temp
 *              -   return temp
 *      */

class QueueImp{
    private:
        stack<int>  firstS;
        stack<int>  second;
    public:
        void enqueue(int value){
            firstS.push(value);
        }

        int dequeue(){
            int temp;
            if (firstS.empty() && second.empty()) {
                cerr << "Queue is empty...!\n";
                return -1;
            }
            if (second.empty()) {
                while (!firstS.empty()) {
                    temp = firstS.top();
                    firstS.pop();
                    second.push(temp);
                }
            }
            temp = second.top();
            second.pop();
            return temp;
        }

        int peek(){
            int temp;
            if (firstS.empty() && second.empty()) {
                cerr << "Queue is empty...!\n";
                return -1;
            }
            if (second.empty()) {
                while (!firstS.empty()) {
                    temp = firstS.top();
                    firstS.pop();
                    second.push(temp);
                }
            }
            temp = second.top();
            return temp;
        }

        bool isEmpty(){
            return firstS.empty() && second.empty();
        }
};

int main() {
    QueueImp qq;
    qq.enqueue(10);
    qq.enqueue(20);
    qq.enqueue(30);
    cout << qq.dequeue() << "\n";
    qq.enqueue(40);
    cout << qq.dequeue() << "\n";
    if (qq.isEmpty()) {
        cout << "Queue is empty...!\n";
    }else {
        cout <<  "Queue is not empty...!\n";
    }
    cout << "Top: " << qq.peek() << "\n";
   

    return 0;
}

