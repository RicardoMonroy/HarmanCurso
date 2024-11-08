#include <iostream>
#include <cmath>

class Figura {
public:
	virtual double calcularArea() = 0; // Funcip�n virtual pura
};

class Circulo : public Figura {
private:
	double radio;

public:
	Circulo(double r) : radio(r) {}
	
	double calcularArea() override {		
		return M_PI * radio * radio;
	}
};

class Rectangulo : public Figura {
private:
	double ancho, alto;

public:
	Rectangulo(double a, double h) : ancho(a), alto(h) {}
	
	double calcularArea() override {		
		return ancho * alto;
	}
};

int main() {
	setlocale(LC_CTYPE, "Spanish");
	Figura* f1 = new Circulo(5);
	Figura* f2 = new Rectangulo(4, 6);
	
	std::cout << "�rea del c�rculo es: " << f1->calcularArea() << std::endl;
	std::cout << "�rea del rect�ngulo es: " << f2->calcularArea() << std::endl;
	
	return 0;
}
