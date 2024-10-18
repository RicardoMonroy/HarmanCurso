// Escribe un programa en C++ que solicite al usuario dos n�meros enteros y 
// muestre la suma, resta, multiplicaci�n y divisi�n de esos n�meros.

// Dame el primer n�mero: 5
// Dame el segundo n�mero: 2
// La suma es: 7
// La resta es: 3
// ...
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	int num1, num2;
	
	cout << "Ingresa el primer n�mero: ";
	cin >> num1;
	cout << "Ingresa el segnundo n�mero: ";
	cin >> num2;
	
	cout << "Suma: " << num1 + num2 << endl;
	cout << "Resta: " << num1 - num2 << endl;
	cout << "Multiplicaci�n: " << num1 * num2 << endl;
	
	if (num2 != 0){
		cout << "Divisi�n: " << num1 / num2 << endl;
	} else {
		cout << "Error de divisi�n; no se puede dividir entre cero " << endl;
	}
	
	return 0;
}
