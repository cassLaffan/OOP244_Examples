#ifndef BOOK_H
#define BOOK_H

#include "iostream"

/*
Today, we will program a basic class and a few "getters"
and "setters". What are those? They are the basic "member"
functions for object oreiented programming. They "get"
member attributes so we don't have to access the innards of
an object directly, and "set" said members!
*/

class Book{
    int bookID;
    std::string bookTitle;
    int pageLength;
public:
    Book(int, std::string, int);

    int getBookID();
    void setBookID(int);

    std::string getBookTitle();
    void setBookTitle(std::string);

    int getPageLength();
    void setPageLength(int);
};

#endif