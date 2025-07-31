#include<iostream>
using namespace std;

class Queue{
public:
    int *arr;
    int front;
    int rear;
    int size;
    int capacity;
    Queue(int cap){
        arr = new int[cap];
        front = 0;
        rear = 0;
        size = 0;
        capacity = cap;
    }

    bool enqueue(int val){
        if (capacity == size)   
        {
            cerr << "Queue is full...\n";
            return false;
        }
        // for(size_t i = 0; i < capacity; i++){
        //     arr[i+1] = arr[i];
        // }
        arr[rear] = val;
        rear++;
        size++;
        return true;
    }

    int dequeue(){
        if(size == 0){
            cerr<<"Queue is Empty...\n";
            return 0;
        }
        int element = arr[front];
        front++;
        size--;
        return element;
    }
    
    bool isEmpty(){
        return size == 0;
    }

    int peek(){
        if (isEmpty())
        {
            return 0;
        }
        int element = arr[front];
        return element;
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
