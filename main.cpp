#include <iostream>
#include "laboratorio.h"

using namespace std;

int main()
{
    Computadora c1;
    c1.setSO("Linux");
    c1.setCPU("AMD Ryzen 5 3600");
    c1.setRAM(12);
    c1.setAlmacenamiento(256);

    Computadora c2("Windows", "Intel Core i5 10600k", 8, 512);
    Computadora c3("macOS", "Intel Core i9 10900k", 32, 2048);

    Laboratorio lab;

    lab.agregarFinal(c1);
    lab.agregarFinal(c2);
    lab.agregarFinal(c3);

    lab.mostrar();

    Computadora c4;
    cin >> c4;
    cout << c4;

    return 0;
}