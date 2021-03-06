#include "circularlinkedlist.h"
#include <iostream>
using namespace std;

CircularLinkedList::CircularLinkedList()
{
    cursor=NULL;
}

CircularLinkedList::~CircularLinkedList(){}

bool CircularLinkedList::isEmpty()
{
    return cursor==NULL;
}

int CircularLinkedList::head()
{
    if(!isEmpty())
    {
        return cursor->next->info;
    }
}

int CircularLinkedList::tail()
{
    if(!isEmpty())
        return cursor->info;
}

void CircularLinkedList::addToTail(int ele)
{
    Node* newNode=new Node;
    newNode->info=ele;
    if(isEmpty())
    {
        newNode->next=newNode;
        cursor=newNode;
    }
    else
    {
        newNode->next=cursor->next;
        cursor->next=newNode;
        cursor=newNode;
    }
}

void CircularLinkedList::removeFromHead()
{
    Node* nodeToDelete=new Node;
    nodeToDelete=cursor->next;
    if(isEmpty())
    {
        cout<<"No node to remove"<<endl;
    }
    else
    {
        if(nodeToDelete==cursor)  //if queue has only one node
        {
            cursor=NULL;
        }
        else
        {
            cursor->next=nodeToDelete->next;
        }
        cout<<nodeToDelete->info<<endl;
        delete nodeToDelete;
    }
}

