#include <iostream>
#include <queue>
using namespace std;

/**
 * CircularQueue (using array)
 * ----------------------------
 * A fixed-size circular queue that supports:
 * - enqueue(x): insert at rear
 * - dequeue(): remove from front
 * - getFront(): peek at the front element
 * - isFull(): checks if the queue is full
 * - isEmpty(): checks if the queue is empty
 *
 * Internally maintains:
 * - front: index of the front element
 * - rear: index of the last inserted element
 * - size: current number of elements
 * - capacity: max size of queue
 * - arr[]: array for storage
 */
class CircularQueue {
  int *arr;
  int front, rear, size, capacity;

public:
  CircularQueue(int cap) {
    capacity = cap;
    arr = new int[capacity];
    front = 0;
    size = 0;
    rear = capacity - 1;
  }

  ~CircularQueue() { delete[] arr; }

  bool isFull() { return size == capacity; }

  bool isEmpty() { return size == 0; }

  void enqueue(int x) {
    if (isFull()) {
      cout << "Queue Overflow\n";
      return;
    }
    rear = (rear + 1) % capacity;
    arr[rear] = x;
    size++;
  }

  void dequeue() {
    if (isEmpty()) {
      cout << "Queue Underflow\n";
      return;
    }
    front = (front + 1) % capacity;
    size--;
  }

  int getFront() {
    if (isEmpty()) {
      cout << "Queue is Empty\n";
      return -1;
    }
    return arr[front];
  }
};

// Test function for CircularQueue
void testCircularQueue() {
  CircularQueue q(5);
  q.enqueue(10);
  q.enqueue(20);
  q.enqueue(30);
  q.dequeue();
  cout << "Front Element: " << q.getFront() << endl; // Should print 20
}

/**
 * Using Linked List
 *      For Dynamic Resizable
 */
void usingLinkedList() {}

/**
 * Using STL
 */
void usingSTL() {}

int main(int argc, char const *argv[]) {
  // Test CircularQueue
  testCircularQueue();
  return 0;
}
