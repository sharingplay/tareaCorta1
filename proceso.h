#ifndef PROCESO_H
#define PROCESO_H
#include <QString>


class proceso
{
private:
    int tiempo;
    QString nombreProceso;

public:
    proceso();
    QString getNombreProceso() const;
    void setNombreProceso(const QString &value);
    int getTiempo() const;
    void setTiempo(int value);
};

#endif // PROCESO_H
