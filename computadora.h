#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>

class Computadora
{
private:
    std::string so;
    std::string cpu;
    int ram;
    float almacenamiento;

public:
    Computadora();
    Computadora(const std::string &so, const std::string &cpu, int ram, float almacenamiento);
    void setSO(const std::string &so);
    std::string getSO();
    void setCPU(const std::string &cpu);
    std::string getCPU();
    void setRAM(int ram);
    int getRAM();
    void setAlmacenamiento(float almacenamiento);
    float getAlmacenamiento();
};

#endif