#include "proceso.h"

QString proceso::getNombreProceso() const
{
    return nombreProceso;
}

void proceso::setNombreProceso(const QString &value)
{
    nombreProceso = value;
}

int proceso::getTiempo() const
{
    return tiempo;
}

void proceso::setTiempo(int value)
{
    tiempo = value;
}

proceso::proceso()
{


}
