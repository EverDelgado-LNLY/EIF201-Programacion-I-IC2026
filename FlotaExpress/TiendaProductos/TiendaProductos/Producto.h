#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <iostream>

namespace EIF201 {

	class Producto
	{
	private:
		std::string nombre;
		double precio;
		int stock;
		std::string codigo;
	public:
		Producto(std::string nombre, double precio, int stock, std::string codigo);

			//Getters

		std::string getNombre() const;
		double getPrecio() const;
		int getStock() const;
		std::string getCodigo() const;

		//Setters
		void setPrecio(double nuevoPrecio);
		void setStock(int nuevaCantidad);

		//Mostrar info
		void mostrar() const;

		bool vender(int cantidad);
	};
}

#endif