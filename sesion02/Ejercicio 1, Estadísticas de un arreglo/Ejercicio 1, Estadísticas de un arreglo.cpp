#include <iostream>
#include "NUM1.h"
int main() {
	int array[MAX_SIZE];

	for (int i = 0; i < MAX_SIZE; i++) {
		std::cout << "Ingrese numero: ";
		std::cin >> array[i];
	}

	std::cout << "Mayor: " << mayor(array, MAX_SIZE) << std::endl;
	std::cout << "Menor " << menor(array, MAX_SIZE) << std::endl;
	std::cout << "Suma: " << suma(array, MAX_SIZE) << std::endl;
	std::cout << "Promedio: " << promedio(array, MAX_SIZE) << std::endl;
}