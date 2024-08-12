#include <iostream>
#include <algorithm> 
using namespace std;

// Function to find the largest of three integers
int find_largest(int a, int b, int c) {
    return std::max(std::max(a, b), c);
}

// Function to find the largest of three floats
float find_largest(float a, float b, float c) {
    return max(max(a, b), c);
}

// Function to find the largest of three doubles
double find_largest(double a, double b, double c) {
    return max(max(a, b), c);
}
int main() {
    int choice;
    
    cout << "Choose the type of numbers you want to compare:" << endl;
    cout << "1. Integer" << endl;
    cout << "2. Float" << endl;
    cout << "3. Double" << endl;
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            // Handle integers
            int num1, num2, num3;
            cout << "Enter three integers:" << endl;
            cout << "First integer: ";
            cin >> num1;
            cout << "Second integer: ";
            cin >> num2;
            cout << "Third integer: ";
            cin >> num3;

            int largest = find_largest(num1, num2, num3);
            cout << "You entered: " << num1 << ", " << num2 << ", " << num3 << endl;
            cout << "The largest number is: " << largest << endl;
            break;
        }
        case 2: {
            // Handle floats
            float num1, num2, num3;
            cout << "Enter three floats:" << endl;
            cout << "First float: ";
            cin >> num1;
            cout << "Second float: ";
            cin >> num2;
            cout << "Third float: ";
            cin >> num3;
            
            float largest = find_largest(num1, num2, num3);
            cout << "You entered: " << num1 << ", " << num2 << ", " << num3 << endl;
            cout << "The largest number is: " << largest << endl;
            break;
        }
        case 3: {
            // Handle doubles
            double num1, num2, num3;
            cout << "Enter three doubles:" << endl;
            cout << "First double: ";
            cin >> num1;
            cout << "Second double: ";
            cin >> num2;
            cout << "Third double: ";
            cin >> num3;


            double largest = find_largest(num1, num2, num3);
            cout <<"You entered: "<< num1 <<", "<< num2 <<", "<< num3 << endl;
            cout <<" The largest number is: "<< largest << endl;
            break;
        }
            default:
            cout << "Invalid choice. Please run the program again and select 1, 2, 3."<< endl;
            break;
    }
            return 0;
}
            

