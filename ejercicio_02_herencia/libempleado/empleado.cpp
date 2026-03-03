#include <libempleado/empleado.hpp>
#include <iostream>

/**
 * @brief Constructor por defecto.
 * Inicializa atributos con valores predeterminados.
 */
Empleado::Empleado() {
    nombre = "";
    id = "";
    salarioBase = 0.0f;
}

/**
 * @brief Constructor con parámetros.
 * @param nombre Nombre completo del empleado.
 * @param id Identificador único del empleado.
 * @param salarioBase Salario base mensual.
 */
Empleado::Empleado(std::string nombre, std::string id, float salarioBase) {
    this->nombre = nombre;
    this->id = id;
    this->salarioBase = salarioBase;
}

/**
 * @brief Actualiza el nombre del empleado.
 * @param nuevoNombre Nuevo nombre a asignar.
 */
void Empleado::actualizarNombre(std::string nuevoNombre) {
    nombre = nuevoNombre;
}

/**
 * @brief Actualiza el ID del empleado.
 * @param nuevoId Nuevo ID a asignar.
 */
void Empleado::actualizarId(std::string nuevoId) {
    id = nuevoId;
}

/**
 * @brief Actualiza el salario base del empleado.
 * @param nuevoSalarioBase Nuevo salario base a asignar.
 */
void Empleado::actualizarSalarioBase(float nuevoSalarioBase) {
    salarioBase = nuevoSalarioBase;
}

/**
 * @brief Obtiene el nombre del empleado.
 * @return Nombre del empleado.
 */
std::string Empleado::obtenerNombre() {
    return nombre;
}

/**
 * @brief Obtiene el ID del empleado.
 * @return ID del empleado.
 */
std::string Empleado::obtenerId() {
    return id;
}

/**
 * @brief Obtiene el salario base del empleado.
 * @return Salario base mensual.
 */
float Empleado::obtenerSalarioBase() {
    return salarioBase;
}

/**
 * @brief Muestra la información del empleado por consola.
 */
void Empleado::mostrarInformacion() {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Salario base: " << salarioBase << std::endl;
}