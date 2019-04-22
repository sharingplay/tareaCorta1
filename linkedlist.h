#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"
#include <QDebug>


class LinkedList
{
private:
    Node* first;
    int t;
public:
    void Add(void* data);
    Node* remove(Node* nodo);
    void Print();
    LinkedList();
    Node *getFirst() const;
    void setFirst(Node *value);
    int getT() const;
    void setT(int value);
    Node* pop();
    void Add(int valor);
    void Add(char valor);
};

#endif // LINKEDLIST_H
