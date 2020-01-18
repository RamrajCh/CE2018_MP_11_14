#include "circularlinkedqueue.h"


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
    	cout<<"Queue Empty.No front element"<<endl;  
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
        cout<<"Queue Empty.No rear element"<<endl;
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
        //C.advance();
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
        cout<<"Queue is empty.No node to remove."<<endl;
    }
    else
    {
        C.removeFromHead();
        n--;
    }
}
