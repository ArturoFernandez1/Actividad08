#ifndef LABORATORIO_H
#define LABORATORIO_H

#include <iostream>
#include "computadora.h"

class Laboratorio
{
private:
    size_t cont;
    Computadora datos[5];

public:
    Laboratorio();
    void agregarFinal(const Computadora &c);
    void mostrar();
    friend Laboratorio& operator<<(Laboratorio &l, const Computadora& c);
};

#endif