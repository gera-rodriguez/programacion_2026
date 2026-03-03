#include <iostream>
#include "Celular.hpp"

using std::cout;
using std::cerr;
using std::endl;
using std::string;

Celular::Celular() {
    nombre_modelo = "???";
    anio_lanzamiento = "dd/mm/aaaa";
    color = "???";
    precio = -1.0;
    resenias = -1;
}

Celular::Celular(string nombre_modelo, string anio_lanzamiento, string color, float precio, int resenias)  {
    this->nombre_modelo = nombre_modelo;
    this->anio_lanzamiento = anio_lanzamiento;
    this->color = color;
    this->precio = precio;
    this->resenias = resenias;   
}

// Métodos para actualizar
void Celular::actualizarNombreModelo(std::string nuevoNombreModelo) {
    nombre_modelo = nuevoNombreModelo;
}

// Métodos para mostrar
void Celular::mostrarCaracteristicasCelular() {
    cout << "Modelo: " << nombre_modelo << endl;
    cout << "Fecha de lanzamiento: " << anio_lanzamiento << endl;
    cout << "Color: " << color << endl;
    cout << "Precio: " << precio << endl;
    cout << "Reseñas: " << resenias << endl;
}

// Getters
int Celular::obtenerPrecioCelular() {
    return precio;
}