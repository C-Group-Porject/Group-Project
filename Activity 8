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
