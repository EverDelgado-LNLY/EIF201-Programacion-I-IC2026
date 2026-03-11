#include <iostream>
#include "paquetes.h"

int main()
{
	double pesos = 0;
	int cantidad = 0;
	double limite = 0;
	double* registroTemp = crearRegistro(cantidad);

	ingresarPesos(registroTemp, cantidad);
	std::cout << "Peso total: " << calcularPesoTotal(&pesos, cantidad) << " Kg" << std::endl;
	std::cout << "Ingrese el limite de peso permitido: "; std::cin >> limite;
	std::cout << "Paquetes sobre el limite maximo: " << contarSobreLimite(&pesos, cantidad, limite) << std::endl;
	std::cout << "Mas pesados: " << *buscarMasPesado(&pesos, cantidad) << " Kg" << std::endl;

	delete[] registroTemp;
	registroTemp = nullptr;

	return 0;
}