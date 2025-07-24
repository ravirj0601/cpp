#include<iostream>
using namespace std;

/*
Problem: Implement Two Stacks in One Array

Description:
You are given a fixed-size array. Implement two stacks in this array such that:
- Stack1 grows from left to right (index 0 → n-1)
- Stack2 grows from right to left (index n-1 → 0)
- Both stacks should operate independently using the same array
- If both stacks meet (i.e., no more space between them), prevent overflow

Operations to implement:
- push1(int x): Push element x into Stack1
- push2(int x): Push element x into Stack2
- pop1(): Pop and return top element from Stack1
- pop2(): Pop and return top element from Stack2
*/

class TwoStacks {
    int* arr;
    int top1, top2;
    int size;

public:
    TwoStacks(int n);     // Constructor to initialize array and pointers
    void push1(int x);    // Push to Stack1
    void push2(int x);    // Push to Stack2
    int pop1();           // Pop from Stack1
    int pop2();           // Pop from Stack2
};

TwoStacks::TwoStacks(int n) {
    size = n;
    arr = new int[n];
    top1 = -1;
    top2 = n;
}

void TwoStacks::push1(int x){
    if (top1 + 1 < top2) {
        arr[++top1] = x;
    } else {
        cerr << "Stack1 Overflow. Cannot push " << x << "\n";
    }
}

void TwoStacks::push2(int x){
    if (top2 - 1 > top1) {
        arr[--top2] = x;
    } else {
        cerr << "Stack2 Overflow. Cannot push " << x << "\n";
    }
}

int TwoStacks::pop1(){
    if (top1 >= 0) {
        return arr[top1--];
    } else {
        cerr << "Stack1 Underflow. Nothing to pop.\n";
        return -1;
    }
}

int TwoStacks::pop2(){
    if (top2 < size) {
        return arr[top2++];
    } else {
        cerr << "Stack2 Underflow. Nothing to pop.\n";
        return -1;
    }
}

int main() {
    TwoStacks ts(4);
    ts.push1(10);
    ts.push2(20);
    ts.push1(30);
    ts.push2(40);
    ts.push1(50);  // Should cause Stack1 Overflow if no space
    cout << "Pop from Stack1: " << ts.pop1() << endl; // 30
    cout << "Pop from Stack2: " << ts.pop2() << endl; // 40

    return 0;
}


class TwoStacks {
    int* arr;
    int top1, top2;
    int size;

public:
    TwoStacks(int n){
        arr = new int[n];
        top1 = -1;
        top2 = n;
        size = n;
    };     // Constructor to initialize array and pointers
    void push1(int x){
        if (top1+1 == top2)
        {
            cerr << "Stack is full can not push "<< x << endl;
            return;
        }
        top1++;
        arr[top1] = x;
    };    // Push to Stack1

    void push2(int x){
        if (top2 - 1 == top1)
        {
            cerr << "Stack is full can not push "<< x << endl;
            return; 
        }
        top2--;
        arr[top2] = x;
    };    // Push to Stack2
    
    int pop1(){
        if (top1 == -1)
        {
            cerr << "Stack is empty can not pop. " << endl;
            return;
        }
        int element = arr[top1];
        top1--;
        return element;
    };           // Pop from Stack1
    int pop2(){
        if (top2 == size)
        {
            cerr << "Stack is empty can not pop. " << endl;
            return;
        }
        int element = arr[top2];
        top2++;
        return element;
        
    };           // Pop from Stack2
};