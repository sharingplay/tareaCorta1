#include "lineaproduccion.h"

LinkedList* listaEspera = new LinkedList();

lineaProduccion::lineaProduccion()
{
    proceso *procesoA = new proceso();
    proceso *procesoB = new proceso();
    proceso *procesoC = new proceso();
    proceso *procesoD = new proceso();
    proceso *procesoE = new proceso();
    procesoA->setNombreProceso("ProcesoA");
    procesoB->setNombreProceso("ProcesoB");
    procesoC->setNombreProceso("ProcesoC");
    procesoD->setNombreProceso("ProcesoD");
    procesoE->setNombreProceso("ProcesoE");
    listaProcesos.Add(procesoA);
    listaProcesos.Add(procesoB);
    listaProcesos.Add(procesoC);
    listaProcesos.Add(procesoD);
    listaProcesos.Add(procesoE);
}

void lineaProduccion::llenarProcesos(){
    for (Node* procesoLlenar = listaProcesos.getFirst();procesoLlenar!= nullptr;procesoLlenar = procesoLlenar->getNext()) {
        for (int i = 0; i<3;i++) {
           ((proceso*)procesoLlenar->getData())->agregar();
        }
    }
}

void lineaProduccion::crearListaEspera(){


}
