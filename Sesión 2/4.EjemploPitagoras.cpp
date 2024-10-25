#include <iostream>
#include <cmath>

class Punto {
private:
	double x;
	double y;

public:
	Punto(double x = 0, double y = 0) : x(x), y(y) {}
	
	double calcularDistancia(const Punto& otro) const {
		double dx = otro.x - x;
		double dy = otro.y - y;
		return std::sqrt(std::pow(dx, 2) + std::pow(dy, 2));
	}
};

int main(){
	double x1, y1, x2, y2;
	double distancia;
	
	std::cout << "Introduce las coordenadas del primer punto (x y)";
	std::cin >> x1 >> y1;
	
	std::cout << "Introduce las coordenadas del segundo punto (x y)";
	std::cin >> x2 >> y2;
	
	Punto punto1(x1, y1); 
	Punto punto2(x2, y2);
	distancia = punto1.calcularDistancia(punto2);
	std::cout << "La distancia es: " << distancia << std::endl;
	
	return 0;
}
