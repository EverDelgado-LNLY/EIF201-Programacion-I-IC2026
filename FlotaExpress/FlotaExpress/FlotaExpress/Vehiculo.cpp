#include "Vehiculo.h"
#include <iomanip>

namespace LAB03 {
	Vehiculo::Vehiculo(std::string placa, std::string marca, int anio, double kilometraje,
		bool activo) : placa(placa), marca(marca), anio(anio), kilometraje(kilometraje), activo(activo) {}

	std::string Vehiculo::getPlaca() const {
		return placa;
	}
	std::string Vehiculo::getMarca() const {
		return marca;
	}
	int Vehiculo::getAnio() const {
		return anio;
	}
	double Vehiculo::getKilometraje() const {
		return kilometraje;
	}
	bool Vehiculo::getActivo() const {
		return (activo == true);
	}
	double registrarKilometros(double km) {

	}
	bool desactivar() {

	}
	bool reactivar() {

	}
	void Vehiculo::mostrar() const{
		std::cout << " [ Vehiculo ] " << std::endl;
		std::cout << " | Marca:   " << marca << std::endl;
		std::cout << " | Placa:   " << placa << std::endl;
		std::cout << " | Marca:   " << marca << std::endl;
		std::cout << " | Anio:   " << anio << std::endl;
		std::cout << " | Kilometraje:    " << std::fixed << std::setprecision(2) << kilometraje << std::endl;
		std::cout << " | Activo:    " << activo << std::endl;
	}
}
