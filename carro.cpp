#include "carro.h"
#include "lineaproduccion.h"

carro::carro()
{

}
carro::carro(int tipo){
    lineaProduccion::listaEspera->Add(this);
    int x =5;
    switch (tipo) {
    case 1:
       this->listaTiempos.Add(&x);
       this->listaTiempos.Add((int*)15);
       this->listaTiempos.Add((int*)10);
       this->listaTiempos.Add((int*)7);
       this->listaTiempos.Add((int*)9);
       this->listaProcesos.Add((char*)'a');
       this->listaProcesos.Add((char*)'b');
       this->listaProcesos.Add((char*)'c');
       this->listaProcesos.Add((char*)'d');
       this->listaProcesos.Add((char*)'e');
       break;
    case 2:
        this->listaTiempos.Add((int*)9);
        this->listaTiempos.Add((int*)7);
        this->listaTiempos.Add((int*)13);
        this->listaTiempos.Add((int*)8);
        this->listaTiempos.Add((int*)6);
        this->listaProcesos.Add((char*)'c');
        this->listaProcesos.Add((char*)'a');
        this->listaProcesos.Add((char*)'b');
        this->listaProcesos.Add((char*)'e');
        this->listaProcesos.Add((char*)'d');
        break;
    case 3:
        this->listaTiempos.Add((int*)7);
        this->listaTiempos.Add((int*)12);
        this->listaTiempos.Add((int*)8);
        this->listaTiempos.Add((int*)4);
        this->listaTiempos.Add((int*)9);
        this->listaProcesos.Add((char*)'d');
        this->listaProcesos.Add((char*)'e');
        this->listaProcesos.Add((char*)'a');
        this->listaProcesos.Add((char*)'c');
        this->listaProcesos.Add((char*)'b');
        break;
    case 4:
        this->listaTiempos.Add((int*)11);
        this->listaTiempos.Add((int*)10);
        this->listaTiempos.Add((int*)9);
        this->listaTiempos.Add((int*)4);
        this->listaTiempos.Add((int*)3);
        this->listaProcesos.Add((char*)'b');
        this->listaProcesos.Add((char*)'c');
        this->listaProcesos.Add((char*)'d');
        this->listaProcesos.Add((char*)'a');
        this->listaProcesos.Add((char*)'e');
        break;
    case 5:
        this->listaTiempos.Add((int*)13);
        this->listaTiempos.Add((int*)10);
        this->listaTiempos.Add((int*)7);
        this->listaTiempos.Add((int*)5);
        this->listaTiempos.Add((int*)8);
        this->listaProcesos.Add((char*)'e');
        this->listaProcesos.Add((char*)'b');
        this->listaProcesos.Add((char*)'c');
        this->listaProcesos.Add((char*)'a');
        this->listaProcesos.Add((char*)'d');
        break;
    case 6:
        this->listaTiempos.Add((int*)15);
        this->listaTiempos.Add((int*)7);
        this->listaTiempos.Add((int*)6);
        this->listaTiempos.Add((int*)9);
        this->listaTiempos.Add((int*)11);
        this->listaProcesos.Add((char*)'d');
        this->listaProcesos.Add((char*)'c');
        this->listaProcesos.Add((char*)'b');
        this->listaProcesos.Add((char*)'e');
        this->listaProcesos.Add((char*)'a');
        break;
    }
}
