#include <iostream>
#include <stack>

using namespace std;

class Queue{
public:
    stack<int> s1, s2;
    int temp;

    Queue(){}
    void enqueue(int value){
        s1.push(value);
    }

    int dequeue(){
        if (s1.empty() && s2.empty()) {
            cerr << "Queue is empty Can not dequeue...!\n";
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                temp = s1.top();
                s1.pop();
                s2.push(temp);
            }
        }
        temp = s2.top();
        s2.pop();
        return temp;
    }

};


int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << q.dequeue() << endl;  // 10
    cout << q.dequeue() << endl;  // 20
    q.enqueue(40);
    cout << q.dequeue() << endl;  // 30
    cout << q.dequeue() << endl;  // 40

    // Should handle empty case:
    cout << q.dequeue() << endl;  // -1 or error message
    return 0;
}
