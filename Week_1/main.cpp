#include "Lab_One_Book_Example.h"

int main(){

    Book bookA(101, 600, "War and Peace");
    Book bookB(102, 150, "The Giver");

    std::cout << "Book title: " << bookA.getBookTitle() << std::endl;

    bookA.setBookTitle("Crime and Punishment");

    std::cout << "Book title: " << bookA.getBookTitle() << std::endl;

    std::cout << "BookID: " << bookA.getBookID() << std::endl;

    std::cout << "Book title: " << bookB.getBookTitle() << std::endl;

    return 0;
}