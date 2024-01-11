#include "Lab_One_Book_Example.h"

Book::Book(int id, std::string title){
    bookID = id;
    bookTitle.assign(title); // copies the contents of one string into another
}

// Getters
int Book::getBookID() const{
    return bookID;
}

std::string Book::getBookTitle() const{
    return bookTitle;
}

// Setters
void Book::setBookID(int id){
    bookID = id;
}

void Book::setBookTitle(std::string title){
    bookTitle.assign(title);
}

int main(){
    Book bookA(1, "Smoke Gets In Your Eyes");

    std::cout << bookA.getBookTitle() << std::endl;

    bookA.setBookTitle("War and Peace");

    std::cout << bookA.getBookTitle() << std::endl;

    return 0;
}