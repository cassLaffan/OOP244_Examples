#ifndef NOVEL_H
#define NOVEL_H

#include "Book.h"

/*
* Let's make a Novel class which inherits from Book. It will use the 
* protected data in Book to its advantage, and override the display function.
* Furthermore, ensure to take advantage of the parent class' functions.
*/

class Novel : public Book{
    int bookID; // for experimentation later
    std::string author;
    int publicationYear;
public:
    void assistantBuilder(std::string, int);

    // Our three contructors!
    Novel();
    Novel(int, std::string, int, std::string, int);
    Novel(Novel&);

    // No destructor

    std::string getAuthor() const;
    void setAuthor(std::string);

    int getYear() const;
    void setYear(int);

    // Overriding
    std::ostream& displayBook(std::ostream&);
};

#endif