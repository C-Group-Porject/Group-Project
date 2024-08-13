#include <iostream>
using namespace std;

// Template class definition for a Vector
template <typename T>
class Vector {
private:
    T elements[100];
    int size;

public:
// Constructor to initialize the vector size to 0
    Vector() : size(0) {}

    void addElement(T element) {
        if (size < 100) {
            elements[size++] = element;
        }
    }

// Function to find the smallest element in the vector
T smallestElement() {
        if (size == 0) {
            cout << "Vector is empty." << endl;
            return T();
        }

        T smallest = elements[0];
        for (int i = 1; i < size; i++) {
            if (elements[i] < smallest) {
                smallest = elements[i];
            }
        }
        return smallest;
    }

// Function to search for an element in the vector
    int searchElement(T element) {
        for (int i = 0; i < size; i++) {
            if (elements[i] == element) {
                return i;
            }
        }
        return -1; // Element not found
    }

// Function to calculate the average of elements in the vector
    T averageElement() {
        if (size == 0) {
            cout << "Vector is empty." << endl;
            return T();
        }

        T sum = 0;
        for (int i = 0; i < size; i++) {
            sum += elements[i];
        }
        return sum / size;
    }

// Function to display the elements of the vector
    void display() {
        for (int i = 0; i < size; i++) {
            cout << elements[i] << " ";
        }
        cout << endl;
    }
};

    int main() {
    Vector<int> vec;
    int n, element;

    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        vec.addElement(element);
    }


    cout << "Smallest element: " << vec.smallestElement() << endl;
    cout << "Enter element to search: ";
    cin >> element;
    int index = vec.searchElement(element);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }
    cout << "Average of elements: " << vec.averageElement() << endl;

    cout << "Vector elements: ";
    vec.display();

    return 0;
}
