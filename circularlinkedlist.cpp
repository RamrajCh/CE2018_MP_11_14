#include "circularlinkedlist.h"
#include <iostream>
using namespace std;

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
            queue->next=nodeToDelete->next
        }
        delete nodeToDelete;
    }
}