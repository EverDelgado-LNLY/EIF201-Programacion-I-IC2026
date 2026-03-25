#ifndef VEHICULO_H
#define VEHICULO_H

#include <iostream>
#include <string>

namespace LAB03 {

	class Vehiculo {
	private:
		std::string placa;
		std::string marca;
		int anio;
		double kilometraje;
		bool activo;
	public:
		Vehiculo(std::string placa, std::string marca, int anio, double kilometraje,
		bool activo);

		std::string getPlaca() const;
		std::string getMarca() const;
		int getAnio() const;
		double getKilometraje() const;
		bool getActivo() const;
		void mostrar() const;
	};
}


#endif