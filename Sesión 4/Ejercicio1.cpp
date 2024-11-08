#include <iostream>
// Crea una función llamada maximo que devuelva el mayor de dos valores. 
// Sobrecarga la función para que funcione con int, double y char.

// Sobrecarga para int
int maximo(int a, int b){
	return (a > b) ? a : b;
}

// Sobrecarga para double
double maximo(double a, double b){
	return (a > b) ? a : b;
}

// Sobrecarga para char
char maximo(char a, char b){
	return (a > b) ? a : b;
}


int main() {
	setlocale(LC_CTYPE, "Spanish");
    std::cout << "Máximo entre 3 y 7: " << maximo(3, 7) << std::endl;
    std::cout << "Máximo entre 2.5 y 1.5: " << maximo(2.5, 1.5) << std::endl;
    std::cout << "Máximo entre 'a' y 'z': " << maximo('r', 'b') << std::endl;
    
    return 0;
}
