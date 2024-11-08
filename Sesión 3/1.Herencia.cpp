#include <iostream>

// Clase base
class Vehiculo {
public:
	void encenderMotor() {
		std::cout << "Motor encendido." << std::endl;
	}
};

// Clase derivada
class Coche : public Vehiculo {
public:
	void tocarBocina() {
		std::cout << "Tocando bocina!" << std::endl;
	}
};

int main(){
	Coche miCoche;
	miCoche.encenderMotor(); // Método heredado de vehículo
	miCoche.tocarBocina(); // Método de coche	
		
	return 0;
}
