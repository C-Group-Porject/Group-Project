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
