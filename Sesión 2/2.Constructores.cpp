#include <iostream>

class Persona{
public: // <- modificador de acceso
	// Miembros de datos
	std::string nombre;
	int edad;
	
	Persona(std::string n, int e) : nombre(n), edad(e){
		//nombre = n;
		//edad = e;
		std::cout << "Constructor llamado para " << nombre << " con edad " << edad << std::endl;
	}
	
	~Persona() {
		std::cout << "Deconstructor llamado para " << nombre << std::endl;
	}
	
	// Función miembro
	void mostrarInformacion() {
		std::cout << "Nombre: " << nombre << ", edad: " << edad << std::endl;
	}
};

int main(){
	Persona persona1("Ricardo", 45);
	persona1.mostrarInformacion();
	{
		Persona persona2("Pedro", 35);
	}
	return 0;
}
