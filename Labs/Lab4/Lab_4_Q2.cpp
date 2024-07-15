// Create a class called DynamicArray. The class should contain a pointer to the
// array, and size of the array as data members. Create the parameterized constructor
// which take size of the array as input and initializes all the values with 0. Create the
// member function “push” which takes value as parameter and push it to the end of
// the array. Create the member function size() which returns the size of the array.

#include <iostream>
#include <cstring>

using namespace std;

class DynamicArray {
private:
    int* array;
    int capacity;
    int current_size;

    // Function to resize the array when needed
    void resize(int new_capacity) {
        int* new_array = new int[new_capacity];
        memcpy(new_array, array, current_size * sizeof(int));
        delete[] array;
        array = new_array;
        capacity = new_capacity;
    }

public:
    // Parameterized constructor
    DynamicArray(int size) : capacity(size), current_size(0) {
        array = new int[capacity];
        memset(array, 0, capacity * sizeof(int));
    }

    // Destructor to free allocated memory
    ~DynamicArray() {
        delete[] array;
    }

    // Push function to add value to the end of the array
    void push(int value) {
        if (current_size == capacity) {
            resize(capacity * 2); // Double the capacity if array is full
        }
        array[current_size++] = value;
    }

    // Function to get the size of the array
    int size() const {
        return current_size;
    }

    // Function to get the value at a specific index
    int get(int index) const {
        if (index < 0 || index >= current_size) {
            throw out_of_range("Index out of range");
        }
        return array[index];
    }
};

int main() {
    DynamicArray arr(5);
    arr.push(10);
    arr.push(20);
    arr.push(30);
    arr.push(40);
    arr.push(50);
    arr.push(60); // This will trigger a resize

    cout << "Array size: " << arr.size() << endl;
    for (int i = 0; i < arr.size(); ++i) {
        cout << "Element at index " << i << ": " << arr.get(i) << endl;
    }

    return 0;
}
