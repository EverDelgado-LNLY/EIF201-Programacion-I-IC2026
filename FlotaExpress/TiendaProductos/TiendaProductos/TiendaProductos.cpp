#include "Inventario.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

int mostrarMenu() {
    std::cout << "---- Menu ----" << std::endl;
    std::cout << " 1. Agregar Producto" << std::endl;
    std::cout << " 2. Buscar producto por codigo" << std::endl;
    std::cout << " 3. Vender unidades de un producto" << std::endl;
    std::cout << " 4. Eliminar producto" << std::endl;
    std::cout << " 5. Mostrar inventario completo" << std::endl;
    std::cout << " 6. Mostrar valor total del inventario" << std::endl;
    std::cout << " 7. Salir" << std::endl;
    std::cout << "--------------" << std::endl;
    std::cout << " Opción. " << std::endl;
    int opcion;
    std::cin >> opcion;

    
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return -1;
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return opcion;

}

int main() {

    EIF201::Inventario tienda(3);

    bool ejecutando = true;

    while (ejecutando) {
        int opcion = mostrarMenu();

        switch (opcion)
        {
        case 1: {
            std::string nombre, codigo;
            double precio;
            int stock;

            std::cout << "Nombre del producto: ";
            std::getline(std::cin, nombre);

            std::cout << "Codigo del producto: ";
            std::getline(std::cin, codigo);

            std::cout << "Stock del producto: ";
            std::cin >> stock;

            std::cout << "Precio del producto: ";
            std::cin >> precio;

            EIF201::Producto* nuevo = new EIF201::Producto(nombre, precio,
                stock, codigo);
            tienda.agregar(nuevo);
            break;
        }
        case 2: {
            std::string codigoBuscar;
            std::cout << "Ingrese el codigo que desea buscar";
            std::getline(std::cin, codigoBuscar);

            EIF201::Producto* encontrado = tienda.buscarPorCodigo(codigoBuscar);

            if (encontrado != nullptr) {
                std::cout << "Producto encontrado " << std::endl;
                encontrado->mostrar();
            }
            else {
                std::cout << "Producto no encontrado " << std::endl;
            }
        }
        case 3: {
            std::string codigoBuscar;
            int cantidad;

            std::cout << "Ingrese el codigo: ";
            std::getline(std::cin, codigoBuscar);

            EIF201::Producto* encontrado = tienda.buscarPorCodigo(codigoBuscar);

            if (encontrado != nullptr) {
                std::cout << "Cantidad a vender: ";
                std::cin >> cantidad;

                if (encontrado->vender(cantidad)) {
                    std::cout << "Venta realizada\n";
                }
                else {
                    std::cout << "Stock insuficiente\n";
                }
            }
            else {
                std::cout << "Producto no encontrado\n";
            }

            break;
        }
        default: {
            break;
        }
        }
    }
}
