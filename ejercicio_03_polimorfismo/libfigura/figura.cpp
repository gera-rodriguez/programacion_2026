/**
 * @file figura.cpp
 * 
 * @brief Implementación de la clase base abstracta Figura. 
 */

#include <libfigura/figura.hpp>

Figura::Figura(std::string nombre) { this->nombre = nombre; }

Figura::~Figura() {}

std::string Figura::obtenerNombre() { return nombre; }
