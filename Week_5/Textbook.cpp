#include "Textbook.h"

void Textbook::init(std::string sub, std::string inst, int max, int id, std::string title, int len){
    this->setBookID(id);
    this->setBookTitle(title);
    this->setPageLength(len);
    subject.assign(sub);
    institution.assign(inst);
    maxArraySize = max;
    currentArrayLoc = 0;
    
    courseList = (max == -1) ? nullptr : new std::string[maxArraySize]; // ternary operator!
    
}

Textbook::Textbook(){
    init("", "", -1, -1, "", -1);
}

Textbook::Textbook(std::string sub, std::string inst, int max, int id, std::string title, int len){
    init(sub, inst, max, id, title, len);
}

Textbook::Textbook(Textbook& other){
    if(other.getMaxArraySize() == -1){
        init("", "", -1, -1, "", -1);
    }
    else{
        init(other.getSubject(), other.getInstitution(), other.getMaxArraySize(),
            other.getBookID(), other.getBookTitle(), other.getPageLength());
        for(int i = 0; i <= other.getCurrentArraySize(); i++){
            courseList[i].assign(other.courseList[i]);
            currentArrayLoc++;
        }
    }
}

Textbook::~Textbook(){
    // Todo: make dynamic pointer array for student
    delete [] courseList;
}

std::string Textbook::getSubject() const{
    return subject;
}

std::string Textbook::getInstitution() const{
    return institution;
}

int Textbook::getMaxArraySize() const{
    return maxArraySize;
}

int Textbook::getCurrentArraySize() const{
    return currentArrayLoc;
}

std::string* Textbook::getCourseList() const{
    return courseList;
}


void Textbook::setSubject(std::string sub){
    this->subject.assign(sub);
}

void Textbook::setInstitution(std::string inst){
    this->institution.assign(inst);
}

void Textbook::setMaxArraySize(int max){
    if(this->maxArraySize == -1){
        this->maxArraySize = max;
        courseList = new std::string[maxArraySize];
        currentArrayLoc = 0;
    }
}

bool Textbook::addToCourseArray(std::string newCourse){
    bool isAdded = false;

    if(currentArrayLoc <= maxArraySize - 1){
        courseList[currentArrayLoc].assign(newCourse);
        currentArrayLoc++;
        isAdded = true;
    }

    return isAdded;
}