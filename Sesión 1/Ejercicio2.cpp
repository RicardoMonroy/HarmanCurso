// Crea un programa que convierta una temperatura dada en grados Celsius a grados Fahrenheit.
# include <iostream>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	double celsius, fahrenheit;
	
	cout << "Ingresa la temperatura en Celsius: ";
	cin >> celsius;
	
	fahrenheit = ((9 * celsius) / 5) + 32;
	
	cout << "Ingresa en grados Fahrenheit es " << fahrenheit << "°F" << endl;;
	
	
	
	return 0;
}
