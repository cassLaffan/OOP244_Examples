/*
* This week, we are going to write a textbook class that inherits from
* the book class. We will contrast and compare how it works with the Manga class.

* You'll need these member variables for textbook: subject, institution, and a 
* dynamic list of courses which require it. Furthermore, getters and setters
* are always necessary!
*/

#ifndef TEXTBOOK_H
#define TEXTBOOK_H

#include "Book.h"

class Textbook : public Book{
    std::string subject;
    std::string institution;
    // Implied member attributes
    int maxArraySize;
    int currentArrayLoc;
    std::string* courseList;
public:
    void init(std::string, std::string, int, int, std::string, int);

    Textbook();
    Textbook(std::string, std::string, int, int, std::string, int);
    Textbook(Textbook&);

    ~Textbook(); // always for dynamic memory allocation!

    // Getters and setters

    std::string getSubject() const;
    std::string getInstitution() const;
    int getMaxArraySize() const;
    int getCurrentArraySize() const;
    std::string* getCourseList() const;

    void setSubject(std::string);
    void setInstitution(std::string);
    void setMaxArraySize(int);

    bool addToCourseArray(std::string);


};


#endif