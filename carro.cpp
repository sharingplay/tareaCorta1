#include "carro.h"
#include "lineaproduccion.h"
carro::carro()
{

}
carro::carro(int tipo){
    lineaProduccion::listaEspera->Add(this);
    int x;
    int _5 = 5;
    int _15 = 15;
    int _10 = 10;
    int _7 = 7;
    int _9 = 9;
    char a = 'a';
    switch (tipo) {
    case 1:
       this->listaTiempos->Add(&_5);
       this->listaTiempos->Add(&_15);
       this->listaTiempos->Add(&_10);
       this->listaTiempos->Add(&_7);
       this->listaTiempos->Add(&_9);
       this->listaProcesos->Add(&a);
       x = *(int*)(this->listaTiempos->getFirst()->getNext()->getData());
       qDebug()<<x<<"NUMERO";
       qDebug()<<(listaTiempos);
       qDebug()<<(listaProcesos);
       this->listaProcesos->Add('b');
       this->listaProcesos->Add('c');
       this->listaProcesos->Add('d');
       this->listaProcesos->Add('e');
       break;
    case 2:
        this->listaTiempos->Add(9);
        this->listaTiempos->Add(7);
        this->listaTiempos->Add(13);
        this->listaTiempos->Add(8);
        this->listaTiempos->Add(6);
        this->listaProcesos->Add('c');
        this->listaProcesos->Add('a');
        this->listaProcesos->Add('b');
        this->listaProcesos->Add('e');
        this->listaProcesos->Add('d');
        break;
    case 3:
        this->listaTiempos->Add(7);
        this->listaTiempos->Add(12);
        this->listaTiempos->Add(8);
        this->listaTiempos->Add(4);
        this->listaTiempos->Add(9);
        this->listaProcesos->Add('d');
        this->listaProcesos->Add('e');
        this->listaProcesos->Add('a');
        this->listaProcesos->Add('c');
        this->listaProcesos->Add('b');
        break;
    case 4:
        this->listaTiempos->Add(11);
        this->listaTiempos->Add(10);
        this->listaTiempos->Add(9);
        this->listaTiempos->Add(4);
        this->listaTiempos->Add(3);
        this->listaProcesos->Add('b');
        this->listaProcesos->Add('c');
        this->listaProcesos->Add('d');
        this->listaProcesos->Add('a');
        this->listaProcesos->Add('e');
        break;
    case 5:
        this->listaTiempos->Add(13);
        this->listaTiempos->Add(10);
        this->listaTiempos->Add(7);
        this->listaTiempos->Add(5);
        this->listaTiempos->Add(8);
        this->listaProcesos->Add('e');
        this->listaProcesos->Add('b');
        this->listaProcesos->Add('c');
        this->listaProcesos->Add('a');
        this->listaProcesos->Add('d');
        break;
    case 6:
        this->listaTiempos->Add(15);
        this->listaTiempos->Add(7);
        this->listaTiempos->Add(6);
        this->listaTiempos->Add(9);
        this->listaTiempos->Add(1);
        this->listaProcesos->Add('d');
        this->listaProcesos->Add('c');
        this->listaProcesos->Add('b');
        this->listaProcesos->Add('e');
        this->listaProcesos->Add('a');
        break;
    }
}
