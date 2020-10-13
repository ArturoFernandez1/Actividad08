#include <iostream>
#include "computadora.h"

using namespace std;

int main(){
    Computadora c1;
    c1.setSO("Linux");
    c1.setCPU("AMD Ryzen 5 3600");
    c1.setRAM(12);
    c1.setAlmacenamiento(256);

    Computadora c2("Windows","Intel Core i5 10600k", 8, 512);
    Computadora c3("macOS", "Intel Core i9 10900k", 32, 2048);

    return 0;
}