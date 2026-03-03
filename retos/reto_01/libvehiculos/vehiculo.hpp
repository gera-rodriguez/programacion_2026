#ifndef VEHICULO_HPP
#define VEHICULO_HPP

#include <string>

class Vehiculo {
protected:
    std::string marca;
    std::string modelo;
    int anio;
    std::string placa;

public:
    // Constructores
    Vehiculo();
    Vehiculo(std::string marca, std::string modelo, int anio, std::string placa);

    // Métodos para actualizar
    void actualizarMarca(std::string nuevaMarca);
    void actualizarModelo(std::string nuevoModelo);
    void actualizarAnio(int nuevoAnio);
    void cambiarPlaca(std::string nuevaPlaca);

    // Método para mostrar
    virtual void mostrarInformacion();

    // Getters
    std::string obtenerMarca();
    std::string obtenerModelo();
    int obtenerAnio();
    std::string obtenerPlaca();
};

#endif // VEHICULO_HPP
