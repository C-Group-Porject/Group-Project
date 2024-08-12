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
