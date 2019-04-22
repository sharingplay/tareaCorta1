#ifndef CARRO_H
#define CARRO_H
#include "linkedlist.h"
#include "node.h"


class carro
{
public:
    //!
    //! \brief listaProcesos orden de los procesos
    //!
    LinkedList listaProcesos;
    //!
    //! \brief tiempo1,tiempo,tiempo3,tiempo4,tiempo5 Tiempos que dura cada proceso
    //!
    LinkedList listaTiempos;
    carro(int tipo);
    carro();

};
#endif // CARRO_H
