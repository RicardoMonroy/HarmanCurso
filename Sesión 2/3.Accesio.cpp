#include <iostream>

class CuentaBancaria{
protected:
	double saldo;
	
public:
	void depositar(double cantidad) {
		saldo += cantidad;
	}
	
	void retirar(double cantidad) {
		if (cantidad <= saldo) {
			saldo -= cantidad;
		} else {
			std::cout << "Fondos insuficientes" << std::endl;
		}
	}
	
	double obtenerSaldo() {
		return saldo;
	}
};

class CuentaAhorros: public CuentaBancaria {
public:
	void agregarInteres(double tasa) {
		saldo += saldo * tasa;
	}
};

int main(){
	CuentaAhorros cuenta;
	cuenta.depositar(500);
	cuenta.retirar(150);
	std::cout << "Saldo actual: " << cuenta.obtenerSaldo() << std::endl;
	cuenta.agregarInteres(0.08);
	std::cout << "Saldo actual: " << cuenta.obtenerSaldo() << std::endl;
	
	//cuenta.saldo = 1000;
	//std::cout << "Saldo actual: " << cuenta.obtenerSaldo() << std::endl;
	
	return 0;
}
