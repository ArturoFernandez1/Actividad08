#include "laboratorio.h"

using namespace std;

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarFinal(const Computadora &c)
{
    if (cont < 5)
    {
        datos[cont] = c;
        cont++;
    }
    else
    {
        cout << "Arreglo lleno" << endl;
    }
}

void Laboratorio::mostrar()
{
    for (size_t i = 0; i < cont; i++)
    {
        Computadora &c = datos[i];
        cout << "Sistema operativo: " << c.getSO() << endl;
        cout << "CPU: " << c.getCPU() << endl;
        cout << "RAM: " << c.getRAM() << " GB" << endl;
        cout << "Almacenamiento: " << c.getAlmacenamiento() << " GB" << endl;
        cout << endl;
    }
}