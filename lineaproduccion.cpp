#include "lineaproduccion.h"

LinkedList* lineaProduccion::listaEspera = new LinkedList();
LinkedList* lineaProduccion::listaTerminada = new LinkedList();
LinkedList* lineaProduccion::listaProcesosProduccion = new LinkedList;

lineaProduccion::lineaProduccion()
{

    listaProcesosProduccion->Add(procesoA);
    listaProcesosProduccion->Add(procesoB);
    listaProcesosProduccion->Add(procesoC);
    listaProcesosProduccion->Add(procesoD);
    listaProcesosProduccion->Add(procesoE);
}

void lineaProduccion::trabajar(){
    for(Node* aux = listaProcesosProduccion->getFirst();aux != nullptr; aux = aux->getNext()){
        proceso* procesoActual = (proceso*)aux->getData();

        for(Node* temp = procesoActual->listaCarros.getFirst(); temp!= nullptr; temp = temp->getNext()){
            carro* carroActual = (carro*)temp->getData();
            if(carroActual->listaTiempos.getFirst() == nullptr){ //elimina el carro del proceso y lo agrega a la lista de carros terminados
                listaTerminada->Add(procesoActual->listaCarros.remove(temp));
            }
            if(*((int*)carroActual->listaTiempos.getFirst()->getData()) == 0){//elimina el proceso terminado de la lista de procesos del carro
                delete (carroActual->listaTiempos.pop());
                delete (carroActual->listaProcesos.pop());
            }
            Node* a;
            a->setData((int*)(carroActual->listaTiempos.getFirst()->getData())-1);
            carroActual->listaTiempos.setFirst(a);
        }
    }
}

void lineaProduccion::agregar(char nombre)
{
    for (Node* temp = listaEspera->getFirst();temp!= nullptr;temp=temp->getNext()){
        carro* x = (carro*)temp->getData();
        if(*(char*)(x->listaProcesos.getFirst()->getData()) == nombre){
            qDebug()<<x<<endl;
            switch (nombre) {
            case 'a':
                if(procesoA->contadorCarros < 3){
                    procesoA->listaCarros.Add(temp);
                }
                break;
            case 'b':
                if(procesoB->contadorCarros < 3){
                    procesoB->listaCarros.Add(temp);
                }
                break;
            case 'c':
                if(procesoC->contadorCarros < 3){
                    procesoC->listaCarros.Add(temp);
                }
                break;
            case 'd':
                if(procesoD->contadorCarros < 3){
                    procesoD->listaCarros.Add(temp);
                }
                break;
            case 'e':
                if(procesoE->contadorCarros < 3){
                    procesoE->listaCarros.Add(temp);
                }
                break;
            }
        }
    }
}

void lineaProduccion::llenarProcesos(carro* carro){
            char nombre = *(char*)carro->listaProcesos.getFirst();
             Node* nodo = new Node(carro);
            switch (nombre) {
            case 'a':
                if(procesoA->contadorCarros < 3){
                    procesoA->listaCarros.Add(nodo);
                }
                else {
                    listaEspera->Add(nodo);
                }
                break;
            case 'b':
                if(procesoB->contadorCarros < 3){
                    procesoB->listaCarros.Add(nodo);
                }
                else {
                    listaEspera->Add(nodo);
                }
                break;
            case 'c':
                if(procesoC->contadorCarros < 3){
                    procesoC->listaCarros.Add(nodo);
                }
                else {
                    listaEspera->Add(nodo);
                }
                break;
            case 'd':
                if(procesoD->contadorCarros < 3){
                    procesoD->listaCarros.Add(nodo);
                }
                else {
                    listaEspera->Add(nodo);
                }
                break;
            case 'e':
                if(procesoE->contadorCarros < 3){
                    procesoE->listaCarros.Add(nodo);
                }
                else {
                    listaEspera->Add(nodo);
                }
                break;
            }
        }

void lineaProduccion::liberar(){
    for (Node* temp = listaProcesosProduccion->getFirst();temp != nullptr; temp = temp->getNext()){
        if (((proceso*)temp->getData())->listaCarros.getFirst() == nullptr){//caso de que este vacia

        }
        else if (((proceso*)temp->getData())->contadorCarros <= 3) { //caso de que hayan carros adentro
            listaEspera->Add(((proceso*)temp->getData())->listaCarros.pop());
        }
    }
}

