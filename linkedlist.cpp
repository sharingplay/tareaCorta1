#include "linkedlist.h"
#include <iostream>
using namespace std;

Node *LinkedList::getFirst() const
{
    return first;
}

void LinkedList::setFirst(Node *value)
{
    first = value;
}

int LinkedList::getT() const
{
    return t;
}

void LinkedList::setT(int value)
{
    t = value;
}

Node LinkedList::pop()
{
    if (first != nullptr){
            Node* toReturn = first;
            first = first->getNext();
            toReturn->setNext(nullptr);

            return toReturn;
        }
        return nullptr;
}

void LinkedList::Add(void *data)
{
    Node* tmp=new Node(data);
    tmp->setNext(this->first);
    this->first=tmp;
    this->t++;
}

Node* LinkedList::remove(Node* nodo){
        Node* aux;
        if (nodo == first){
            first = first->getNext();
            nodo->setNext(nullptr);
            return nodo;
        }
        else if(nodo == first->getNext()){
            aux = first->getNext();
            first->setNext(first->getNext()->getNext());
            aux->setNext(nullptr);
            return aux;
        }
        else if(nodo == first->getNext()->getNext()){
            aux = first->getNext()->getNext();
            first->getNext()->setNext(nullptr);
            return aux;
        }
        else {
            qDebug()<<"No esta en la lista"<<endl;
            return nullptr;
        }
    }

void LinkedList::Print()
{
    Node* tmp=this->first;
    while (tmp!=nullptr){
        cout<<tmp<<endl;
        tmp=tmp->getNext();
    }
}

LinkedList::LinkedList()
{
    this->t=0;
    this->first=0;
}
