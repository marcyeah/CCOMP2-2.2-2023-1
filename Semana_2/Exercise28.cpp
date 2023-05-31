#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Ingrese un numero de 4 digitos: ";
    cin >> num;

    int mil, cen, deci;
    mil = (num/1000) * 1000;
    cen = (num/100) * 100;
    deci = (num/10) * 10;

    cout << num - deci << "  " << (deci - cen) / 10 << "  " << (cen - mil) / 100 << "  " << mil/1000 << endl;

    return 0;
}