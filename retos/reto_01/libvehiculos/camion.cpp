#include <iostream>
#include <libvehiculos/camion.hpp>

Camion::Camion() : Vehiculo() {
    capacidadToneladas = 0.0;
}

Camion::Camion(std::string marca, std::string modelo, int anio, std::string placa, double capacidadToneladas)
    : Vehiculo(marca, modelo, anio, placa) {
    this->capacidadToneladas = capacidadToneladas;
}

void Camion::actualizarCapacidad(double nuevaCapacidad) {
    capacidadToneladas = nuevaCapacidad;
}

void Camion::mostrarInformacion() {
    std::cout << "--- Camión ---" << std::endl;
    Vehiculo::mostrarInformacion();
    std::cout << "Capacidad de carga: " << capacidadToneladas << " toneladas" << std::endl;
}

double Camion::obtenerCapacidadToneladas() {
    return capacidadToneladas;
}
