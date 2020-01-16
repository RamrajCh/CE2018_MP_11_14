#include "circularlinkedqueue.h"

CircularLinkedQueue::CircularLinkedQueue(int max_size)
{
    C();
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
        cout<<"Queue overflow"
    }    
}

void CircularLinkedQueue::dequeue()
{
    if(isEmpty())
    {
        cout<<"Queue is empty"
    }
    else
    {
        C.removeFromHead()
        n--;
    }
}