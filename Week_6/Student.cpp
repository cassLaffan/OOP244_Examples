#include "Student.h"

Student::Student(){
    name.assign("");
    SIN = -1;
    DOB = 0;
    GPA = -1.0;
    year = -1;
}

Student::Student(float grades, int sem, std::string n, long int sin, time_t date) :
    Person(n, sin, date){
    GPA = grades;
    year = sem;
}

Student::Student(Student& other){
    *this = Student(other.getGPA(), other.getYear(), other.getName(), other.getSIN(), other.getDOB());
}

Student::~Student(){
    std::cout << "This function also does nothing but also calls the Person destructor!" << std::endl;
}
    
float Student::getGPA() const{
    return GPA;
}

int Student::getYear() const{
    return year;
}

void Student::setGPA(float grades){
    if(grades <= 4.0 && grades >= 0.0){
        GPA = grades;
    }
}

void Student::setYear(int progress){
    if(progress >= 0){
        year = progress;
    }
}

void Student::display(std::ostream& os) const{
    // You can call person functions here!
    Person::display(os);
    os << "GPA: " << GPA << std::endl;
    os << "Year " << year << std::endl;
}

int main(){
    return 0;
}