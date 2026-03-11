#ifndef PAQUETES_H
#define PAQUETES_H

// Solicita la cantidad de paquetes (debe ser > 0), reserva el arreglo
// con new y retorna el puntero.
double* crearRegistro(int& cantidad);

// Lee el peso en kg de cada paquete (debe ser > 0).
void ingresarPesos(double* pesos, int cantidad);

// Calcula y retorna la suma de todos los pesos del arreglo.
double calcularPesoTotal(const double* pesos, int cantidad);

// Cuenta y retorna cuantos paquetes tienen un peso mayor al limite dado.
int contarSobreLimite(const double* pesos, int cantidad, double limite);

// Retorna un puntero al elemento con el mayor peso del arreglo.
// En caso de empate, retorna el primero encontrado.
const double* buscarMasPesado(const double* pesos, int cantidad);

#endif

