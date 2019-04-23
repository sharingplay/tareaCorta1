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
    switch (tipo) {
    case 1:
        this->listaTiempos.Add(5);
       this->listaTiempos.Add(15);
       this->listaTiempos.Add(10);
       this->listaTiempos.Add(7);
       this->listaTiempos.Add(9);
       this->listaProcesos.Add('a');
       this->listaProcesos.Add('b');
       this->listaProcesos.Add('c');
       this->listaProcesos.Add('d');
       this->listaProcesos.Add('e');
       break;
    case 2:
        this->listaTiempos.Add(9);
        this->listaTiempos.Add(7);
        this->listaTiempos.Add(13);
        this->listaTiempos.Add(8);
        this->listaTiempos.Add(6);
        this->listaProcesos.Add('c');
        this->listaProcesos.Add('a');
        this->listaProcesos.Add('b');
        this->listaProcesos.Add('e');
        this->listaProcesos.Add('d');
        break;
    case 3:
        this->listaTiempos.Add(7);
        this->listaTiempos.Add(12);
        this->listaTiempos.Add(8);
        this->listaTiempos.Add(4);
        this->listaTiempos.Add(9);
        this->listaProcesos.Add('d');
        this->listaProcesos.Add('e');
        this->listaProcesos.Add('a');
        this->listaProcesos.Add('c');
        this->listaProcesos.Add('b');
        break;
    case 4:
        this->listaTiempos.Add(11);
        this->listaTiempos.Add(10);
        this->listaTiempos.Add(9);
        this->listaTiempos.Add(4);
        this->listaTiempos.Add(3);
        this->listaProcesos.Add('b');
        this->listaProcesos.Add('c');
        this->listaProcesos.Add('d');
        this->listaProcesos.Add('a');
        this->listaProcesos.Add('e');
        break;
    case 5:
        this->listaTiempos.Add(13);
        this->listaTiempos.Add(10);
        this->listaTiempos.Add(7);
        this->listaTiempos.Add(5);
        this->listaTiempos.Add(8);
        this->listaProcesos.Add('e');
        this->listaProcesos.Add('b');
        this->listaProcesos.Add('c');
        this->listaProcesos.Add('a');
        this->listaProcesos.Add('d');
        break;
    case 6:
        this->listaTiempos.Add(15);
        this->listaTiempos.Add(7);
        this->listaTiempos.Add(6);
        this->listaTiempos.Add(9);
        this->listaTiempos.Add(1);
        this->listaProcesos.Add('d');
        this->listaProcesos.Add('c');
        this->listaProcesos.Add('b');
        this->listaProcesos.Add('e');
        this->listaProcesos.Add('a');
        break;
    }
}
