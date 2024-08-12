#include <iostream>
#include <algorithm> // For std::max

// Function to find the largest of three integers
int find_largest(int a, int b, int c) {
    return std::max(std::max(a, b), c);
}

// Function to find the largest of three floats
float find_largest(float a, float b, float c) {
    return std::max(std::max(a, b), c);
}

// Function to find the largest of three doubles
double find_largest(double a, double b, double c) {
    return std::max(std::max(a, b), c);
}
int main() {
    int choice;
    
    std::cout << "Choose the type of numbers you want to compare:" << std::endl;
    std::cout << "1. Integer" << std::endl;
    std::cout << "2. Float" << std::endl;
    std::cout << "3. Double" << std::endl;
    std::cout << "Enter your choice (1/2/3): ";
    std::cin >> choice;

    switch (choice) {
        case 1: {
            // Handle integers
            int num1, num2, num3;
            std::cout << "Enter three integers:" << std::endl;
            std::cout << "First integer: ";
            std::cin >> num1;
            std::cout << "Second integer: ";
            std::cin >> num2;
            std::cout << "Third integer: ";
            std::cin >> num3;

             int largest = find_largest(num1, num2, num3);
            std::cout << "You entered: " << num1 << ", " << num2 << ", " << num3 << std::endl;
            std::cout << "The largest number is: " << largest << std::endl;
            break;
        }
        case 2: {
            // Handle floats
            float num1, num2, num3;
            std::cout << "Enter three floats:" << std::endl;
            std::cout << "First float: ";
            std::cin >> num1;
            std::cout << "Second float: ";
            std::cin >> num2;
            std::cout << "Third float: ";
            std::cin >> num3;

------------------------------------------------
    Anushka's Part (Delete this after you have pasted your part);
------------------------------------------------

    double largest = find_largest(num1, num2, num3);
    std::cout <<"You entered: "<< num1 <<", "<< num2 <<", "<< num3 <<std::endl;
    std::cout <<" The largest number is: "<< largest << std::endl;
    break;
}
default:
    std::cout << "Invalid choice. Please run the program again and select 1, 2, 3."<<std::endl;
break;
    }
return 0;
}
            

