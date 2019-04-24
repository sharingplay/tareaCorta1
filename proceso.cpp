#include "proceso.h"
#include "lineaproduccion.h"

proceso::proceso(char *nombre)
{
    this->nombreProceso = *nombre;
}

char proceso::getNombreProceso() const
{
    return this->nombreProceso;
}

void proceso::setNombreProceso(char value)
{
    this->nombreProceso = value;
}

void proceso::quitar(carro *carroQuitar)
{
    this->contadorCarros--;
    for (Node* temp = this->listaCarros.getFirst();temp != nullptr;temp = temp->getNext()) {
        if (temp->getData() == carroQuitar){
            lineaProduccion::listaEspera->Add(this->listaCarros.remove(temp));
        }

    }
}

void proceso::agregar(Node* carro)
{
    this->listaCarros.Add(carro);
    this->contadorCarros++;
}

