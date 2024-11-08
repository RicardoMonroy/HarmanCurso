#include <iostream>

int x = 10;

void funcion() {
	int x = 5;
	std::cout << "x local: " << x << std::endl;
	std::cout << "x global: " << ::x << std::endl;
}

int main(){
	funcion();
	
	
	return 0;
}

