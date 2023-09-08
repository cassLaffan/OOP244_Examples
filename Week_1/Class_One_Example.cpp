#include "Class_One_Example.h"

// Now let's look at how we implement our functions!

Student::Student(int num, std::string name){
    studentNumber = num;
    studentName.assign(name);
}

int Student::getStudentNumber(){
    // Notice how we can access the inner attributes of our class?
    return studentNumber;
}

void Student::setStudentNumber(int sNum){
    studentNumber = sNum;
}

std::string Student::getStudentName(){
    return studentName;
}

// Assign is one of the ways to assign a string to 
// a string variable
void Student::setStudentName(std::string newName){
    studentName.assign(newName);
}

// Let's finally demonstrate cout
void Student::printStudent(){
    std::cout << "Student name: " << studentName << std::endl;
    std::cout << "Student number: " << studentNumber << std::endl;
}

// Normally, we put the main in its own file
// but for simplicity's sake, I'm putting it in this file so we only
// need to compile one .cpp file. (do as I say, not as I do)
int main(){
    // Let's look at cout's sister, cin. It takes input!
    std::string sName;
    int sNum;

    std::cout << "Please enter your name: " << std::endl;
    std::cin >> sName;
    std::cout << "Please enter your student number: " << std::endl;
    std::cin >> sNum;

    // Now let's create a new instance of our class! (neat an object)
    Student newStudent(sNum, sName);
    // Let's test out our print statement!
    newStudent.printStudent();

    return 0;
}