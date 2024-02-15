#include "Manga.h"

Manga::Manga(){
    this->setBookID(-1);
    this->setBookTitle("");
    this->setPageLength(-1);
    isColour = false;
    rightToLeft = true;
    language.assign("");
}

Manga::Manga(bool colour, bool direction, std::string lang, int id, std::string title, int length){
    this->setBookID(id);
    this->setBookTitle(title);
    this->setPageLength(length);
    isColour = colour;
    rightToLeft = direction;
    language.assign(lang);
}

Manga::Manga(Manga& other){
    this->setBookID(other.getBookID());
    this->setBookTitle(other.getBookTitle());
    this->setPageLength(other.getPageLength());
    isColour = other.isColour;
    rightToLeft = other.rightToLeft;
    language.assign(other.language);
}

// And you still have getters and setters for its member variables
bool Manga::getIsColour() const{
    return isColour;
}

bool Manga::getRightToLeft() const{
    return rightToLeft;
}

std::string Manga::getLanguage() const{
    return language;
}

void Manga::setColour(bool colour){
    isColour = colour;
}

void Manga::setReadOrder(bool order){
    rightToLeft = order;
}

void Manga::setLanguage(std::string lang){
    language.assign(lang);
}

// Now let's add a main (again should be in another file) and play around with this
// functionality

int main(){
    // Create empty Book objects
    Book one, two;
    // Create a populated Book object
    Book three(9389, "To Kill a Mocking Bird", 336);

    std::cout << "The book number for the first book is: " << one.getBookID() << std::endl;
    std::cout << "The book number for the second book is: " << two.getBookID() << std::endl;
    std::cout << "The book number for the third book is: " << three.getBookID() << std::endl;

    // Creating an empty manga
    Manga four;
    // Creating a populated manga
    Manga five(false, true, "English", 390522, "Princess Jellyfish", 200);

    // Using the copy Constructor
    Manga six(five);

    // Now let's see what happens when we print these off!
    std::cout << "The book number for the first MANGA is: " << four.getBookID() << std::endl;
    std::cout << "The book number for the second MANGA is: " << five.getBookID() << std::endl;

    std::cout << "The book title for the second MANGA is: " << five.getBookTitle() << std::endl;
    std::cout << "Finally, the language for the second MANGA is: " << five.getLanguage() << std::endl;

    return 0;
}

