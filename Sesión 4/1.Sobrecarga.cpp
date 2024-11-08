#include <iostream>


int suma(int a, int b){
	return a + b;
}

double suma(double a, double b){
	return a + b;
}

int suma(int a, int b, int c) {
	return a + b + c; 
}

int main(){
	int a = 1;
	
	int resultado1 = suma(5, 9); // Llamar a suma(int, int)
	double resultado2 = suma(2.1, 4.4); // Llamar a suma(double, double)
	int resultado3 = suma(1, 2, 3); // Llamar a suma(int, int, int)
	
	std::cout << "Resultado 1: " << resultado1 << std::endl;
	std::cout << "Resultado 2: " << resultado2 << std::endl;
	std::cout << "Resultado 3: " << resultado3 << std::endl;

	
	return 0;
}
