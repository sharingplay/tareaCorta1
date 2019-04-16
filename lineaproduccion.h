#ifndef LINEAPRODUCCION_H
#define LINEAPRODUCCION_H
#include "linkedlist.h"
#include "proceso.h"


class lineaProduccion
{
public:
    lineaProduccion();
    void llenarProcesos();
    void crearListaEspera();
    static LinkedList listaProcesos;
    static LinkedList listaEspera;
};

#endif // LINEAPRODUCCION_H
