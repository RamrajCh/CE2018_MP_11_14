#include "circularlinkedqueue.cpp"

int main()
{
    CircularLinkedQueue Cq(5);
    Cq.dequeue();
    Cq.enqueue(10);
    Cq.enqueue(22);
    Cq.enqueue(3);
    Cq.enqueue(1);
    Cq.enqueue(50);
    Cq.enqueue(9);
    cout<<"front element="<<Cq.front()<<endl;
    cout<<"rear element="<<Cq.rear()<<endl;
    Cq.dequeue();
    Cq.dequeue();
    Cq.dequeue();
    Cq.enqueue(444);
    cout<<"front element="<<Cq.front()<<endl;
    cout<<"rear element="<<Cq.rear()<<endl;
}

// front-rear
// rear-front
