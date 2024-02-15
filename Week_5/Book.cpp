#include "Book.h"

Book::Book(){
    bookID = -1;
    bookTitle.assign("");
    pageLength = -1;
}

Book::Book(int num, std::string title, int length){
    bookID = num;
    bookTitle.assign(title);
    pageLength = length;
}

Book::Book(Book& other){
    bookID = other.bookID;
    bookTitle.assign(other.bookTitle);
    pageLength = other.pageLength;
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


std::ostream& Book::displayBook(std::ostream& os){
    os << "Book Number: " << this->bookID << std::endl;
    os << "Book Title: " << this->bookTitle << std::endl;
    os << "Page Length: " << this->pageLength << std::endl;
}