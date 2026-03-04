#include <iostream>
#include "ArrayInvert.h"

int main() {
	int array[MAX_SIZE] = {};
	int invert[MAX_SIZE] = {};

	for (int i = 0; i < MAX_SIZE; i++) {
		std::cout << "Ingrese numero " << i + 1 << " : ";
		std::cin >> array[i];
	}
	std::cout << "Arreglo Original: ";
	for (int i = 0; i < MAX_SIZE; i++) {
		std::cout << array[i] << " ";
	}
	std::cout << "Arreglo Invertido: ";
	for (int i = 0; i < MAX_SIZE; i++) {
		std::cout << invertArray(array, invert, MAX_SIZE) << " ";
	}
	return 0;
}