#include <iostream>
using namespace std;

template <typename T>
class Vector {
private:
    T elements[100];
    int size;

public:
    Vector() : size(0) {}

    void addElement(T element) {
        if (size < 100) {
            elements[size++] = element;
        }
    }
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
