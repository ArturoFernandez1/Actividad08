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
    void respaldar_tabla();
    void recuperar();
    friend Laboratorio& operator<<(Laboratorio &l, const Computadora& c);
};

#endif