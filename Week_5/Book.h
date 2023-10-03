#ifndef BOOK_H
#define BOOK_H

#include <iostream>

// This is our book class from week 1. Here, I'm using it as a parent class
// For a manga class, defined in another file

class Book{
    int bookID;
    std::string bookTitle;
    int pageLength;
public:
    Book();
    Book(int, std::string, int);
    Book(Book&);

    int getBookID();
    void setBookID(int);

    std::string getBookTitle();
    void setBookTitle(std::string);

    int getPageLength();
    void setPageLength(int);
};

#endif