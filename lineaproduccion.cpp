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
            int *segPtr = (int*) carroActual->listaTiempos->getFirst()->getData();
            *segPtr = (*segPtr) -1;
            qDebug()<<carroActual->tipo<<*(int*)carroActual->listaTiempos->getFirst()->getData()<<*(char*)carroActual->listaProcesos->getFirst()->getData()<<carroActual->listaProcesos->getT();
            if(*((int*)carroActual->listaTiempos->getFirst()->getData()) == 0){//elimina el proceso terminado de la lista de procesos del carro
                delete (carroActual->listaTiempos->pop());
                delete (carroActual->listaProcesos->pop());
                bool flag = false;
                Node* secundario;
                if (temp->getNext() != nullptr){
                    secundario = temp->getNext();
                    flag = true;
                }
                listaEspera->Add(procesoActual->listaCarros.remove(temp)->getData());
                procesoActual->contadorCarros--;
                if(carroActual->listaTiempos->getT() == 0){ //elimina el carro del proceso y lo agrega a la lista de carros terminados
                    qDebug()<<"ENTRA A SACAR";
                    listaTerminada->Add(listaEspera->remove(temp)->getData());
                }
                if (flag){
                    temp = secundario;
                }
            }
        }
    }
}

void lineaProduccion::agregar()
{
    for(Node* nodoProceso = listaProcesosProduccion->getFirst();nodoProceso != nullptr; nodoProceso = nodoProceso->getNext()){
        proceso* tempProceso = ((proceso*)nodoProceso->getData());
        if (tempProceso->contadorCarros > 0){
            listaEspera->Add(tempProceso->listaCarros.pop()->getData());
            tempProceso->contadorCarros--;
        }
    }
    for (Node* temp = listaEspera->getFirst();temp != nullptr ;temp=temp->getNext()){
        carro* x = (carro*)temp->getData();
        Node* aux;
        bool flag = false;
            switch (*(char*)x->listaProcesos->getFirst()->getData()) {
            case 'a':
                if(procesoA->contadorCarros < 3){
                    if (temp->getNext() != nullptr){
                        aux = temp->getNext();
                        flag = true;
                    }
                    procesoA->agregar(listaEspera->remove(temp));
                    if (flag){
                        temp = aux;
                    }
                }
                break;
            case 'b':
                if(procesoB->contadorCarros < 3){
                    if (temp->getNext() != nullptr){
                        aux = temp->getNext();
                        flag = true;
                    }
                    procesoB->agregar(listaEspera->remove(temp));
                    if (flag){
                        temp = aux;
                    }
                }
                break;
            case 'c':
                if(procesoC->contadorCarros < 3){
                    if (temp->getNext() != nullptr){
                        aux = temp->getNext();
                        flag = true;
                    }
                    procesoC->agregar(listaEspera->remove(temp));
                    if (flag){
                        temp = aux;
                    }
                }
                break;
            case 'd':
                if(procesoD->contadorCarros < 3){
                    if (temp->getNext() != nullptr){
                        aux = temp->getNext();
                        flag = true;
                    }
                    procesoD->agregar(listaEspera->remove(temp));
                    if (flag){
                        temp = aux;
                    }
                }
                break;
            case 'e':
                if(procesoE->contadorCarros < 3){
                    if (temp->getNext() != nullptr){
                        aux = temp->getNext();
                        flag = true;
                    }
                    procesoE->agregar(listaEspera->remove(temp));
                    if (flag){
                        temp = aux;
                    }
                }
                break;
            }
    }
}

void lineaProduccion::llenarProcesos(){
    for (Node* aux = lineaProduccion::listaEspera->getFirst();((carro*)listaEspera->getFirst()->getData())->getIterado()!=true; aux = lineaProduccion::listaEspera->getFirst()) {
        carro* carroAux = ((carro*)aux->getData());
        carroAux->setIterado(true);
        char nombre = *(char*)carroAux->listaProcesos->getFirst()->getData();
        Node* nodo = lineaProduccion::listaEspera->pop();
        switch (nombre) {
        case 'a':
            if(procesoA->contadorCarros < 3 ){
                procesoA->agregar(nodo);
            }
            else {
                listaEspera->Add(nodo->getData());
            }
            break;
        case 'b':
            if(procesoB->contadorCarros < 3){
                procesoB->agregar(nodo);
            }
            else {
                listaEspera->Add(nodo->getData());
            }
            break;
        case 'c':
            if(procesoC->contadorCarros < 3){
                procesoC->agregar(nodo);
            }
            else {
                listaEspera->Add(nodo->getData());
            }
            break;
        case 'd':
            if(procesoD->contadorCarros < 3){
                procesoD->agregar(nodo);
            }
            else {
                listaEspera->Add(nodo->getData());
            }
            break;
        case 'e':
            if(procesoE->contadorCarros < 3){
                procesoE->agregar(nodo);
            }
            else {
                listaEspera->Add(nodo->getData());
            }
            break;
        }
    }

    }


void lineaProduccion::liberar(){
    for (Node* temp = listaProcesosProduccion->getFirst();temp != nullptr; temp = temp->getNext()){
        if (((proceso*)temp->getData())->listaCarros.getFirst() == nullptr){//caso de que este vacia

        }
        else if (((proceso*)temp->getData())->contadorCarros <= 3) { //caso de que hayan carros adentro
            listaEspera->Add(((proceso*)temp->getData())->listaCarros.pop()->getData());
        }
    }
}

