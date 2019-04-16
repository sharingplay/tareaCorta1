#include "carro.h"
#include "lineaproduccion.h"

carro::carro()
{

}
carro::carro(int tipo){
    lineaProduccion::listaEspera.Add(this);
    switch (tipo) {
    case 1:
        this->listaProcesos[0] = 'a';
        this->listaProcesos[1] = 'b';
        this->listaProcesos[2] = 'c';
        this->listaProcesos[3] = 'd';
        this->listaProcesos[4] = 'e';
        this->tiempo1=10;
        this->tiempo2=15;
        this->tiempo3=20;
        this->tiempo4=25;
        this->tiempo5=30;
        break;
    case 2:
        this->listaProcesos[0] = 'c';
        this->listaProcesos[1] = 'a';
        this->listaProcesos[2] = 'b';
        this->listaProcesos[3] = 'e';
        this->listaProcesos[4] = 'd';
        this->tiempo1=13;
        this->tiempo2=12;
        this->tiempo3=11;
        this->tiempo4=22;
        this->tiempo5=7;
        break;
    case 3:
        this->listaProcesos[0] = 'd';
        this->listaProcesos[1] = 'e';
        this->listaProcesos[2] = 'a';
        this->listaProcesos[3] = 'c';
        this->listaProcesos[4] = 'b';
        this->tiempo1=25;
        this->tiempo2=15;
        this->tiempo3=13;
        this->tiempo4=21;
        this->tiempo5=8;
        break;
    case 4:
        this->listaProcesos[0] = 'b';
        this->listaProcesos[1] = 'c';
        this->listaProcesos[2] = 'd';
        this->listaProcesos[3] = 'a';
        this->listaProcesos[4] = 'e';
        this->tiempo1=9;
        this->tiempo2=14;
        this->tiempo3=15;
        this->tiempo4=26;
        this->tiempo5=22;
        break;
    case 5:
        this->listaProcesos[0] = 'e';
        this->listaProcesos[1] = 'b';
        this->listaProcesos[2] = 'c';
        this->listaProcesos[3] = 'a';
        this->listaProcesos[4] = 'd';
        this->tiempo1=40;
        this->tiempo2=35;
        this->tiempo3=20;
        this->tiempo4=15;
        this->tiempo5=10;
        break;
    case 6:
        this->listaProcesos[0] = 'd';
        this->listaProcesos[1] = 'c';
        this->listaProcesos[2] = 'b';
        this->listaProcesos[3] = 'e';
        this->listaProcesos[4] = 'a';
        this->tiempo1=12;
        this->tiempo2=22;
        this->tiempo3=6;
        this->tiempo4=16;
        this->tiempo5=13;
        break;
    }
}
