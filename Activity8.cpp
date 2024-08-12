#include <iostream>

using namespace std;

class Vector {
public:
    int *data;
    int size;
    Vector(int size) {
        this->size = size;
        data = new int[size];
    }

    ~Vector() {
        delete[] data;
    }

    // Add an element to the vector
    void push_back(int element) {
        for (int i = 0; i < size; i++) {
            if (data[i] == 0) {
                data[i] = element;
                return;
            }
        }
    }

    // Find the smallest element in the vector
    int smallest() {
        int min = data[0];
        for (int i = 1; i < size; i++) {
            if (data[i] < min) {
                min = data[i];
            }
        }
        return min;
    }

    // Search for an element in the vector
    bool search(int element) {
        for (int i = 0; i < size; i++) {
            if (data[i] == element) {
                return true;
            }
        }
        return false;
    }

    // Find the average of the elements in the vector
    double average() {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += data[i];
        }
        return (double)sum / size;
    }
void print() {
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;
    cout << "Enter the size of the vector: ";
    cin >> size;

    Vector intVector(size);
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> intVector.data[i];
    }

    cout << "Input vector: ";
    intVector.print();

    cout << "Smallest element: " << intVector.smallest() << endl;
    int searchElement;
    cout << "Enter an element to search: ";
    cin >> searchElement;
    cout << "Search for " << searchElement << ": " << (intVector.search(searchElement) ? "Found" : "Not found") << endl;
    cout << "Average: " << intVector.average() << endl;

    return 0;
}



