#ifndef AUTOBUS_HPP
#define AUTOBUS_HPP

#include <libvehiculos/vehiculo.hpp>

class Autobus : public Vehiculo {
private:
    int capacidadPasajeros;
    std::string ruta;

public:
    Autobus();
    Autobus(std::string marca, std::string modelo, int anio, std::string placa, int capacidadPasajeros, std::string ruta);

    void actualizarCapacidadPasajeros(int nuevaCapacidad);
    void actualizarRuta(std::string nuevaRuta);
    void mostrarInformacion() override;
    int obtenerCapacidadPasajeros();
    std::string obtenerRuta();
};

#endif // AUTOBUS_HPP
