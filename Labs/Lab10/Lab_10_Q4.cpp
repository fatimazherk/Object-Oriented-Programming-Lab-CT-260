// Create an abstract class template for 1D dynamic array. Inherit a
// dynamic Queue template class from the abstract class which must have
// following methods: isFull( ), isEmpty( ), size( ), Front( ), Rear( ),
// enqueue( ), dequeue( ), resize( ).

#include <iostream>
#include <stdexcept>
using namespace std;

template <class T>
class DynamicArray {
public:
    virtual bool isFull() = 0;
    virtual bool isEmpty() = 0;
    virtual int getSize() = 0;
    virtual void resize() = 0;
};

template<class T>
class DynamicQueue : public DynamicArray<T> {
private:
    T *queue;
    int front, rear, count, size;

    void resize() override {
        T *newQueue = new T[size * 2];
        for (int i = 0; i < size; i++) {
            newQueue[i] = queue[(front + i) % size];
        }
        delete[] queue;
        queue = newQueue;
        size = size * 2;
        front = 0;
        rear = count - 1;
    }

public:
    DynamicQueue(int size) : size(size), count(0), front(0), rear(-1), queue(new T[size]) {}

    ~DynamicQueue() {
        delete[] queue;
    }

    int getSize() override {
        return size;
    }

    bool isEmpty() override {
        return count == 0;
    }

    bool isFull() override {
        return count == size;
    }

    void enqueue(T value) {
        if (isFull()) {
            resize();
        }
        rear = (rear + 1) % size;
        queue[rear] = value;
        count++;
    }

    T dequeue() {
        if (isEmpty()) {
            throw out_of_range("Queue is empty");
        }
        T value = queue[front];
        front = (front + 1) % size;
        count--;
        return value;
    }

    T getFront() {
        if (isEmpty()) {
            throw out_of_range("Queue is empty");
        }
        return queue[front];
    }

    T getRear() {
        if (isEmpty()) {
            throw out_of_range("Queue is empty");
        }
        return queue[rear];
    }
};

int main() {
    DynamicQueue<int> queue(5);

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);

    cout << "Front: " << queue.getFront() << endl;
    cout << "Rear: " << queue.getRear() << endl;

    queue.dequeue();
    queue.enqueue(6);

    cout << "Front: " << queue.getFront() << endl;
    cout << "Rear: " << queue.getRear() << endl;

    return 0;
}
