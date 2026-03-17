#ifndef FIGURA_HPP
#define FIGURA_HPP

#include <string>

/**
 * @file figura.hpp
 * @brief Declaración de la clase base abstracta Figura.
 */

/**
 * @class Figura
 *
 * @brief Clase base abstracta que define la interfaz común para figuras
 * geométricas.
 *
 * No se pueden crear objetos de esta clase directamente. Las clases derivadas
 * deben implementar calcularArea() y describir().
 */
class Figura {
 protected:
  std::string nombre; /**< Nombre de la figura */

 public:
  /**
   * @brief Constructor con parámetros.
   *
   * @param nombre Nombre de la figura.
   */
  Figura(std::string nombre);

  /**
   * @brief Destructor virtual.
   *
   * Declarado virtual para garantizar que al hacer delete sobre un puntero
   * Figura* se ejecute el destructor de la clase derivada correspondiente.
   */
  virtual ~Figura();

  /**
   * @brief Calcula el área de la figura.
   *
   * @return Área de la figura como valor double.
   */
  virtual double calcularArea() = 0;

  /**
   * @brief Muestra en consola el nombre y los datos relevantes de la figura.
   *
   */
  virtual void describir() = 0;

  /**
   * @brief Devuelve el nombre de la figura.
   *
   * @return Nombre de la figura como std::string.
   */
  std::string obtenerNombre();
};

#endif // FIGURA_HPP
