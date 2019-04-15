#ifndef LINEAPRODU_H
#define LINEAPRODU_H
#include "linkedlist.h"

class LineaProdu
{
private:
    int cantidadEjecutando = 0;
    LinkedList ejecucion;
    int numero;
public:
    static LinkedList LineaTerminada;
    LineaProdu();
    void agregar(),agregarTerminada();
    void quitar();
};

#endif // LINEAPRODU_H
