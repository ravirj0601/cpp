#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseFirstK(queue<int>& numbers, int k){
    stack<int> st;
    int temp;
    int n = numbers.size();
    for(int i = 0; i < k; i++){
       temp = numbers.front();
       numbers.pop();
       st.push(temp);
    }
    for (int i =  0; i < k; i++) {
        temp = st.top();
        st.pop();
        numbers.push(temp);
    }

    for (int i = 0 ; i < n - k; i++) {
        temp = numbers.front();
        numbers.pop();
        numbers.push(temp);  
    }
}


void printQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main(){
    queue<int> numbers;
    numbers.push(10);
    numbers.push(20);
    numbers.push(30);
    numbers.push(40);
    numbers.push(50);
    int k = 3;
    reverseFirstK(numbers, k);
    printQueue(numbers);
    return 0;
}
