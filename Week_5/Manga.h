#ifndef MANGA_H
#define MANGA_H

#include "Book.h"

// This is what your child class will look like in the header file!
class Manga : public Book{
    bool isColour;
    bool rightToLeft;
    std::string language;
public:
    // You still have constructors
    Manga();
    Manga(bool, bool, std::string, int, std::string, int);
    Manga(Manga&);

    // And you still have getters and setters for its member variables
    bool getIsColour() const;
    bool getRightToLeft() const;
    std::string getLanguage() const;

    void setColour(bool);
    void setReadOrder(bool);
    void setLanguage(std::string);
};      

#endif