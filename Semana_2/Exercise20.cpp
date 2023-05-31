#include <iostream>

using namespace std;

int main() {
    int radio;

    cout << "Input the radio: ";
    cin >> radio;

    cout << "The diameter is: " << (2 * radio) << endl;
    cout << "The circle is: " << (2 * 3.14159 * radio) << endl;
    cout << "The area is: " << (2 * radio * radio) << endl;

    return 0; 
}