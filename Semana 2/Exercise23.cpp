#include <iostream>
using namespace std;

int main(){
    int a, b, c, d, e;

    cout << "Ingrese 5 valores numericos: ";
    cin >> a >> b >> c >> d >> e;

    int min, max;

    if(a < b && a < c && a < d && a < e)
        min = a;
    else if(a > b && a > c && a > d && a > e)
        max = a;
    
    if(b < a && b < c && b < d && b < e)
        min = b;
    else if(b > a && b > c && b > d && b > e)
        max = b;

    if(c < a && c < b && c < d && c < e)
        min = c;
    else if(c > a && c > b && c > d && c > e)
        max = c;

    if(d < a && d < b && d < c && d < e)
        min = d;
    else if(b > a && b > c && b > d && b > e)
        max = d;

    if(e < a && e < b && e < c && e < d)
        min = e;
    else if(e > a && e > b && e > c && e > d)
        max = e;

    cout << "El mayor numero es: " << max << endl;
    cout << "El menor numero es: " << min << endl;

    return 0;
}