#include "paquetes.h"
#include <iostream>
#include <iomanip>

double* crearRegistro(int& cantidad) {
	double* pesos = new double[cantidad];

	std::cout << "_--------------------------_" << std::endl;
	std::cout << "| Registro de Paquetes S.A |" << std::endl;
	std::cout << "*--------------------------*" << std::endl;
	std::cout << "Ingrese la cantidad de paquetes: ";
	std::cin >> cantidad;
	while (cantidad <= 0) {
		std::cout << "Error: menor a cero. Nuevo intento: ";
		std::cin >> cantidad;
	}
	return pesos;
}

void ingresarPesos(double* pesos, int cantidad) {
	std::cout << std::endl << "Ingrese pesos en kg de cada paquete: " << std::endl;
	for (int i = 0; i < cantidad; i++) {
		std::cout << " Paquete " << (i + 1) << ": ";
		std::cin >> pesos[i];
	}
}
double calcularPesoTotal(const double* pesos, int cantidad) {
	double suma = 0;
	for (int i = 0; i < cantidad; i++) {
		suma += pesos[i];
	}
	return suma;
}

int contarSobreLimite(const double* pesos, int cantidad, double limite) {
	for (int i = 0; i < cantidad; i++) {
		if (pesos[i] > limite) {
			return pesos[i];
		}
	}
}
const double* buscarMasPesado(const double* pesos, int cantidad) {
	double pesado = 0;
	for (int pos = 0; pos < cantidad; pos++) {
		while (pesos[pos] > pesado);

		return pesos;
	}
}