#include <iostream>
#include <vector>

class Animal {
public:
	virtual void hacerSonido() { // virtual: indica que una función miembro puede ser sobreescrita en una clase derivada
		std::cout << "El animal hace un sonido." << std::endl;
	}
};

class Perro : public Animal {
public:
	void hacerSonido() override { // override: indica que una función está sobreescribiendo a una función virtual de la clase base
		std::cout << "El perro ladra." << std::endl;
	}
};

class Gato : public Animal {
public:
	void hacerSonido() override { // override: indica que una función está sobreescribiendo a una función virtual de la clase base
		std::cout << "El gato maulla." << std::endl;
	}
};

int main(){
	std::vector<Animal*> animales;
	animales.push_back(new Perro());
	animales.push_back(new Gato());
	animales.push_back(new Animal());
	
	for(size_t i = 0; i < animales.size(); ++i){
		animales[i]->hacerSonido();
	}
	
	for(size_t i = 0; i < animales.size(); ++i){
		delete animales[i];
	}
		
	return 0;
}
