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
        Node* queue;
    public:
        CircularLinkedList(); //constructor
        ~CircularLinkedList(); //destructor
        bool isEmpty(); //is list empty?
        int head(); //element following tail
        int tail(); //element at tail
        void addToTail(int ele);
        void removeFromHead();
};

CircularLinkedList::CircularLinkedList()
{
    queue=NULL;
}

CircularLinkedList::~CircularLinkedList(){}

bool CircularLinkedList::isEmpty()
{
    return queue==NULL;
}

int CircularLinkedList::head()
{
    if(!isEmpty())
    {
        return queue->next->info;
    }
}

int CircularLinkedList::tail()
{
    if(!isEmpty())
        return queue->info;
}

void CircularLinkedList::addToTail(int ele)
{
    Node* newNode=new Node;
    newNode->info=ele;
    if(isEmpty())
    {
        newNode->next=newNode;
        queue=newNode;
    }
    else
    {
        newNode->next=queue->next;
        queue->next=newNode;
    }
}

void CircularLinkedList::removeFromHead()
{
    Node* nodeToDelete=queue->next;
    if(isEmpty())
    {
        cout<<"No node to remove";
    }
    else
    {
        if(nodeToDelete==queue)  //if queue has only one node
        {
            queue=NULL;
        }
        else
        {
            queue->next=nodeToDelete->next;
        }
        delete nodeToDelete;
    }
}

#endif