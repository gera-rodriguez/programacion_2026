#include <iostream>
#include <libempleado/empleado_tiempo_completo.hpp>

/**
 * @brief Programa principal que demuestra el uso de las clases Empleado y EmpleadoTiempoCompleto.
 */
int main() {
    std::cout << "=== Sistema de Gestión de Empleados ===" << std::endl;
    std::cout << std::endl;

    // Empleado (solo clase base)
    Empleado emp1("Ana López", "EMP-001", 15000.0f);
    std::cout << "Empleado (clase base):" << std::endl;
    emp1.mostrarInformacion();
    std::cout << std::endl;

    // Empleado a tiempo completo (constructor por defecto)
    EmpleadoTiempoCompleto etc1;
    std::cout << "Empleado tiempo completo (constructor por defecto):" << std::endl;
    etc1.mostrarInformacion();
    std::cout << std::endl;

    // Empleado a tiempo completo (constructor con parámetros)
    EmpleadoTiempoCompleto etc2("Carlos Ruiz", "EMP-002", 20000.0f, 40, 2000.0f);
    std::cout << "Empleado tiempo completo (constructor con parámetros):" << std::endl;
    etc2.mostrarInformacion();
    std::cout << "Salario total: " << etc2.calcularSalarioTotal() << std::endl;
    std::cout << std::endl;

    // Actualizar datos y mostrar de nuevo
    etc2.actualizarBono(3000.0f);
    std::cout << "Después de actualizar bono:" << std::endl;
    etc2.mostrarInformacion();
    std::cout << "Salario total: " << etc2.calcularSalarioTotal() << std::endl;

    return 0;
}