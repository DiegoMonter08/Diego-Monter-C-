#include <iostream>

using namespace std;

int main() {
    float altura, base, area;
    cout << "Introduce la altura del triangulo rectangulo: ";
    cin >> altura;
    cout << "Introduce la base del triangulo rectangulo: ";
    cin >> base;
    area = (altura * base) / 2;
    cout << "Un triangulo rectangulo de altura " << altura << " y base " << base << " tiene un area de " << area << endl;
return 0;
}
