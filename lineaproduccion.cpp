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
            carroActual->listaTiempos->setFirst(carroActual->listaTiempos->getFirst()-1);
            if(carroActual->listaTiempos->getFirst() == nullptr){ //elimina el carro del proceso y lo agrega a la lista de carros terminados
                listaTerminada->Add(procesoActual->listaCarros.remove(temp));
            }
            else if(*((int*)carroActual->listaTiempos->getFirst()->getData()) == 0){//elimina el proceso terminado de la lista de procesos del carro
                delete (carroActual->listaTiempos->pop());
                delete (carroActual->listaProcesos->pop());
                listaEspera->Add(procesoActual->listaCarros.remove(temp));
            }
            Node* a;
            a->setData((int*)(carroActual->listaTiempos->getFirst()->getData())-1);
            carroActual->listaTiempos->setFirst(a);
        }
    }
}

void lineaProduccion::agregar()
{
    for(Node* nodoProceso = listaProcesosProduccion->getFirst();nodoProceso != nullptr; nodoProceso = nodoProceso->getNext()){
        proceso* tempProceso = ((proceso*)nodoProceso->getData());
        listaEspera->Add(tempProceso->listaCarros.pop());
        tempProceso->listaCarros.Add(listaEspera->pop());
    }
    for (Node* temp = listaEspera->pop();((carro*)temp->getData())->getIterado()!=true;temp=listaEspera->pop()){
        qDebug()<<listaEspera->getT()<<"Lista Espera";
        carro* x = (carro*)temp->getData();
            switch (*(char*)x->listaProcesos->getFirst()->getData()) {
            case 'a':
                if(procesoA->contadorCarros < 3){
                    procesoA->agregar(temp);
                    qDebug()<<procesoA->contadorCarros<<"A";
                }
                else {
                    listaEspera->Add(temp);
                }
                break;
            case 'b':
                if(procesoB->contadorCarros < 3){
                    procesoB->agregar(temp);
                    qDebug()<<procesoB->contadorCarros<<"B";
                }
                else {
                    listaEspera->Add(temp);
                }
                break;
            case 'c':
                if(procesoC->contadorCarros < 3){
                    procesoC->agregar(temp);
                    qDebug()<<procesoC->contadorCarros<<"C";
                }
                else {
                    listaEspera->Add(temp);
                }
                break;
            case 'd':
                if(procesoD->contadorCarros < 3){
                    procesoD->agregar(temp);
                    qDebug()<<procesoD->contadorCarros<<"D";
                    qDebug()<<listaEspera->getFirst()<<"LISTA ESPERA";
                }
                else {
                    listaEspera->Add(temp);
                }
                break;
            case 'e':
                if(procesoE->contadorCarros < 3){
                    procesoE->agregar(temp);
                    qDebug()<<procesoE->contadorCarros<<"E";
                }
                else {
                    listaEspera->Add(temp);
                }
                break;
            }
    }
}

void lineaProduccion::llenarProcesos(){
    for (Node* aux = lineaProduccion::listaEspera->getFirst();((carro*)listaEspera->getFirst()->getNext()->getData())->getIterado()!=true; aux = lineaProduccion::listaEspera->getFirst()) {
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
                listaEspera->Add(nodo);
            }
            break;
        case 'b':
            if(procesoB->contadorCarros < 3){
                procesoB->agregar(nodo);
            }
            else {
                listaEspera->Add(nodo);
            }
            break;
        case 'c':
            if(procesoC->contadorCarros < 3){
                procesoC->agregar(nodo);
            }
            else {
                listaEspera->Add(nodo);
            }
            break;
        case 'd':
            if(procesoD->contadorCarros < 3){
                procesoD->agregar(nodo);
            }
            else {
                listaEspera->Add(nodo);
            }
            break;
        case 'e':
            if(procesoE->contadorCarros < 3){
                procesoE->agregar(nodo);
            }
            else {
                listaEspera->Add(nodo);
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
            listaEspera->Add(((proceso*)temp->getData())->listaCarros.pop());
        }
    }
}

