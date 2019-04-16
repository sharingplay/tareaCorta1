#include "lineaproduccion.h"

//!
//! \brief lineaProduccion::lineaProduccion constructor de la linea de produccion con sus procesos
//!
lineaProduccion::lineaProduccion()
{
    proceso *procesoA = new proceso();
    proceso *procesoB = new proceso();
    proceso *procesoC = new proceso();
    proceso *procesoD = new proceso();
    proceso *procesoE = new proceso();
    listaProcesos.Add(procesoA);
    listaProcesos.Add(procesoB);
    listaProcesos.Add(procesoC);
    listaProcesos.Add(procesoD);
    listaProcesos.Add(procesoE);
}

//!
//! \brief lineaProduccion::llenarProcesos llena cada "proceso" con 3 carros inicialmente
//!
void lineaProduccion::llenarProcesos(){

}
//!
//! \brief lineaProduccion::crearListaEspera crea una lista con los carros que se van a trabajar en la linea de produccion
//!
void lineaProduccion::crearListaEspera(){

}
