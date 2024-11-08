#include <iostream>

// Clase base
class VehiculoTerrestre {
public:
	void conducir() {
		std::cout << "Conduciendo en tierra." << std::endl;
	}	
};

class VehiculoMaritimo {
public:
	void navegar() {
		std::cout << "Navegando en agua" << std::endl;
	}
};

class Anfibio : public VehiculoTerrestre, public VehiculoMaritimo {
public:
	void transformarse() {
		std::cout << "Transformación para cambiar de modo" << std::endl;
	}
};

int main(){
	Anfibio miAnfibio;
	miAnfibio.conducir();
	miAnfibio.navegar();
	miAnfibio.transformarse();
		
	return 0;
}
