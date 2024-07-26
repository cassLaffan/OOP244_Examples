#include "Linked_List.h"

/*
* Here, we will be actually creating a linked
* list out of node class objects. Creating Nodes
* which point to the next object naturally give
* rise to the linked list data structure!
*/

int main(){
    Node<int> nOne(5);
    Node<int> nTwo(17);
    nOne.setNext(&nTwo);
    Node<int> nZero(13, &nOne);
    // nTwo.setNext(&nZero); will make it circular

    nZero.display();

    return 0;
}