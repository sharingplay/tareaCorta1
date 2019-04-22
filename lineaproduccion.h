#ifndef LINEAPRODUCCION_H
#define LINEAPRODUCCION_H
#include "linkedlist.h"
#include "proceso.h"
#include <chrono>
#include <iostream>


class lineaProduccion
{
private:
    char ax = 'a';
    char b = 'b';
    char c = 'c';
    char d = 'd';
    char e = 'e';
public:
    static lineaProduccion & getInstance(){
        static lineaProduccion instance;
        return instance;}
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
    //! \param carro: carro que se quiere agregar a un proceso
    //!
    void llenarProcesos(carro *carro);
    //!
    //! \brief lineaProduccion::trabajar resta los tiempos a los carros que se estan trabajando
    //!
    void trabajar();
    LinkedList *a = new LinkedList();
    proceso *procesoA = new proceso(&ax);
    proceso *procesoB = new proceso(&b);
    proceso *procesoC = new proceso(&c);
    proceso *procesoD = new proceso(&d);
    proceso *procesoE = new proceso(&e);
    static LinkedList *listaProcesosProduccion;
    static LinkedList *listaEspera;
    static LinkedList *listaTerminada;
    static int tiempoActual;
    static int tiempoAnterior;
};

#endif // LINEAPRODUCCION_H
