#ifndef CIRCULARLINKEDQUEUE_H
#define CIRCULARLINKEDQUEUE_H

#include "circularlinkedlist.cpp"

class CircularLinkedQueue  //queue as circuraly linked list
{
    private:
        CircularLinkedList C;  //circulary linked list of elements of queue
        int n;   //number of nodes
        int max; //maximum number of elements

    public:
        CircularLinkedQueue(int max_size);  //constructor
        ~CircularLinkedQueue();  //destructor
        bool isEmpty(); //is the queue empty?
        bool isFull();  //is the queue full?
        int front(); //front element of queue
        int rear();  //rear element of queue
        void enqueue(int ele); //add element at rear
        void dequeue();  //display and remove element from front
};

#endif
