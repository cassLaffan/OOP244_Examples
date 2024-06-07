#include "Novel.h"

void Novel::assistantBuilder(std::string au, int year){
    author.assign(au);
    publicationYear = year;
}


Novel::Novel() : Book(){
    assistantBuilder("", -1);
}

Novel::Novel(int id, std::string title, int len, std::string au, int year) :
    Book(id, title, len){
    assistantBuilder(au, year);
}

Novel::Novel(Novel& other) : Book(other){
    assistantBuilder(other.getAuthor(), other.getYear());
}

std::string Novel::getAuthor() const{
    return author;
}

void Novel::setAuthor(std::string au){
    author.assign(au);
}

int Novel::getYear() const{
    return publicationYear;
}

void Novel::setYear(int y){
    publicationYear = y;
}

std::ostream& Novel::displayBook(std::ostream& os){
    Book::displayBook(os);

    os << "Author Name: " << this->author << std::endl;
    os << "Publication Year: " << this->publicationYear << std::endl;

    return os;
}

int main(){
    // Calling empty constructors for experiment
    Book A;
    Novel B;

    // Calling parameterized constructors
    Book C(1009, "War and Peace", 700);
    Novel D(1010, "Peace and War", 7, "Dolstoy", 2006);

    std::cout << D.getBookID() << std::endl;
    std::cout << D.getYear() << std::endl;

    D.displayBook(std::cout);

    return 0;
}