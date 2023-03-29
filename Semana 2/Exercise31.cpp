#include <iostream>
using namespace std;

int main(){
    float a, b, c, d, e;

    cout << "Ingrese los kilometros totales que ha recorrido en el día: ";
    cin >> a;
    cout << "Ingrese el precio del galon de gasolina: ";
    cin >> b;
    cout << "Ingrese el promedio de kilometros que se pueden recorrer por cada galon: ";
    cin >> c;
    cout << "Ingrese el costo del estacionamiento por dia: ";
    cin >> d;
    cout << "Ingrese el monto de peajes por día: ";
    cin >> e;

    cout << a / c * b + d + e << endl;

    return 0;
}