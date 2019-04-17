#include "lineaproduccion.h"

LinkedList* listaEspera = new LinkedList();

lineaProduccion::lineaProduccion()
{
    proceso *procesoA = new proceso();
    proceso *procesoB = new proceso();
    proceso *procesoC = new proceso();
    proceso *procesoD = new proceso();
    proceso *procesoE = new proceso();
    procesoA->setNombreProceso('a');
    procesoB->setNombreProceso('b');
    procesoC->setNombreProceso('c');
    procesoD->setNombreProceso('d');
    procesoE->setNombreProceso('e');
    listaProcesos.Add(procesoA);
    listaProcesos.Add(procesoB);
    listaProcesos.Add(procesoC);
    listaProcesos.Add(procesoD);
    listaProcesos.Add(procesoE);
}
void lineaProduccion::trabajar(){

   // for (Node* carro = listaCarros.getFirst();carro != nullptr; carro->getNext()) {
       //agregar logica para restar tiempo al contador de cada carro segun el proceso
    //}
}
void lineaProduccion::agregar(char nombre)
{
    for (Node* temp = listaEspera.getFirst();temp!= nullptr;temp=temp->getNext()){
        carro* x=(carro*)temp->getData();
        if(((char*)(x->listaProcesos.getFirst()->getData()) == &nombre)){

        }
    }


}
void lineaProduccion::liberar(){
    for (Node* temp = listaProcesos.getFirst();temp != nullptr; temp = temp->getNext()){
        if (((proceso*)temp->getData())->listaCarros.getFirst() == nullptr){//caso de que este vacia

        }
        else if (((proceso*)temp->getData())->listaCarros.getT() <= 3) { //caso de que hayan carros adentro
            listaEspera.Add(((proceso*)temp->getData())->listaCarros.pop());
        }

    }
}

void lineaProduccion::llenarProcesos(){
    for (Node* procesoLlenar = listaProcesos.getFirst();procesoLlenar!= nullptr;procesoLlenar = procesoLlenar->getNext()) {
        for (int i = 0; i<3;i++) {
       //    ((proceso*)procesoLlenar->getData())->agregar(); cambiar esta logica y validar que el carro que se agregue sea el que tenga ese proceso de primero
        }
    }
}
