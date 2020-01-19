#ifndef CIRCULARLINKEDQUEUE_H
#define CIRCULARLINKEDQUEUE_H

#include "circularlinkedlist.cpp"

class CircularLinkedQueue
{
    private:
        CircularLinkedList C;  // circulary linked list of elements of queue
        int n;   // number of elements
        int max;

    public:
        CircularLinkedQueue(int max_size);  // constructor
        ~CircularLinkedQueue();  // destructor
        int size();  // number of items in queue
        bool isEmpty(); // is the queue empty?
        bool isFull();  // is the queue full?
        int front(); // front element of queue
        int rear();  // rear element of queue
        void enqueue(int ele); // add element at rear
        void dequeue();  // remove element from front
};

#endif
