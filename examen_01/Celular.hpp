#ifndef CELULAR_H
#define CELULAR_H

#include <string>

class Celular {
private:
    std::string nombre_modelo;
    std::string anio_lanzamiento;
    std::string color;
    float precio;
    int resenias;

public:
    // Constructor
    Celular();
    Celular(std::string nombre_modelo, std::string anio_lanzamiento, std::string color, float precio, int resenias);

    // Métodos para actualizar
    void actualizarNombreModelo(std::string nuevoNombreModelo);

    // Métodos para mostrar
    void mostrarCaracteristicasCelular();

    // Getters (opcionales, pero útiles)
    int obtenerPrecioCelular();
};

#endif // CELULAR_H