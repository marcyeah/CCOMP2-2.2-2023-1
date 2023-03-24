#include <iostream>

using namespace std;

int main(){

    int num1, num2;

    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << "Ingrese otro numero: ";
    cin >> num2;

    if(num1 % 2 == 0)
        cout << "El primer numero es par" << endl;
    else
        cout << "El primer numero es impar" << endl;

    if(num2 % 2 == 0)
        cout << "El segundo numero es par" << endl;
    else
        cout << "El segundo numero es impar" << endl;

    if((num1 + num2) % 2 == 0)
        cout << "La suma de los numeros es par" << endl;
    else
        cout << "La suma de los numeros es impar" << endl;

    return 0;
}