#include <iostream>
// Crea una clase Vector2D que represente un vector en 2D con componentes x y y. 
// Sobrecarga los operadores + y - para sumar y restar vectores.

class Vector2D {
private:
	double x, y;

public:
	// Constructor
	Vector2D(double _x = 0.0, double _y = 0.0) : x(_x), y(_y) {}
	
	// Sobrecarga del operador +
	Vector2D operator+(const Vector2D& v) const{
		return Vector2D(x + v.x, y + v.y);
	}
	
	// Sobrecarga del operador -
	Vector2D operator-(const Vector2D& v) const{
		return Vector2D(x - v.x, y - v.y);
	}
	
	void mostrar() const {
		std::cout << "(" << x << ", " << y << " )";
	}
};

int main() {
    Vector2D v1(2.0, 3.0);
    Vector2D v2(1.0, -1.0);

    Vector2D suma = v1 + v2;
    Vector2D resta = v1 - v2;

    std::cout << "v1 + v2 = ";
    suma.mostrar();
    std::cout << "\n";
    
    std::cout << "v1 - v2 = ";
    resta.mostrar();
    std::cout << "\n";

    return 0;
}

