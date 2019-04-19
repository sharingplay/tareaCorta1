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
    //! \brief lineaProduccion::agregar agrega carros a este proceso
    //!
    void agregar(char nombre);
    //!
    //! \brief lineaProduccion::liberar libera un campo en cada proceso
    //!
    void liberar();
    //!
    //! \brief lineaProduccion::llenarProcesos llena cada "proceso" con 3 carros inicialmente
    //!
    void llenarProcesos(carro* carro);
    //!
    //! \brief lineaProduccion::trabajar resta los tiempos a los carros que se estan trabajando
    //! \param carro: carro que se quiere agregar a un proceso
    //!
    void trabajar();
    proceso *procesoA = new proceso();
    proceso *procesoB = new proceso();
    proceso *procesoC = new proceso();
    proceso *procesoD = new proceso();
    proceso *procesoE = new proceso();
    static LinkedList listaProcesosProduccion;
    static LinkedList listaEspera;
    static LinkedList listaTerminada;
};

#endif // LINEAPRODUCCION_H
