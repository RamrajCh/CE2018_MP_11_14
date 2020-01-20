#ifndef CIRCULARLINKEDLIST_H
#define CIRCULARLINKEDLIST_H

#include <iostream>
using namespace std;

class Node                      //circularly linked list node
{
    public:
        int info;               //linked list element value
        Node* next;             //next item in the list

};

class CircularLinkedList        //a circularly linked list
{
    private:
        Node* cursor;          //the cursor pointing tail of list
    public:
        CircularLinkedList();  //constructor
        ~CircularLinkedList(); //destructor
        bool isEmpty();        //is list empty?
        int head();            //returns element following tail
        int tail();            //returns element at tail
        void addToTail(int ele); //add element after tail 
        void removeFromHead();  //display and remove element at head
};


#endif
