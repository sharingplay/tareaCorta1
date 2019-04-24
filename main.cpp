#include "mainwindow.h"
#include <QApplication>
#include <chrono>
#include <iostream>
#include "lineaproduccion.h"
using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    int tipoCarro[20] ={1,2,3,4,5,6,6,5,4,3,2,1,1,2,3,2,1,2,3,5};
    lineaProduccion* lineaEnsamblaje = new lineaProduccion();

    for (int i = 0; i<20;i++){//creacion carros
        carro* aux = new carro(tipoCarro[i]);
    }

    typedef chrono::high_resolution_clock Time;
    typedef chrono::milliseconds ms;
    typedef chrono::duration<float> fsec;
    auto t0 = Time::now();
    auto t1 = Time::now();

    bool flag = true;


    while(lineaProduccion::listaEspera->getT() > 0){
        auto trans = t1-t0;
        if (chrono::seconds(1) > trans || flag == true){
            flag = false;
            t0 = Time::now();
            t1 = Time::now();
            lineaEnsamblaje->trabajar();
        }
        else{
            t1 = Time::now();
        }
    }
    qDebug()<<lineaProduccion::listaTerminada->getT();

    return a.exec();
}



