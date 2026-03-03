# Ejercicio: ejercicio_02_herencia.md
<div align="center">

<img alt="banner_empleado" src="https://static.vecteezy.com/system/resources/previews/003/820/452/non_2x/abstract-technology-industrial-business-process-organisation-structure-website-header-banner-photo.jpg"/>

</div>

## Descripción
El directorio **ejercicio_02_herencia** contiene la implementación de la actividad que se centra en el diseño de herencia en C++. Se implementan dos clases: `Empleado` (clase base) y `EmpleadoTiempoCompleto` (clase derivada), aplicando conceptos como modificador `protected`, constructores con lista de inicialización, sobrescritura de métodos y reutilización de código.

El proyecto incluye un **Makefile** que automatiza la compilación y ejecución del programa.

## Uso rápido con Makefile

### Requisitos
- Compilador `g++`
- Herramienta `make`

### Pasos de ejecución
1. Abrir una terminal.
2. Entrar al directorio del proyecto:
  ```bash
  $ cd ejercicio_02_herencia
  ```
3. Ejecutar el Makefile:
  ```bash
  $ make
  ```
  > Este comando compila el proyecto y genera el ejecutable en la carpeta `bin/`.

### Targets disponibles
- `make` — objetivo por defecto: compila y ejecuta el proyecto.
- `make clean` — elimina archivos generados (binarios, objetos, etc.).

## Compilación sin `make`

En caso de no contar con la herramienta `make`, este proyecto sigue la convención **Canonical Project Structure**.

1. Para compilar el programa desde la raíz del proyecto, ejecuta el siguiente comando:
  ```powershell
  g++ -std=c++17 -I . libempleado/empleado.cpp libempleado/empleado_tiempo_completo.cpp libempleado/main_empleado.cpp -o empleado
  ```
2. Para ejecutar el programa:
  ```powershell
  ./empleado
  ```

## Contacto
- **C. Rodríguez Sánchez Gerardo Israel** (Estudiante de la LIC)  
  Correo: `a19200922@alumnos.uady.mx`