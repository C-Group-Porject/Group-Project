      count++;
    }
    file.close();
    return count;
}

// Function to write books to a file
void writeBooks(const Book books[], int count, const std::string& filename) {
    std::ofstream file(filename);
    if (!file) {
        std::cerr << "Error opening file!" << std::endl;
        return;
    }

    for (int i = 0; i < count; i++) {
        file << books[i].book_id << " "
             << books[i].author_name << ", "
             << books[i].price << " "
             << books[i].no_of_pages << " "
             << books[i].publisher << " "
             << books[i].year_of_publishing << std::endl;
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
    std::cout << "Total books read: " << bookCount << std::endl;

    // Sort books by author name
    sortBooksByAuthor(books, bookCount);

    // Write sorted books to output file
    writeBooks(books, bookCount, "sorted_books.txt");

    std::cout << "Books have been sorted and written to sorted_books.txt" << std::endl;

    return 0;
}

    
