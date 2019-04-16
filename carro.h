#ifndef CARRO_H
#define CARRO_H
#include "linkedlist.h"


class carro
{
public:
    //!
    //! \brief listaProcesos orden de los procesos
    //!
    char listaProcesos[5];
    //!
    //! \brief tiempo1,tiempo,tiempo3,tiempo4,tiempo5 Tiempos que dura cada proceso
    //!
    int tiempo1,tiempo2,tiempo3,tiempo4,tiempo5;
    carro(int tipo);
    carro();
};
#endif // CARRO_H
