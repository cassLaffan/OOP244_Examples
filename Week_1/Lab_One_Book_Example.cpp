#include "Lab_One_Book_Example.h"

Book::Book(int num, std::string title, int length){
    bookID = num;
    bookTitle.assign(title);
    pageLength = length;
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