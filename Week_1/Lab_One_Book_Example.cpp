#include "Lab_One_Book_Example.h"

// Assembles the object
Book::Book(int id, int len, std::string name){
    bookID = id;
    pageLength = len;
    bookTitle.assign(name);
}

int Book::getBookID() const{
    return bookID;
}

void Book::setBookID(int id){
    bookID = id;
}

int Book::getPageLength() const{
    return pageLength;
}

void Book::setPageLength(int len){
    pageLength = len;
}

std::string Book::getBookTitle() const{
    return bookTitle;
}

void Book::setBookTitle(std::string title){
    bookTitle.assign(title);
}