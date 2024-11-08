#include <iostream>

class Complejo {
private:
	double real;
	double imaginario;

public:
	Complejo(double r = 0.0, double i = 0.0) : real(r), imaginario(i) {}
	
	// Sobracarga del operador +
	Complejo operator+(const Complejo& otro) const {
		return Complejo(real + otro.real, imaginario + otro.imaginario);
	}
	
	friend std::ostream& operator<<(std::ostream& out, const Complejo& c) {
		out << "(" << c.real << " + " << c.imaginario << "i)";
		return out;
	}
	
	// Sobrecarga del operador ==
	bool operator==(const Complejo& otro) const {
		return (real == otro.real) && (imaginario == otro.imaginario);
	}
};

int main(){
	Complejo c1(3.0, 4.0);
	Complejo c2(1.0, 2.0);
	
	Complejo c3 = c1 + c2;
	
	std::cout << "c1: " << c1 << std::endl;
	std::cout << "c2: " << c2 << std::endl;
	std::cout << "c3 (c1 + c2): " << c3 << std::endl;
	
	if (c1 == c2) {
		std::cout << "Los números complejos son iguales" << std::endl;
	} else {
		std::cout << "Los números complejos son diferentes" << std::endl;
	}
	
	return 0;
}
