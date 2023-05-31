#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    int c;

    cout << "Input three different integers: ";
    cin >> a >> b >> c;

    cout << "Sum is " << (a + b + c) << endl;
    cout << "Average is " << (a + b + c) / 3 << endl;
    cout << "Product is " << (a * b * c) << endl;

    int min, max;

    if(a < b && a < c)
        min = a;
    if(b < a && b < c)
        min = b;
    if(c < a && c < b)
        min = b;
    cout << "Smallest is " << min << endl;

    if(a > b && a > c)
        max = a;
    if(b > a && b > c)
        max = b;
    if(c > a && c > b)
        max = b;
    cout << "Largest is " << max << endl;

    return 0; 
}