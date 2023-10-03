#include "Lab_One_Book_Example.h"

Book::Book(int num, std::string title, int length){
    bookID = num;
    bookTitle.assign(title);
    pageLength = length;
}

// Added for helpfulness later, sets a default state
Book::Book(){
    bookID = -1;
    bookTitle.assign("");
    pageLength = -1;
}

int Book::getBookID(){
    return bookID;
}

void Book::setBookID(int ID){
    bookID = ID;
}

std::string Book::getBookTitle(){
    return bookTitle;
}

void Book::setBookTitle(std::string title){
    bookTitle.assign(title);
}

int Book::getPageLength(){
    return pageLength;
}

void Book::setPageLength(int len){
    pageLength = len;
}

// Again adding the main here because it's easier to keep
// track of.

int main(){
    // Create empty Book objects
    Book one, two;
    // Create a populated Book object
    Book three(9389, "To Kill a Mocking Bird", 336);

    std::cout << "The book number for the first book is: " << one.getBookID() << std::endl;
    std::cout << "The book number for the second book is: " << two.getBookID() << std::endl;
    std::cout << "The book number for the third book is: " << three.getBookID() << std::endl;

    return 0;
}