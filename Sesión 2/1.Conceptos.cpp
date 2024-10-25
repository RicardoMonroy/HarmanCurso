#include <iostream>

//class NombreDeLaClase {
	// Especificador de acceso
	//tipoDato miembroDato;
	//tipoDato funci�nMiembro;
//};

class Persona{
public: // <- modificador de acceso
	// Miembros de datos
	std::string nombre;
	int edad;
	
	// Funci�n miembro
	void mostrarInformacion() {
		std::cout << "Nombre: " << nombre << ", edad: " << edad << std::endl;
	}
};

int main(){
	Persona persona1;
	persona1.nombre = "Ricardo";
	persona1.edad = 45;
	
	persona1.mostrarInformacion();
	
	return 0;
}
