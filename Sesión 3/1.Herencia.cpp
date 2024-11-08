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
	miCoche.encenderMotor(); // M�todo heredado de veh�culo
	miCoche.tocarBocina(); // M�todo de coche	
		
	return 0;
}
