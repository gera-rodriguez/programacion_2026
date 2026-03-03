#ifndef COCHE_HPP
#define COCHE_HPP

#include <libvehiculos/vehiculo.hpp>

class Coche : public Vehiculo {
private:
    int numeroPuertas;

public:
    Coche();
    Coche(std::string marca, std::string modelo, int anio, std::string placa, int numeroPuertas);

    void actualizarNumeroPuertas(int nuevoNumero);
    void mostrarInformacion() override;
    int obtenerNumeroPuertas();
};

#endif // COCHE_HPP
