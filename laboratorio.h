#ifndef LABORATORIO_H
#define LABORATORIO_H

#include <iostream>
#include <fstream>
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
    void respaldar();
    friend Laboratorio& operator<<(Laboratorio &l, const Computadora& c);
};

#endif