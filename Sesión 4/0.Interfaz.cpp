#include <iostream>

// Definición de la interfaz
class IFigura {
public:
	virtual void dibujar() const= 0;
	virtual ~IFigura() {}
};

// Implementaciones de la interfaz en clases concretas
class Circulo : public IFigura {
public:
	void dibujar() const override {
		std::cout << "Dibujo de un círculo..." << std::endl;
	}
};

class Cuadrado : public IFigura {
public:
	void dibujar() const override {
		std::cout << "Dibujo de un cuadrádo..." << std::endl;
	}
};

int main(){
	setlocale(LC_CTYPE, "Spanish");
	IFigura* figura1 = new Circulo();
	IFigura* figura2 = new Cuadrado();
	
	figura1->dibujar();
	figura2->dibujar();
	
	delete figura1;
	delete figura2;
	
	return 0;
}
