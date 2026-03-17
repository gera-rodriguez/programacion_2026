#ifndef RECTANGULO_HPP
#define RECTANGULO_HPP

#include <libfigura/figura.hpp>

class Rectangulo : public Figura {
private:
    double base;
    double altura;

public:
    Rectangulo(std::string nombre, double base, double altura);

    double calcularArea() override;
    void describir() override;

    double obtenerBase();
    double obtenerAltura();
};

#endif  // RECTANGULO_HPP
