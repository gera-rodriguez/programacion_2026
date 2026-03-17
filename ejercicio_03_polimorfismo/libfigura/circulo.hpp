#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include <libfigura/figura.hpp>

/**
 * @file circulo.hpp
 * 
 * @brief Declaración de la clase derivada Circulo. 
*/

/**
 * @class Circulo
 * 
 * @brief Representa un círculo. Hereda de Figura e implementa el cálculo 
 * de área y la descripción propias de esta figura.
 */
class Circulo : public Figura {
private:
    double radio; /**< Radio del círculo. */

public:
/**
 * @brief Constructor con parámetros.
 * 
 * @param nombre Nombre de la figura.
 * @param radio Radio del círculo.
 */
    Circulo(std::string nombre, double radio);

    /**
     * @brief Calcula el área del círculo.
     * 
     * Fórmula: \f$ A = \pi \times r^2 \f$
     *  
     * @return double 
     */
    double calcularArea() override;

    /**
     * @brief Muestra en consola el nombre y el radio del círculo.
     */
    void describir() override;

    /**
     * @brief Devuelve el radio del círculo.
     * 
     * @return Radio como valor double. 
     */
    double obtenerRadio();
};

#endif  // CIRCULO_HPP
