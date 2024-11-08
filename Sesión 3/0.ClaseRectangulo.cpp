#include <iostream>

class Rectangulo {
private:
	double ancho;
	double alto;
	
public:
	Rectangulo() : ancho(0), alto(0) {}	
	Rectangulo(double a, double h) : ancho(a), alto(h) {}
	
	double calcularArea() {
		return ancho * alto;
	}	
	double calcularPerimetro() {
		return (ancho + alto) * 2;
	}	
	// Métodos para establecer y obtener los valores con validación
	void setAncho(double a) {
		if (a > 0) {
			ancho = a;
		} else {
			std::cout << "El ancho debe ser positivo." << std::endl;
		}
	}
	void setAlto(double h) {
		if (h > 0) {
			alto = h;
		} else {
			std::cout << "El alto debe ser positivo." << std::endl;
		}
	}
	
	double getAncho() { return ancho; }
	double getAlto() { return alto; }
};

int main(){
	setlocale(LC_CTYPE, "Spanish");
    double ancho, alto;

    // Solicitar al usuario el ancho y el alto del rectángulo
    std::cout << "Introduce el ancho del rectángulo: ";
    std::cin >> ancho;
    std::cout << "Introduce el alto del rectángulo: ";
    std::cin >> alto;

    // Crear objeto Rectangulo con los valores introducidos
    Rectangulo rect1;
    rect1.setAncho(ancho);
    rect1.setAlto(alto);

    // Calcular y mostrar el área y el perímetro
    std::cout << "Área de un rectángulo de " << rect1.getAncho() << "x" << rect1.getAlto() << " es: " << rect1.calcularArea() << std::endl;
    std::cout << "Perímetro de un rectángulo de " << rect1.getAncho() << "x" << rect1.getAlto() << " es: "  << rect1.calcularPerimetro() << std::endl;
	
	return 0;
}
