#include <iostream> // 

// int cout = 65;
namespace MiEspacio{
	int cout = 65;
}

int main(){
	// std::cout << "El valor de cout es: " << MiEspacio::cout << std::endl;
	std::cout << "El valor de MiEspacio::cout es: " << MiEspacio::cout << std::endl;
	
	return 0;
}
