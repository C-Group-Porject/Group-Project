#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Book {
    int book_id;
    std::string author_name;
    double price;
    int no_of_pages;
    std::string publisher;
    int year_of_publishing;
};

// Function to read books from a file
int readBooks(Book books[], int maxBooks, const string& filename) {
    ifstream file(filename);
    if (!file) {
        cerr << "Error opening file!" << endl;
        return 0;
    }

    int count = 0;
    while (count < maxBooks && file >> books[count].book_id) {
        file.ignore();  // Ignore the space after book_id

        // Read the author's name (including spaces) until the comma separator
        getline(file, books[count].author_name, ',');

        // Validate if the author name was read correctly
        if (books[count].author_name.empty()) {
            cerr << "Error reading author name for book " << books[count].book_id << endl;
            break;
        }

        // Read the remaining data
        if (!(file >> books[count].price >> books[count].no_of_pages)) {
            cerr << "Error reading price or number of pages for book " << books[count].book_id << endl;
            break;
        }

        // Attempt to read publisher and year of publishing
        file >> books[count].publisher >> books[count].year_of_publishing;

        // Debug output to verify reading process
        cout << "Read book: " << books[count].book_id << " "
                  << books[count].author_name << ", " << books[count].price << " "
                  << books[count].no_of_pages << " " << books[count].publisher << " "
                  << books[count].year_of_publishing << endl;

count++;
    }
    file.close();
    return count;
}

// Function to write books to a file
void writeBooks(const Book books[], int count, const string& filename) {
    ofstream file(filename);
    if (!file) {
        cerr << "Error opening file!" << endl;
        return;
    }

    for (int i = 0; i < count; i++) {
        file << books[i].book_id << " "
             << books[i].author_name << ", "
             << books[i].price << " "
             << books[i].no_of_pages << " "
             << books[i].publisher << " "
             << books[i].year_of_publishing << endl;
    }
    file.close();
}

// Function to sort books by author name
void sortBooksByAuthor(Book books[], int count) {
      for (int i=0; i< count - 1; i++){
            for(int j = i + 1 ;j < count; j++){
                  if(books[i].author_name > books[j].author_name){
                        //Swap books[i] and books[j]
                        Book temp = books[i];
                        books[i]=books[j];
                        books[j]=temp;
                  }
            }
      }
}

int main(){
      const int maxBooks = 100;
    Book books[maxBooks];

    // Read books from file
    int bookCount = readBooks(books, maxBooks, "books.txt");

    // Debug output to verify the number of books read
    cout << "Total books read: " << bookCount << endl;

    // Sort books by author name
    sortBooksByAuthor(books, bookCount);

    // Write sorted books to output file
    writeBooks(books, bookCount, "sorted_books.txt");

    cout << "Books have been sorted and written to sorted_books.txt" << endl;

    return 0;
}

    
