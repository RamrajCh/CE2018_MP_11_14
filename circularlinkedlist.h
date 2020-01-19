#ifndef CIRCULARLINKEDLIST_H
#define CIRCULARLINKEDLIST_H

#include <iostream>
using namespace std;

class Node
{
    public:
        int info;
        Node* next;

};

class CircularLinkedList
{
    private:
        Node* cursor;
    public:
        CircularLinkedList(); // constructor
        ~CircularLinkedList(); // destructor
        bool isEmpty(); // is list empty?
        int head(); // element following tail
        int tail(); // element at tail
        void insert(int ele);
        void advance();
        void remove();
};


#endif
