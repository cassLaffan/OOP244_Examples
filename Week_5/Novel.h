#ifndef NOVEL_H
#define NOVEL_H

#include "Book.h"

/*
* Let's make a Novel class which inherits from Book. It will use the 
* protected data in Book to its advantage, and override the display function.
* Furthermore, ensure to take advantage of the parent class' functions.
*/

class Novel : public Book{
    int maxAuthors;
    int currentAuthors;
    std::string* authorArray;
    bool hardCover;
public:
    // Functions that help create objects
    // Eliminate redundancy
    void makeEmptyNovel();
    void makePopulatedNovel(int);

    // Constructors
    Novel();
    Novel(int, bool, int, std::string, int);
    Novel(Novel&); // best practice is to have the other object const

    // Destructor
    ~Novel();

    bool addAuthor(std::string);

    std::ostream& displayBook(std::ostream&);
};

#endif