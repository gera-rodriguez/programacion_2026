/*
 * Reto 01 – Gestión de vehículos con herencia
 *
 * Instrucciones de compilación:
 *
 *   g++ vehiculo.cpp coche.cpp moto.cpp camion.cpp autobus.cpp main.cpp -o reto01
 *
 * Para ejecutar:
 *
 *   ./reto01
 */

#include <iostream>
#include <string>
#include <libvehiculos/vehiculo.hpp>
#include <libvehiculos/coche.hpp>
#include <libvehiculos/moto.hpp>
#include <libvehiculos/camion.hpp>
#include <libvehiculos/autobus.hpp>

// Muestra el menú de opciones
void mostrarMenu() {
    std::cout << "\n========================================" << std::endl;
    std::cout << "   GESTIÓN DE VEHÍCULOS - MENÚ PRINCIPAL" << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "1. Mostrar información de todos los vehículos" << std::endl;
    std::cout << "2. Cambiar placa de un vehículo" << std::endl;
    std::cout << "3. Salir" << std::endl;
    std::cout << "Elige una opción: ";
}

// Muestra el submenú para elegir vehículo
void mostrarSubmenuVehiculos() {
    std::cout << "\nElige el vehículo:" << std::endl;
    std::cout << "1. Coche   (Toyota Corolla)" << std::endl;
    std::cout << "2. Moto    (Honda CBR)" << std::endl;
    std::cout << "3. Camión  (Volvo FH16)" << std::endl;
    std::cout << "4. Autobús (Mercedes Citaro)" << std::endl;
    std::cout << "Opción: ";
}

int main() {
    // Crear vehículos de cada tipo
    Coche    coche("Toyota", "Corolla",   2022, "ABC-1234", 4);
    Moto     moto("Honda",  "CBR 600RR", 2021, "MTO-5678", "Deportiva");
    Camion   camion("Volvo", "FH16",     2020, "CAM-9012", 25.0);
    Autobus  autobus("Mercedes", "Citaro", 2019, "BUS-3456", 50, "Ruta 12 - Centro/Norte");

    std::cout << "\n=== Reto 01: Gestión de Vehículos con Herencia ===" << std::endl;
    std::cout << "Vehículos creados correctamente." << std::endl;

    int opcion = 0;

    do {
        mostrarMenu();
        std::cin >> opcion;

        if (opcion == 1) {
            // Mostrar todos los vehículos
            std::cout << "\n--- INFORMACIÓN DE TODOS LOS VEHÍCULOS ---" << std::endl;
            coche.mostrarInformacion();
            std::cout << std::endl;
            moto.mostrarInformacion();
            std::cout << std::endl;
            camion.mostrarInformacion();
            std::cout << std::endl;
            autobus.mostrarInformacion();

        } else if (opcion == 2) {
            // Cambiar placa
            mostrarSubmenuVehiculos();
            int subOpcion;
            std::cin >> subOpcion;

            std::string nuevaPlaca;
            std::cout << "Ingresa la nueva placa: ";
            std::cin >> nuevaPlaca;

            switch (subOpcion) {
                case 1:
                    std::cout << "Placa anterior: " << coche.obtenerPlaca() << std::endl;
                    coche.cambiarPlaca(nuevaPlaca);
                    std::cout << "Placa actualizada: " << coche.obtenerPlaca() << std::endl;
                    break;
                case 2:
                    std::cout << "Placa anterior: " << moto.obtenerPlaca() << std::endl;
                    moto.cambiarPlaca(nuevaPlaca);
                    std::cout << "Placa actualizada: " << moto.obtenerPlaca() << std::endl;
                    break;
                case 3:
                    std::cout << "Placa anterior: " << camion.obtenerPlaca() << std::endl;
                    camion.cambiarPlaca(nuevaPlaca);
                    std::cout << "Placa actualizada: " << camion.obtenerPlaca() << std::endl;
                    break;
                case 4:
                    std::cout << "Placa anterior: " << autobus.obtenerPlaca() << std::endl;
                    autobus.cambiarPlaca(nuevaPlaca);
                    std::cout << "Placa actualizada: " << autobus.obtenerPlaca() << std::endl;
                    break;
                default:
                    std::cout << "Opción no válida." << std::endl;
            }

        } else if (opcion != 3) {
            std::cout << "Opción no válida. Inténtalo de nuevo." << std::endl;
        }

    } while (opcion != 3);

    std::cout << "\n¡Hasta pronto!" << std::endl;

    return 0;
}
