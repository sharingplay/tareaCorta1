#ifndef LINEAPRODUCCION_H
#define LINEAPRODUCCION_H
#include "linkedlist.h"
#include "proceso.h"


class lineaProduccion
{
public:
    //!
    //! \brief lineaProduccion::lineaProduccion constructor de la linea de produccion con sus procesos
    //!
    lineaProduccion();
    //!
    //! \brief lineaProduccion::llenarProcesos llena cada "proceso" con 3 carros inicialmente
    //!
    void llenarProcesos();
    //!
    //! \brief lineaProduccion::crearListaEspera crea una lista con los carros que se van a trabajar en la linea de produccion
    //!
    void crearListaEspera();
    static LinkedList listaProcesos;
    static LinkedList listaEspera;
    static LinkedList listaTerminada;
};

#endif // LINEAPRODUCCION_H
