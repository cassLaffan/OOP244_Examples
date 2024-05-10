/*
Today, we will program a basic class and a few "getters"
and "setters". What are those? They are the basic "member"
functions for object oreiented programming. They "get"
member attributes so we don't have to access the innards of
an object directly, and "set" said members!
*/

#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

class Book{
    int bookID;
    int pageLength;
    std::string bookTitle;
public:
    Book(int, int, std::string); // A way to make a new Book object

    // Getters and setters
    int getBookID() const;
    void setBookID(int);

    int getPageLength() const;
    void setPageLength(int);

    std::string getBookTitle() const;
    void setBookTitle(std::string);
};

#endif