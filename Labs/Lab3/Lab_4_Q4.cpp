// 4. Some of the characteristics of a book are the title, author(s), publisher, ISBN, price,
// and year of publication. Design a class bookType that defines the book as an ADT.
// • Each object of the class bookType can hold the following information about a
// book: title, up to four authors, publisher, ISBN, price, and number of copies in
// stock. To keep track of the number of authors, add another member variable.
// • Include the member functions to perform the various operations on objects of
// type bookType.
// For example, the usual operations that can be performed on the title are to
// show the title, set the title, and check whether a title is the same as the actual
// title of the book. Similarly, the typical operations that can be performed on the
// number of copies in stock are to show the number of copies in stock, set the
// number of copies in stock, update the number of copies in stock, and return the
// number of copies in stock. Add similar operations for the publisher, ISBN, book
// price, and authors. Add the appropriate constructors and a destructor (if one is
// needed).
// • Write the definitions of the member functions of the class bookType.
// • Write a program that uses the class bookType and tests various operations on
// the objects of the class bookType. Declare an array of 100 components of type
// bookType. Some of the operations that you should perform are to search for a
// book by its title, search by ISBN, and update the number of copies of a book.


#include <iostream>
#include <string>
using namespace std;

class bookType {
private:
    string title;
    string authors[4];
    int numAuthors;
    string publisher;
    string ISBN;
    double price;
    int numCopiesInStock;

public:
    // Default constructor
    bookType() : numAuthors(0), price(0.0), numCopiesInStock(0) {}

    // Parameterized constructor
    bookType(string t, string a[], int nA, string p, string isbn, double pr, int numCopies)
        : title(t), numAuthors(nA), publisher(p), ISBN(isbn), price(pr), numCopiesInStock(numCopies) {
        for (int i = 0; i < nA; i++) {
            authors[i] = a[i];
        }
    }

    // Setters
    void setTitle(string t) {
        title = t;
    }

    void setAuthors(string a[], int nA) {
        numAuthors = nA;
        for (int i = 0; i < nA; i++) {
            authors[i] = a[i];
        }
    }

    void setPublisher(string p) {
        publisher = p;
    }

    void setISBN(string isbn) {
        ISBN = isbn;
    }

    void setPrice(double pr) {
        price = pr;
    }

    void setNumCopiesInStock(int numCopies) {
        numCopiesInStock = numCopies;
    }

    // Getters
    string getTitle() const {
        return title;
    }

    void getAuthors() const {
        for (int i = 0; i < numAuthors; i++) {
            cout << authors[i] << (i == numAuthors - 1 ? "" : ", ");
        }
    }

    string getPublisher() const {
        return publisher;
    }

    string getISBN() const {
        return ISBN;
    }

    double getPrice() const {
        return price;
    }

    int getNumCopiesInStock() const {
        return numCopiesInStock;
    }

    // Operations
    bool checkTitle(string t) const {
        return title == t;
    }

    bool checkISBN(string isbn) const {
        return ISBN == isbn;
    }

    void updateNumCopies(int numCopies) {
        numCopiesInStock += numCopies;
    }

    // Display function
    void displayBookInfo() const {
        cout << "Title: " << title << endl;
        cout << "Authors: ";
        getAuthors();
        cout << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Price: $" << price << endl;
        cout << "Number of Copies in Stock: " << numCopiesInStock << endl;
    }
};

// Test program
int main() {
    // Declare an array of 100 bookType objects
    bookType books[100];
    int numBooks = 0;

    // Sample data
    string authors1[] = {"Author A", "Author B"};
    books[numBooks++] = bookType("Book 1", authors1, 2, "Publisher 1", "ISBN001", 25.99, 10);

    string authors2[] = {"Author C"};
    books[numBooks++] = bookType("Book 2", authors2, 1, "Publisher 2", "ISBN002", 15.99, 5);

    // Display book information
    for (int i = 0; i < numBooks; i++) {
        books[i].displayBookInfo();
        cout << endl;
    }

    // Search for a book by title
    string searchTitle = "Book 1";
    bool found = false;
    for (int i = 0; i < numBooks; i++) {
        if (books[i].checkTitle(searchTitle)) {
            cout << "Book with title '" << searchTitle << "' found:" << endl;
            books[i].displayBookInfo();
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Book with title '" << searchTitle << "' not found." << endl;
    }

    // Search for a book by ISBN
    string searchISBN = "ISBN002";
    found = false;
    for (int i = 0; i < numBooks; i++) {
        if (books[i].checkISBN(searchISBN)) {
            cout << "Book with ISBN '" << searchISBN << "' found:" << endl;
            books[i].displayBookInfo();
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Book with ISBN '" << searchISBN << "' not found." << endl;
    }

    // Update the number of copies for a book
    string updateISBN = "ISBN001";
    int additionalCopies = 5;
    for (int i = 0; i < numBooks; i++) {
        if (books[i].checkISBN(updateISBN)) {
            books[i].updateNumCopies(additionalCopies);
            cout << "Updated number of copies for ISBN '" << updateISBN << "':" << endl;
            books[i].displayBookInfo();
            break;
        }
    }

    return 0;
}
