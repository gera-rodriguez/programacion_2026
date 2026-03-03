#ifndef EMPLEADO_TIEMPO_COMPLETO_H
#define EMPLEADO_TIEMPO_COMPLETO_H

#include <libempleado/empleado.hpp>

/**
 * @class EmpleadoTiempoCompleto
 * @brief Clase derivada que representa un empleado a tiempo completo.
 *
 * Añade atributos específicos como horas semanales y bono mensual.
 */
class EmpleadoTiempoCompleto : public Empleado {
private:
    int horasSemanales; /**< Horas de trabajo por semana */
    float bono;         /**< Bono mensual adicional */

public:
    /**
     * @brief Constructor por defecto.
     * Inicializa atributos propios y llama al constructor por defecto de Empleado.
     */
    EmpleadoTiempoCompleto();

    /**
     * @brief Constructor con parámetros.
     * @param nombre Nombre completo del empleado.
     * @param id Identificador único del empleado.
     * @param salarioBase Salario base mensual.
     * @param horasSemanales Horas de trabajo por semana.
     * @param bono Bono mensual adicional.
     */
    EmpleadoTiempoCompleto(std::string nombre, std::string id, float salarioBase, int horasSemanales, float bono);
    
    /** @brief Actualiza las horas semanales.
     *  @param nuevasHoras Nuevo valor de horas semanales.
     */
    void actualizarHorasSemanales(int nuevasHoras);

    /** @brief Actualiza el bono mensual.
     *  @param nuevoBono Nuevo valor de bono.
     */
    void actualizarBono(float nuevoBono);

    /** @brief Obtiene las horas semanales.
     *  @return Horas semanales.
     */
    int obtenerHorasSemanales();

    /** @brief Obtiene el bono mensual.
     *  @return Bono mensual.
     */
    float obtenerBono();

    /** 
     * @brief Muestra la información del empleado a tiempo completo.
     * Sobrescribe el método de la clase base.
     */
    void mostrarInformacion();

    /**
     * @brief Calcula el salario total (salario base + bono).
     * @return Salario total mensual.
     */
    float calcularSalarioTotal();
};

#endif // EMPLEADO_TIEMPO_COMPLETO_H