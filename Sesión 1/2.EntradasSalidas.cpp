#include <iostream>
#include <iomanip>
// using namespace std;
// std::cout y std::cin equivalentes a printf y scanf

int main()
{
	// cout -> ConsoleOUTput
	// cin -> ConsoleINput
	std::string nombre;
	double pi = 3.14159265359;
	// std::cout << "Escribe tu " << "nombre: ";
	// std::cin >> nombre;

	// std::cout << "Hola " << nombre << std::endl;
	std::cout << "El valor de pi es " << std::fixed << std::setprecision(2) << pi << std::endl;

	std::cerr << "Este es un mensaje de error.\n";
	std::clog << "Este es registro.\n";

	std::cin >> nombre;

	return 0;
}
