#include <iostream>
#include <queue>
using namespace std;


void interleaveQueue(queue<int>& numbers){
    queue<int> firstHalf;
    int n = numbers.size();
    int mid =  n/2;
    int temp;
    for (int i = 0; i < mid; i++) {
        temp =  numbers.front();
        numbers.pop();
        firstHalf.push(temp);
    }
    for (int i = 0; i < mid; i++) {
        // First half needs to envoke firsk
        temp = firstHalf.front();
        firstHalf.pop();
        numbers.push(temp);

        // This is the second half to invoke
        temp = numbers.front();
        numbers.pop();
        numbers.push(temp);
    }
}

void printQueue(queue<int> no){
    int temp;
    cout << "Elements in Queue: ";
    while(!no.empty()){
        temp = no.front();
        no.pop();
        cout <<  temp << " " ;
    }
    cout << "\n";
}

int main(){

    queue<int> numbers;
    numbers.push(1);
    numbers.push(2);
    numbers.push(3);
    numbers.push(4);
    numbers.push(5);
    numbers.push(6);
    interleaveQueue(numbers);
    printQueue(numbers); 
    return 0;
}
