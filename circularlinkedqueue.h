#ifndef CIRCULARLINKEDQUEUE_H
#define CIRCULARLINKEDQUEUE_H

#include "circularlinkedlist.h"

class CircularLinkedQueue
{
    private:
        CircularLinkedList C;  //circulary linked list of elements of queue
        int n;   //number of elements
        int max;

    public:
        CircularLinkedQueue(int max_size);  //constructor
        ~CircularLinkedQueue();  //destructor
        int size();  //number of items in queue
        bool isEmpty(); //is the queue empty?
        bool isFull();  //is the queue full?
        int front(); //front element of queue
        int rear();  //rear element of queue
        void enqueue(int ele); //add element at rear
        void dequeue();  //remove element from front
};

CircularLinkedQueue::CircularLinkedQueue(int max_size)
{
    n=0;
    max=max_size;
}

CircularLinkedQueue::~CircularLinkedQueue(){}

int CircularLinkedQueue::size()
{
    return n;
}

bool CircularLinkedQueue::isEmpty()
{
    return n==0;
}

bool CircularLinkedQueue::isFull()
{
    return n==max;
}

int CircularLinkedQueue::front()
{
    if(isEmpty())
    {
        cout<<"Queue is empty";
    }
    else
    {
        return C.head();
    }
}

int CircularLinkedQueue::rear()
{
    if(isEmpty())
    {
        cout<<"Queue is empty";
    }
    else
    {
        return C.tail();
    }
}

void CircularLinkedQueue::enqueue(int ele)
{
    if(!isFull())
    {
        C.addToTail(ele);
        n++; 
    }
    else
    {
        cout<<"Queue overflow"<<endl;
    }    
}

void CircularLinkedQueue::dequeue()
{
    if(isEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        C.removeFromHead();
        n--;
    }
}
#endif