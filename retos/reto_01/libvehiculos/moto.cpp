#include <iostream>
#include <libvehiculos/moto.hpp>

Moto::Moto() : Vehiculo() {
    tipo = "";
}

Moto::Moto(std::string marca, std::string modelo, int anio, std::string placa, std::string tipo)
    : Vehiculo(marca, modelo, anio, placa) {
    this->tipo = tipo;
}

void Moto::actualizarTipo(std::string nuevoTipo) {
    tipo = nuevoTipo;
}

void Moto::mostrarInformacion() {
    std::cout << "--- Moto ---" << std::endl;
    Vehiculo::mostrarInformacion();
    std::cout << "Tipo: " << tipo << std::endl;
}

std::string Moto::obtenerTipo() {
    return tipo;
}
