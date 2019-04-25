#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "lineaproduccion.h"
#include "node.h"
#include "qprogressbar.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{

    delete ui;
}

void MainWindow::escribir(int segundos)
{
    lineaProduccion* lp = &lineaProduccion::getInstance();
    ui->progressBar->setValue(lp->listaTerminada->getT());
    ui->textEdit->setText("VACIO");
    ui->textEdit_2->setText("VACIO");
    ui->textEdit_3->setText("VACIO");
    ui->textEdit_4->setText("VACIO");
    ui->textEdit_5->setText("VACIO");
    ui->textEdit_6->setText("VACIO");
    ui->textEdit_7->setText("VACIO");
    ui->textEdit_8->setText("VACIO");
    ui->textEdit_9->setText("VACIO");
    ui->textEdit_10->setText("VACIO");
    ui->textEdit_11->setText("VACIO");
    ui->textEdit_12->setText("VACIO");
    ui->textEdit_13->setText("VACIO");
    ui->textEdit_14->setText("VACIO");
    ui->textEdit_15->setText("VACIO");
    ui->textEdit_16->setText(QString::number(segundos%5));
    ui->textEdit_17->setText("VACIO");
    ui->textEdit_18->setText("VACIO");
    ui->textEdit_19->setText("VACIO");
    ui->textEdit_20->setText("VACIO");
    ui->textEdit_21->setText("VACIO");
    ui->textEdit_22->setText("VACIO");
    ui->textEdit_23->setText("VACIO");
    ui->textEdit_24->setText("VACIO");
    ui->textEdit_25->setText("VACIO");
    ui->textEdit_26->setText("VACIO");
        int contador = 0;
        for (Node* nodo = lp->listaProcesosProduccion->getFirst(); nodo != nullptr;nodo = nodo->getNext()){
            proceso* tempProceso = ((proceso*)nodo->getData());
            contador++;
            int cont2 = 0;
            for (Node* aux = tempProceso->listaCarros.getFirst(); aux!= nullptr; aux= aux->getNext() ){
                cont2++;
                carro *car =((carro*)(aux->getData()));
                std::string str= "";
                str = car->nombre+ "\n" + "Tipo: " + std::to_string(car->tipo) + "\n" + "Restan: " + std::to_string(*(int*)car->listaTiempos->getFirst()->getData());
                QString qstr = QString::fromStdString(str);
                switch(contador){
                case 1:
                    if (cont2 == 1){
                        qDebug()<<qstr;
                        this->ui->textEdit->setText(qstr);
                    }
                    else if (cont2 == 2){
                        ui->textEdit_2->setText(qstr);
                    }
                    else if(cont2 == 3){
                        ui->textEdit_3->setText(qstr);
                    }
                    break;
                case 2:
                    if (cont2 == 1){
                        ui->textEdit_4->setText(qstr);
                    }
                    else if (cont2 == 2){
                        ui->textEdit_5->setText(qstr);
                    }
                    else if(cont2 == 3){
                        ui->textEdit_6->setText(qstr);
                    }
                    break;
                case 3:
                    if (cont2 == 1){
                        ui->textEdit_7->setText(qstr);
                    }
                    else if (cont2 == 2){
                        ui->textEdit_8->setText(qstr);
                    }
                    else if(cont2 == 3){
                        ui->textEdit_9->setText(qstr);
                    }
                    break;
                case 4:
                    if (cont2 == 1){
                        ui->textEdit_10->setText(qstr);
                    }
                    else if (cont2 == 2){
                        ui->textEdit_11->setText(qstr);
                    }
                    else if(cont2 == 3){
                        ui->textEdit_12->setText(qstr);
                    }
                    break;
                case 5:
                    if (cont2 == 1){
                        ui->textEdit_13->setText(qstr);
                    }
                    else if (cont2 == 2){
                        ui->textEdit_14->setText(qstr);
                    }
                    else if(cont2 == 3){
                        ui->textEdit_15->setText(qstr);
                    }
                    break;
                }
            }
        }
        int cont = 0;
        for (Node* nodo = lp->listaEspera->getFirst(); nodo != nullptr;nodo = nodo->getNext()){
            carro *car =((carro*)(nodo->getData()));
            std::string str= "";
            str = car->nombre+ "\n" + "Proceso: " + *(char*)car->listaProcesos->getFirst()->getData() + "\n" + "Restan: " + std::to_string(*(int*)car->listaTiempos->getFirst()->getData());
            QString qstr = QString::fromStdString(str);
            cont++;
            switch (cont) {
            case 1:
                ui->textEdit_17->setText(qstr);
                break;
            case 2:
                ui->textEdit_18->setText(qstr);
                break;
            case 3:
                ui->textEdit_19->setText(qstr);
                break;
            case 4:
                ui->textEdit_20->setText(qstr);
                break;
            case 5:
                ui->textEdit_21->setText(qstr);
                break;
            case 6:
                ui->textEdit_22->setText(qstr);
                break;
            case 7:
                ui->textEdit_23->setText(qstr);
                break;
            case 8:
                ui->textEdit_24->setText(qstr);
                break;
            case 9:
                ui->textEdit_25->setText(qstr);
                break;
            case 10:
                ui->textEdit_26->setText(qstr);
                break;

            }

        }
}

void MainWindow::on_progressBar_valueChanged(int value)
{

}

