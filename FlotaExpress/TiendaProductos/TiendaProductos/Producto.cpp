#include "Producto.h"
#include <iomanip>

namespace EIF201 {
	//Constructor:
	Producto::Producto(std::string nombre, double precio, int stock, std::string codigo): nombre
	(nombre), precio(precio), stock(stock), codigo(codigo) {}

	//Getters
	std::string Producto::getNombre() const {
		return nombre;
	}
	double Producto::getPrecio() const {
		return precio;
	}
	int Producto::getStock() const {
		return stock;
	}
	std::string Producto::getCodigo() const {
		return codigo;
	}

	//Setters

	void Producto::setPrecio(double nuevoPrecio) {

		if (nuevoPrecio >= 0) {
			std::cout << "Error, Precio negativo";
		}
		precio = nuevoPrecio;
	}
	void Producto::setStock(int nuevaCantidad) {
		if (nuevaCantidad < 0) {
			std::cout << "Error, Cantidad Negativa" << std::endl;
		}
		stock = nuevaCantidad;
	}
	void Producto::mostrar() const {
		std::cout << " [ " << codigo << " ] " << nombre
			<< " | Precio:   " << std::fixed << std::setprecision(2) << precio
			<< " | Stock:    " << stock << " unidades " << std::endl;
	}

	// Vender ---
}