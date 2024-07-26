#ifndef LINKED_LIST_H
#define LINKED_LIST_H
/*
* Today, we'll be creating a data structure
* called a "linked list" using C++ class templates.
* A linked list is, in essence, a data structure
* (a class) which has two data members. Whatever its
* "data" is (int, Student, float, whatever!) and a pointer
* to the next "node" in said linked list.

* To accomplish this, we will be creating a "Node"
* template class.
*/
#include <iostream>

template <class T>
class Node {
    T data;
    Node* next;
public:
    // Constructors
    Node(T d){
        data = d;
        next = nullptr;
    }

    Node(T d, Node* n){
        data = d;
        next = n;
    }

    // Getters + Setters
    T getData() const{
        return data;
    }

    void setData(T d){
        data = d;
    }

    Node* getNext() const{
        return next;
    }

    void setNext(Node* n){
        next = n;
    }

    void display() const{
        std::cout << "This node contains: " << data << std::endl;
        if(next){
            next->display();
        }
    }

};


#endif