#include "proceso.h"
#include "lineaproduccion.h"

QString proceso::getNombreProceso() const
{
    return this->nombreProceso;
}

void proceso::setNombreProceso(const QString &value)
{
    this->nombreProceso = value;
}

void proceso::agregar()
{
    this->contadorCarros++;
    this->listaCarros.Add(lineaProduccion::listaEspera.pop().getData());
}

void proceso::quitar(carro *carroQuitar)
{
    this->contadorCarros--;

    for (Node* temp = this->listaCarros.getFirst();temp != nullptr;temp = temp->getNext()) {
        if (temp->getData() == carroQuitar){
            lineaProduccion::listaEspera.Add(this->listaCarros.remove(temp));
        }

    }
}
void proceso::trabajar(){

    for (Node* carro = listaCarros.getFirst();carro != nullptr; carro->getNext()) {
       //agregar logica para restar tiempo al contador de cada carro segun el proceso
    }
}
