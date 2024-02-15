#include "Novel.h"

void Novel::makeEmptyNovel(){
    maxAuthors = -1;
    currentAuthors = 0;
    authorArray = nullptr; // nullptr_t
}

void Novel::makePopulatedNovel(int max){
    maxAuthors = max;
    currentAuthors = 0;
    authorArray = new std::string[maxAuthors];
}

Novel::Novel() : Book(){
    hardCover = false;
    this->makeEmptyNovel();
}

Novel::Novel(int max, bool cover, int id, std::string t, int length) :
    Book(id, t, length){
    hardCover = cover;
    if(max > 0){
        this->makePopulatedNovel(max);
    }
    else{
        this->makeEmptyNovel();
    }

}

Novel::Novel(Novel& other){
    // TODO: Add boolean operators for Novel to compare objects
    // Assume they're different for now
    bookID = other.getBookID();
    bookTitle.assign(other.getBookTitle());
    pageLength = other.getPageLength();

    hardCover = other.hardCover;
    // Getters and setters not implemented yet, TODO
    if(other.maxAuthors > 0){
        this->makePopulatedNovel(other.maxAuthors);
        for(currentAuthors; currentAuthors < other.currentAuthors; currentAuthors++){
            // Assigning each string in the other array to our new array, one 
            // at a time.
            authorArray[currentAuthors].assign(other.authorArray[currentAuthors]);
        }
    }
    else{
        this->makeEmptyNovel();
    }
}

Novel::~Novel(){
    delete [] authorArray;
    authorArray = nullptr;
    currentAuthors = 0; // really safe!
}

std::ostream& Novel::displayBook(std::ostream& os){
    Book::displayBook(os);
    // Study this line
    os << ((hardCover) ? "Format: Hardcover" : "Format: Softcover") << std::endl;
    for(int i = 0; i < currentAuthors; i++){
        // Author #3: Tolstoy
        os << "Author #" << i + 1 << ": " << authorArray[i] << std::endl;
    }
    return os;
}

bool Novel::addAuthor(std::string au){
    // TODO: Turn into ternary operator
    bool success = false;
    if(currentAuthors != maxAuthors){
        authorArray[currentAuthors].assign(au);
        currentAuthors++;
        success = true;
    }
    return success;
}

int main(){
    Novel A;

    Novel B(2, true, 192, "Hamlet", 300);
    B.addAuthor("Shakespeare");

    A.displayBook(std::cout);
    B.displayBook(std::cout);

    return 0;
}