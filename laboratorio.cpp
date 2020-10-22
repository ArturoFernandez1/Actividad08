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
    cout << left;
    cout << setw(20) << "Sistema operativo";
    cout << setw(24) << "CPU";
    cout << setw(10) << "RAM(GB)";
    cout << setw(8) << "Almacenamiento(GB)";
    cout << endl;
    for (size_t i = 0; i < cont; i++)
    {
        Computadora &c = datos[i];
        cout << c;
    }
}

void Laboratorio::respaldar()
{
    ofstream archivo("laboratorio.txt");
    if (archivo.is_open())
    {
        for (size_t i = 0; i < cont; i++)
        {
            Computadora &c = datos[i];
            archivo << c.getSO() << endl;
            archivo << c.getCPU() << endl;
            archivo << c.getRAM() << endl;
            archivo << c.getAlmacenamiento() << endl;
        }
    }
    archivo.close();
}

Laboratorio &operator<<(Laboratorio &l, const Computadora &c)
{
    l.agregarFinal(c);

    return l;
}
