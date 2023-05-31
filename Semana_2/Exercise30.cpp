#include <iostream>
using namespace std;

int main(){
    float peso, talla;

    cout << "Introduce tu peso(kg) y talla(mt): ";
    cin >> peso >> talla;
    cout << peso / (talla * talla) << endl;

    cout << "BMI VALUES\nUnderweight:\tless than 18.5\nNormal:\t\tbetween 18.5 and 24.9\nOverweight:\tbetween 25 and 29.9\nObese:\t\t30 or greater" << endl;

    return 0;
}