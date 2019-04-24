#include "carro.h"
#include "lineaproduccion.h"
carro::carro()
{

}
bool carro::getIterado() const
{
    return iterado;
}

void carro::setIterado(bool value)
{
    iterado = value;
}

carro::carro(int tipo){
    lineaProduccion::listaEspera->Add(this);
    char x;
    switch (tipo) {
    case 1:
       this->listaTiempos->Add(&_5);
       this->listaTiempos->Add(&_15);
       this->listaTiempos->Add(&_10);
       this->listaTiempos->Add(&_7);
       this->listaTiempos->Add(&_9);
       this->listaProcesos->Add(&a);
       this->listaProcesos->Add(&b);
       this->listaProcesos->Add(&c);
       this->listaProcesos->Add(&d);
       this->listaProcesos->Add(&e);
       break;
    case 2:
        this->listaTiempos->Add(&_9);
        this->listaTiempos->Add(&_7);
        this->listaTiempos->Add(&_13);
        this->listaTiempos->Add(&_8);
        this->listaTiempos->Add(&_6);
        this->listaProcesos->Add(&c);
        this->listaProcesos->Add(&a);
        this->listaProcesos->Add(&b);
        this->listaProcesos->Add(&e);
        this->listaProcesos->Add(&d);
        x = *(char*)(this->listaProcesos->getFirst()->getData());
        qDebug()<<x<<"NUMERO";
        break;
    case 3:
        this->listaTiempos->Add(&_7);
        this->listaTiempos->Add(&_13);
        this->listaTiempos->Add(&_8);
        this->listaTiempos->Add(&_4);
        this->listaTiempos->Add(&_9);
        this->listaProcesos->Add(&d);
        this->listaProcesos->Add(&e);
        this->listaProcesos->Add(&a);
        this->listaProcesos->Add(&c);
        this->listaProcesos->Add(&b);
        break;
    case 4:
        this->listaTiempos->Add(&_11);
        this->listaTiempos->Add(&_10);
        this->listaTiempos->Add(&_9);
        this->listaTiempos->Add(&_4);
        this->listaTiempos->Add(&_3);
        this->listaProcesos->Add(&b);
        this->listaProcesos->Add(&c);
        this->listaProcesos->Add(&d);
        this->listaProcesos->Add(&a);
        this->listaProcesos->Add(&e);
        break;
    case 5:
        this->listaTiempos->Add(&_13);
        this->listaTiempos->Add(&_10);
        this->listaTiempos->Add(&_7);
        this->listaTiempos->Add(&_5);
        this->listaTiempos->Add(&_8);
        this->listaProcesos->Add(&e);
        this->listaProcesos->Add(&b);
        this->listaProcesos->Add(&c);
        this->listaProcesos->Add(&a);
        this->listaProcesos->Add(&d);
        break;
    case 6:
        this->listaTiempos->Add(&_15);
        this->listaTiempos->Add(&_7);
        this->listaTiempos->Add(&_6);
        this->listaTiempos->Add(&_9);
        this->listaTiempos->Add(&_10);
        this->listaProcesos->Add(&d);
        this->listaProcesos->Add(&c);
        this->listaProcesos->Add(&b);
        this->listaProcesos->Add(&e);
        this->listaProcesos->Add(&a);
        break;
    }
}
