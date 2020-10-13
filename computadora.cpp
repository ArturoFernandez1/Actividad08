#include "computadora.h"

using namespace std;

Computadora::Computadora() {}

Computadora::Computadora(const std::string &so, const std::string &cpu, float ram, float almacenamiento)
{
    this->so = so;
    this->cpu = cpu;
    this->ram = ram;
    this->almacenamiento = almacenamiento;
}

void Computadora::setSO(const std::string &so)
{
    this->so = so;
}
std::string Computadora::getSO()
{
    return so;
}
void Computadora::setCPU(const std::string &cpu)
{
    this->cpu = cpu;
}
std::string Computadora::getCPU()
{
    return cpu;
}
void Computadora::setRAM(float ram)
{
    this->ram = ram;
}
int Computadora::getRAM()
{
    return ram;
}
void Computadora::setAlmacenamiento(float almacenamiento)
{
    this->almacenamiento = almacenamiento;
}
float Computadora::getAlmacenamiento()
{
    return almacenamiento;
}