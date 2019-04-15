#ifndef CARRO_H
#define CARRO_H
#include "linkedlist.h"

class carro
{
public:
    char listaProcesos[5];
    int tiempo1,tiempo2,tiempo3,tiempo4,tiempo5;
    carro(int tipo);
    carro();
};
#endif // CARRO_H
