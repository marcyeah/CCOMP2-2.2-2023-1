#include <iostream>
using namespace std;

int main(){
    float age, MHR1, MHR2, MHR3, MHR4;

    cout << "Ingrese su edad: ";
    cin >> age;

    MHR1 = 220 - age;
    MHR2 = 208 - 0.7 * age;
    MHR3 = 207 - 0.7 * age;
    MHR4 = 211 - 0.64 * age;

    float min, max;

    cout << MHR1 << endl;
    cout << MHR2 << endl;
    cout << MHR3 << endl;
    cout << MHR4 << endl;

    if(MHR1 < MHR2 && MHR1 < MHR3 && MHR1 < MHR4){
        min = MHR1;
    }
        else if(MHR2 < MHR1 && MHR2 < MHR3 && MHR2 < MHR4){
            min = MHR2;
        }
            else if(MHR3 < MHR1 && MHR3 < MHR2 && MHR3 < MHR4){
                min = MHR3;
            }
                else if(MHR4 < MHR1 && MHR4 < MHR2 && MHR4 < MHR3){
                    min = MHR4;
                }
    
    if(MHR1 > MHR2 && MHR1 > MHR3 && MHR1 > MHR4){
        max = MHR1;
    }
        else if(MHR2 > MHR1 && MHR2 > MHR3 && MHR2 > MHR4){
            max = MHR2;
        }
            else if(MHR3 > MHR1 && MHR3 > MHR2 && MHR3 > MHR4){
                max = MHR3;
            }
                else if(MHR4 > MHR1 && MHR4 > MHR2 && MHR4 > MHR3){
                    max = MHR4;
                }

    cout << "Tu rango maximo de pulsaciones por minuto oscila entre " << min << " y " << max << "(bpm)" << endl;

    return 0;
}