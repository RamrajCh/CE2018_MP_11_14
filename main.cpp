#include "circularlinkedqueue.cpp"

int main()
{
    CircularLinkedQueue Cq(5);  //Inatializing a queue Cq with max size 5
    
    if(Cq.isEmpty()) cout<<"Queue is empty."<<endl;  //Checking if queue is empty?
    
    Cq.enqueue(5);    //Enqueue
    Cq.enqueue(12);   
    Cq.enqueue(3);    
    Cq.enqueue(1);    
    Cq.enqueue(50);    
    
    cout<<"front ele="<<Cq.front()<<endl;  //Front element of queue
    cout<<"rear ele="<<Cq.rear()<<endl;    //Rear element of queue
    
    if(Cq.isFull())                   //Checking if queue is full?
    {  
    	Cq.enqueue(90);         //Adding element to full queue
    }
    
    Cq.dequeue();     //Dequeue
    Cq.dequeue();
    Cq.dequeue();
    
    cout<<"front ele="<<Cq.front()<<endl;   //Front element of queue
    cout<<"rear ele="<<Cq.rear()<<endl;     //Rear element of queue
}

