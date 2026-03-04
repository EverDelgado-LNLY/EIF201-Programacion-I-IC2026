#include "NUM1.h"

int mayor(int array[], int size) {
	int mayor = array[0];

	for (int i = 0; i < size; i++) {
		if (array[i] > mayor) {
			mayor = array[i];
		}
	}
	return mayor;
}

int menor(int array[], int size) {
	int menor = array[0];

	for (int i = 0; i < size; i++) {
		if (array[i] < menor) {
			menor = array[i];
		}
	}
	return menor;
}

int suma(int array[], int size) {
	int suma = array[0];

	for (int i = 0; i < size; i++) {
		suma += array[i];
	}
	return suma;
}

int promedio(int array[], int size) {
	double suma = 0;

	for (int i = 0; i < size; i++) {
		suma += array[i];
	}
	return (double)suma / size;
}