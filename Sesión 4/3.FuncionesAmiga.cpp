#include <iostream>

class Complejo {
private:
	double real;
	double imaginario;

public:
	Complejo(double r = 0.0, double i = 0.0) : real(r), imaginario(i) {}
	
	friend bool sonIguales(const Complejo& c1, const Complejo& c2) {
		return (c1.real == c2.real) && (c1.imaginario == c2.imaginario);
	}	
};

int main(){
	Complejo c1(3.0, 4.0);
	Complejo c2(1.0, 2.0);
		
	if (sonIguales(c1, c2)) {
		std::cout << "Los números complejos son iguales" << std::endl;
	} else {
		std::cout << "Los números complejos son diferentes" << std::endl;
	}
	
	return 0;
}
