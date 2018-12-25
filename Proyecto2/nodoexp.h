#ifndef NODOEXP_H
#define NODOEXP_H
#include <QString>

class NodoExp
{
private:
    /*PARA EXPRESIONES*/
    NodoExp *izq;
    NodoExp *der;
    int operacion;

    /*PARA VALOR DE UNA EXPRESION*/
    int tipo;
    QString valor;

    /*PARA POSIBLES ERRORES*/
    int line;
    int colm;
public:
    NodoExp();
    NodoExp(Nodo *izq, Nodo *der);
    NodoExp(Nodo *izq);
};

#endif // NODOEXP_H
