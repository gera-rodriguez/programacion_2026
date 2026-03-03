#include <iostream>

#include <libvehiculos/autobus.hpp>

Autobus::Autobus() : Vehiculo() {
    capacidadPasajeros = 0;
    ruta = "";
}

Autobus::Autobus(std::string marca, std::string modelo, int anio, std::string placa, int capacidadPasajeros, std::string ruta)
    : Vehiculo(marca, modelo, anio, placa) {
    this->capacidadPasajeros = capacidadPasajeros;
    this->ruta = ruta;
}

void Autobus::actualizarCapacidadPasajeros(int nuevaCapacidad) {
    capacidadPasajeros = nuevaCapacidad;
}

void Autobus::actualizarRuta(std::string nuevaRuta) {
    ruta = nuevaRuta;
}

void Autobus::mostrarInformacion() {
    std::cout << "--- Autobús ---" << std::endl;
    Vehiculo::mostrarInformacion();
    std::cout << "Capacidad de pasajeros: " << capacidadPasajeros << std::endl;
    std::cout << "Ruta: " << ruta << std::endl;
}

int Autobus::obtenerCapacidadPasajeros() {
    return capacidadPasajeros;
}

std::string Autobus::obtenerRuta() {
    return ruta;
}
