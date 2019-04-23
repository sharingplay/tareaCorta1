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

Node* LinkedList::pop()
{
    if (first != nullptr){
            Node* toReturn = first;
            first = first->getNext();
            toReturn->setNext(nullptr);
            this->t--;
            return toReturn;
        }
        return nullptr;
}

void LinkedList::Add(void *data)
{
    Node* temp = this->first;
        if (this->first != nullptr){
            while (temp->getNext()  != nullptr){
                temp = temp->getNext();
            }
            Node* aux = new Node(data);
            temp->setNext(aux);
            aux->setNext(nullptr);
            this->t++;
        }
        else{
            Node* aux = new Node(data);
            this->first = aux;
            first->setNext(nullptr);
        }
    }

void LinkedList::Add(int valor)
{
    int *data = &valor;
    Node* temp = this->first;
        if (this->first != nullptr){
            while (temp->getNext()  != nullptr){
                temp = temp->getNext();
            }
            Node* aux = new Node(data);
            temp->setNext(aux);
            aux->setNext(nullptr);
            this->t++;
        }
        else{
            Node* aux = new Node(data);
            this->first = aux;
            first->setNext(nullptr);
        }
    }

void LinkedList::Add(char valor)
{
    char *data = &valor;
    Node* temp = this->first;
        if (this->first != nullptr){
            while (temp->getNext()  != nullptr){
                temp = temp->getNext();
            }
            Node* aux = new Node(data);
            temp->setNext(aux);
            aux->setNext(nullptr);
            this->t++;
        }
        else{
            Node* aux = new Node(data);
            this->first = aux;
            first->setNext(nullptr);
        }
    }

Node* LinkedList::remove(Node* nodo){//para la lista de carros
        Node* aux;
        if (nodo == first){
            first = first->getNext();
            nodo->setNext(nullptr);
            this->t--;
            return nodo;
        }
        else if(nodo == first->getNext()){
            aux = first->getNext();
            first->setNext(first->getNext()->getNext());
            aux->setNext(nullptr);
            this->t--;
            return aux;
        }
        else if(nodo == first->getNext()->getNext()){
            aux = first->getNext()->getNext();
            first->getNext()->setNext(nullptr);
            this->t--;
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
