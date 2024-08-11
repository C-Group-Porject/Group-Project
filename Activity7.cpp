#include <iostream>
#include <fstream>
#include <string>

struct Book {
    int book_id;
    std::string author_name;
    double price;
    int no_of_pages;
    std::string publisher;
    int year_of_publishing;
};

// Function to read books from a file
int readBooks(Book books[], int maxBooks, const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error opening file!" << std::endl;
        return 0;
    }

