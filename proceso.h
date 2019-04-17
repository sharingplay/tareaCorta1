#ifndef PROCESO_H
#define PROCESO_H
#include <QString>
#include "linkedlist.h"
#include "carro.h"
#include "node.h"


class proceso
{
private:
    char nombreProceso;

public:
    proceso();
    LinkedList listaCarros;
    int contadorCarros = 0;
    char getNombreProceso() const;
    void setNombreProceso(const char &value);
    //!
    //! \brief proceso::quitar saca carros de este proceso y los pasa a la lista de espera
    //! \param carroQuitar indica el carro que se desea quitar del proceso
    //!
    void quitar(carro* carroQuitar);
    //!
    //! \brief trabajar resta al contador de tiempo del proceso respectivo a cada carro
    //!

};

#endif // PROCESO_H
