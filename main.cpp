#include "circularlinkedqueue.h"

int main()
{
    CircularLinkedQueue Cq(5);
    Cq.dequeue();
    Cq.enqueue(5);
    Cq.enqueue(12);
    Cq.enqueue(3);
    Cq.enqueue(1);
    Cq.enqueue(50);
    Cq.enqueue(12);
    cout<<Cq.front()<<endl;
    cout<<Cq.rear()<<endl;
    Cq.dequeue();
    Cq.dequeue();
    Cq.dequeue();
    cout<<Cq.front()<<endl;
    cout<<Cq.rear()<<endl;
}

//front-rear
//rear-front