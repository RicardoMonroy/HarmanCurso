#include <iostream>
// Crea una funci�n llamada maximo que devuelva el mayor de dos valores. 
// Sobrecarga la funci�n para que funcione con int, double y char.

// Sobrecarga para int

// Sobrecarga para double

// Sobrecarga para char


int main() {
    std::cout << "M�ximo entre 3 y 7: " << maximo(3, 7) << std::endl;
    std::cout << "M�ximo entre 2.5 y 1.5: " << maximo(2.5, 1.5) << std::endl;
    std::cout << "M�ximo entre 'a' y 'z': " << maximo('a', 'z') << std::endl;
    return 0;
}

