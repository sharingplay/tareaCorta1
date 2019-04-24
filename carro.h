#ifndef CARRO_H
#define CARRO_H
#include "linkedlist.h"
#include "node.h"


class carro
{
private:
    bool iterado = false;
    int _5 = 5;
    int _15 = 15;
    int _10 = 10;
    int _7 = 7;
    int _9 = 9;
    int _13 = 13;
    int _8 = 8;
    int _6 = 6;
    int _4 = 4;
    int _11 = 11;
    int _3 = 3;
    char a = 'a';
    char b = 'b';
    char c = 'c';
    char d = 'd';
    char e = 'e';
public:
    //!
    //! \brief listaProcesos orden de los procesos
    //!
    LinkedList *listaProcesos = new LinkedList();
    //!
    //! \brief tiempo1,tiempo,tiempo3,tiempo4,tiempo5 Tiempos que dura cada proceso
    //!
    LinkedList *listaTiempos = new LinkedList();
    carro(int tipo);
    carro();

    bool getIterado() const;
    void setIterado(bool value);
};
#endif // CARRO_H
