#include <libempleado/empleado_tiempo_completo.hpp>
#include <iostream>

/**
 * @brief Constructor por defecto.
 * Inicializa horasSemanales y bono, llama al constructor por defecto de Empleado.
 */
EmpleadoTiempoCompleto::EmpleadoTiempoCompleto()
    : Empleado() {
    horasSemanales = 0;
    bono = 0.0f;
}

/**
 * @brief Constructor con parámetros.
 * @param nombre Nombre completo del empleado.
 * @param id Identificador único del empleado.
 * @param salarioBase Salario base mensual.
 * @param horasSemanales Horas de trabajo por semana.
 * @param bono Bono mensual adicional.
 */
EmpleadoTiempoCompleto::EmpleadoTiempoCompleto(std::string nombre, std::string id, float salarioBase, int horasSemanales, float bono)
    : Empleado(nombre, id, salarioBase) {
    this->horasSemanales = horasSemanales;
    this->bono = bono;
}

/**
 * @brief Actualiza las horas semanales.
 * @param nuevasHoras Nuevo valor de horas semanales.
 */
void EmpleadoTiempoCompleto::actualizarHorasSemanales(int nuevasHoras) {
    horasSemanales = nuevasHoras;
}

/**
 * @brief Actualiza el bono mensual.
 * @param nuevoBono Nuevo valor de bono.
 */
void EmpleadoTiempoCompleto::actualizarBono(float nuevoBono) {
    bono = nuevoBono;
}

/**
 * @brief Obtiene las horas semanales.
 * @return Horas semanales.
 */
int EmpleadoTiempoCompleto::obtenerHorasSemanales() {
    return horasSemanales;
}

/**
 * @brief Obtiene el bono mensual.
 * @return Bono mensual.
 */
float EmpleadoTiempoCompleto::obtenerBono() {
    return bono;
}

/**
 * @brief Muestra la información completa del empleado a tiempo completo.
 * Llama a la versión base y luego muestra horas y bono.
 */
void EmpleadoTiempoCompleto::mostrarInformacion() {
    Empleado::mostrarInformacion();
    std::cout << "Horas semanales: " << horasSemanales << std::endl;
    std::cout << "Bono: " << bono << std::endl;
}

/**
 * @brief Calcula el salario total del empleado.
 * @return Suma de salario base y bono.
 */
float EmpleadoTiempoCompleto::calcularSalarioTotal() {
    return salarioBase + bono;
}