#ifndef CARRO_H
#define CARRO_H
#include "linkedlist.h"
#include "node.h"


class carro
{
private:
    bool iterado = false;
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

    bool getIterado() const;
    void setIterado(bool value);
};
#endif // CARRO_H
