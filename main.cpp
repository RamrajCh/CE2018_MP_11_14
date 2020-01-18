#include "circularlinkedqueue.cpp"

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
    cout<<"front ele="<<Cq.front()<<endl;
    cout<<"rear ele="<<Cq.rear()<<endl;
    Cq.dequeue();
    Cq.dequeue();
    Cq.dequeue();
    Cq.enqueue(232);
    cout<<"front ele="<<Cq.front()<<endl;
    cout<<"rear ele="<<Cq.rear()<<endl;
}

//front-rear
//rear-front
