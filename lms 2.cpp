#include <iostream>
#include <string>

using namespace std;

// Constants
const int MAX_BOOKS = 100;
const int MAX_BORROWERS = 50;

// Book structure
struct Book {
    string title;
    string author;
    int quantity;
};

// Borrower structure
struct Borrower {
    string name;
    int ID;
};

// Function to add a new book
void addBook(Book* books, int& numBooks) {
    if (numBooks < MAX_BOOKS) {
        Book* newBook = new Book; // Dynamically allocate memory for new book
        cout << "Enter book title: ";
        cin.ignore(); // Clear newline from previous input
        getline(cin, newBook->title);
        cout << "Enter author: ";
        getline(cin, newBook->author);
        cout << "Enter quantity: ";
        cin >> newBook->quantity;
        
        books[numBooks++] = *newBook; // Copy book to array
        delete newBook; // Deallocate memory
        cout << "Book added successfully!" << endl;
    } else {
        cout << "Maximum book limit reached." << endl;
    }
}

// Function to display all books
void displayBooks(const Book* books, int numBooks) {
    cout << "Books in the library:" << endl;
    for (int i = 0; i < numBooks; i++) {
        cout << i + 1 << ". " << books[i].title << " by " << books[i].author
             << " (Quantity: " << books[i].quantity << ")" << endl;
    }
}

int main() {
    Book* books = new Book[MAX_BOOKS]; // Dynamically allocate memory for books array
    int numBooks = 0;

    int choice;
    do {
        cout << "\nLibrary Management System Menu:" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Display Books" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addBook(books, numBooks);
                break;
            case 2:
                displayBooks(books, numBooks);
                break;
            case 3:
                cout << "Exiting. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 3);

    delete[] books; // Deallocate memory for books array
    return 0;
}
