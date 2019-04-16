#include "proceso.h"

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
    this->listaCarros.Add(listaCarros.pop().getData());
}

void proceso::quitar(carro *carroQuitar)
{
    this->contadorCarros--;
}
void proceso::trabajar(){

    for (Node* carro = listaCarros.getFirst();carro != nullptr; carro->getNext()) {
       //agregar logica para restar tiempo al contador de cada carro segun el proceso
    }
}
