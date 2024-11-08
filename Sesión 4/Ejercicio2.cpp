#include <iostream>
// Crea una clase Vector2D que represente un vector en 2D con componentes x y y. 
// Sobrecarga los operadores + y - para sumar y restar vectores.

int main() {
    Vector2D v1(2.0, 3.0);
    Vector2D v2(1.0, -1.0);

    Vector2D suma = v1 + v2;
    Vector2D resta = v1 - v2;

    // ...

    return 0;
}

