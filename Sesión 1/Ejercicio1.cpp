// Escribe un programa en C++ que solicite al usuario dos números enteros y 
// muestre la suma, resta, multiplicación y división de esos números.

// Dame el primer número: 5
// Dame el segundo número: 2
// La suma es: 7
// La resta es: 3
// ...
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	int num1, num2;
	
	cout << "Ingresa el primer número: ";
	cin >> num1;
	cout << "Ingresa el segnundo número: ";
	cin >> num2;
	
	cout << "Suma: " << num1 + num2 << endl;
	cout << "Resta: " << num1 - num2 << endl;
	cout << "Multiplicación: " << num1 * num2 << endl;
	
	if (num2 != 0){
		cout << "División: " << num1 / num2 << endl;
	} else {
		cout << "Error de división; no se puede dividir entre cero " << endl;
	}
	
	return 0;
}
