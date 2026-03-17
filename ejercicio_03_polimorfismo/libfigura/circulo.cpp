/**
 * @file circulo.cpp
 * @brief Implementación de la clase Circulo.
 */

#include <iostream>
#include <libfigura/circulo.hpp>

Circulo::Circulo(std::string nombre, double radio) : Figura(nombre) {
  this->radio = radio;
}

double Circulo::calcularArea() { return 3.14159 * radio * radio; }

void Circulo::describir() {
  std::cout << "Figura: " << nombre << ", radio: " << radio << std::endl;
}

double Circulo::obtenerRadio() { return radio; }
