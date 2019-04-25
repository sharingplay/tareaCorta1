#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <chrono>
#include <unistd.h>
#include "lineaproduccion.h"
#include <thread>
#include <pthread.h>
using namespace std;
void methods(){
    MainWindow w;
    w.show();
    int tipoCarro[20] ={1,2,3,4,5,6,6,5,4,3,2,1,1,2,3,2,1,4,3,5}; //Lista con el tipo de carros que se van a crear

    for (int i = 0; i<20;i++){//creacion carros
        carro* aux = new carro(tipoCarro[i],("Carro "+to_string(i)));
    }
    lineaProduccion::getInstance().llenarProcesos();
    auto start = chrono::steady_clock::now();//tiempo inicial
    int tiempo_anterior = 0;
    while(true){
        qApp->processEvents();
        auto end = chrono::steady_clock::now();
        bool flag = false;

        int tiempoTranscurrido =chrono::duration_cast<chrono::seconds>(end - start).count();//tiempo transcurrido
//            cout<<tiempoTranscurrido<<endl;
//            cout<<lineaProduccion::getInstance().listaTerminada->getT()<<endl;
        //qDebug()<<lineaProduccion().getInstance().listaEspera->getT()<<"SIZE";
            if (tiempoTranscurrido >0){
                flag = true;
            }
            if(tiempoTranscurrido%5==0 && flag && tiempo_anterior!=tiempoTranscurrido ){
                tiempo_anterior = tiempoTranscurrido;
                qDebug()<<"ADENTRO";
                lineaProduccion::getInstance().agregar();
                lineaProduccion::getInstance().trabajar();
                w.escribir(tiempoTranscurrido);
            }
            else if(tiempoTranscurrido%1==0 && flag && tiempo_anterior!=tiempoTranscurrido){
                tiempo_anterior = tiempoTranscurrido;
                lineaProduccion::getInstance().trabajar();
                qDebug()<<lineaProduccion::getInstance().listaTerminada->getT();
                w.escribir(tiempoTranscurrido);
            }
        }

}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    methods();
    return a.exec();
}



