#include "funciones.h"

using namespace std;

void ejercicio4()
{
    float valor;

    cout << "Ingresar un valor: " << endl;
    cin >> valor;

    cout << "La quinta parte de " << valor << " es " << valor/5 << endl;
    cout << "El resto de la division de " << valor << " por 5 es " << fmod(valor, 5) << endl;
    cout << "La septima parte de la quinta parte de " << valor << " es " << (valor/5)/7 << endl;
}
