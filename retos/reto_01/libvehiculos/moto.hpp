#ifndef MOTO_HPP
#define MOTO_HPP

#include <libvehiculos/vehiculo.hpp>

class Moto : public Vehiculo {
private:
    std::string tipo; // "deportiva", "custom", "todoterreno", etc.

public:
    Moto();
    Moto(std::string marca, std::string modelo, int anio, std::string placa, std::string tipo);

    void actualizarTipo(std::string nuevoTipo);
    void mostrarInformacion() override;
    std::string obtenerTipo();
};

#endif // MOTO_HPP
