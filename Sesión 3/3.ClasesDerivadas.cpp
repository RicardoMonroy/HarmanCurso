#include <iostream>

class Persona {
protected:
	std::string nombre;
	int edad;
			
public:
	Persona(std::string n, int e) : nombre(n), edad(e) {}
	
	void mostrarInformacion() {
		std::cout << "Nombre:" << nombre << ", Edad: " << edad << std::endl;
	}
};

class Estudiante : public Persona {
protected:
	std::string carrera;
	
public:
	Estudiante(std::string n, int e, std::string c) : Persona(n, e), carrera(c) {}
	
	void mostrarInformacion() {
		Persona::mostrarInformacion();
		std::cout << "Carrera:" << carrera << std::endl;
	}
};

int main(){
	setlocale(LC_CTYPE, "Spanish");
	Estudiante estudiante("Laura", 22, "Ingeniería");
	estudiante.mostrarInformacion();
		
	return 0;
}
