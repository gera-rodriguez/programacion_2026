#ifndef CAMION_HPP
#define CAMION_HPP

#include <libvehiculos/vehiculo.hpp>

class Camion : public Vehiculo {
private:
    double capacidadToneladas;

public:
    Camion();
    Camion(std::string marca, std::string modelo, int anio, std::string placa, double capacidadToneladas);

    void actualizarCapacidad(double nuevaCapacidad);
    void mostrarInformacion() override;
    double obtenerCapacidadToneladas();
};

#endif // CAMION_HPP
