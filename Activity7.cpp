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
int count = 0;
    while (count < maxBooks && file >> books[count].book_id) {
        file.ignore();  // Ignore the space after book_id

        // Read the author's name (including spaces) until the comma separator
        std::getline(file, books[count].author_name, ',');

        // Validate if the author name was read correctly
        if (books[count].author_name.empty()) {
            std::cerr << "Error reading author name for book " << books[count].book_id << std::endl;
            break;
        }

        // Read the remaining data
        if (!(file >> books[count].price >> books[count].no_of_pages)) {
            std::cerr << "Error reading price or number of pages for book " << books[count].book_id << std::endl;
            break;
        }
