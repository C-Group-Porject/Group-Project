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


    
