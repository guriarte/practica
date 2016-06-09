#include "funciones.h"

using namespace std;

void ejercicio3()
{
    int fecha,
     anio;

    cout << "Ingrese la fecha en formato AAAAMMDD: " << endl;
    cin >> fecha;

    anio = fecha/10000;

    cout << anio << endl;
}
