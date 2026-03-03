#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

/**
 * @class Empleado
 * @brief Clase base que representa un empleado genérico.
 *
 * Contiene atributos comunes a cualquier empleado como nombre, ID y salario base.
 */
class Empleado {
protected:
    std::string nombre;   /**< Nombre completo del empleado */
    std::string id;       /**< Identificador único del empleado */
    float salarioBase;    /**< Salario base mensual */

public:
    /**
     * @brief Constructor por defecto.
     * Inicializa nombre e id a cadenas vacías y salarioBase a 0.0.
     */
    Empleado();

    /**
     * @brief Constructor con parámetros.
     * @param nombre Nombre completo del empleado.
     * @param id Identificador único del empleado.
     * @param salarioBase Salario base mensual.
     */
    Empleado(std::string nombre, std::string id, float salarioBase);

    /** @brief Actualiza el nombre del empleado.
     *  @param nuevoNombre Nuevo nombre a asignar.
     */
    void actualizarNombre(std::string nuevoNombre);

    /** @brief Actualiza el ID del empleado.
     *  @param nuevoId Nuevo ID a asignar.
     */
    void actualizarId(std::string nuevoId);

    /** @brief Actualiza el salario base del empleado.
     *  @param nuevoSalarioBase Nuevo salario base a asignar.
     */
    void actualizarSalarioBase(float nuevoSalarioBase);

    /** @brief Obtiene el nombre del empleado.
     *  @return Nombre del empleado.
     */
    std::string obtenerNombre();

    /** @brief Obtiene el ID del empleado.
     *  @return ID del empleado.
     */
    std::string obtenerId();

    /** @brief Obtiene el salario base del empleado.
     *  @return Salario base mensual.
     */
    float obtenerSalarioBase();

    /** 
     * @brief Muestra la información del empleado por consola.
     */
    void mostrarInformacion();
};

#endif // EMPLEADO_H