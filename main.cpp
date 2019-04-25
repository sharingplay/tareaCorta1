#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <chrono>
#include <unistd.h>
#include "lineaproduccion.h"
using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    int tipoCarro[20] ={1,2,3,4,5,6,6,5,4,3,2,1,1,2,3,2,1,4,3,5}; //Lista con el tipo de carros que se van a crear

    for (int i = 0; i<20;i++){//creacion carros
        carro* aux = new carro(tipoCarro[i]);
    }
    lineaProduccion::getInstance().llenarProcesos();
    auto start = chrono::steady_clock::now();//tiempo inicial
    while(lineaProduccion::getInstance().listaEspera->getT() > 0){
    auto end = chrono::steady_clock::now();

    int tiempoTranscurrido =chrono::duration_cast<chrono::seconds>(end - start).count();//tiempo transcurrido
            cout<<tiempoTranscurrido<<endl;
            if(tiempoTranscurrido%5==0){
                lineaProduccion::getInstance().agregar();
                lineaProduccion::getInstance().trabajar();
            }
            else if(tiempoTranscurrido%1==0){
                lineaProduccion::getInstance().trabajar();
            }
        }




    return a.exec();
}



