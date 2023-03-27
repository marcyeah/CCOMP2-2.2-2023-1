#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3;

    cout << "Ingrese tres numeros, para verificar si los dos primeros son factores del tercero: ";
    cin >> num1 >> num2 >> num3;

    if(num3 % num1 == 0 && num3 % num2 == 0)
        cout << "Los dos primeros numeros son factores del tercero" << endl;
    else
        cout << "Los dos primeros numeros no son factores del tercero" << endl;

    return 0;
}