#ifndef PROCESO_H
#define PROCESO_H
#include <QString>
#include "linkedlist.h"
#include "carro.h"


class proceso
{
private:
    QString nombreProceso;
    LinkedList listaCarros;
    int contadorCarros;

public:
    proceso();
    static LinkedList listaEspera;
    QString getNombreProceso() const;
    void setNombreProceso(const QString &value);
    void agregar();
    void quitar(carro* carroQuitar);
};

#endif // PROCESO_H
